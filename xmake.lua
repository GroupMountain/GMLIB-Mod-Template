add_rules("mode.debug", "mode.release")

add_repositories("groupmountain-repo https://github.com/GroupMountain/xmake-repo.git")
add_repositories("liteldev-repo https://github.com/LiteLDev/xmake-repo.git")

if not has_config("vs_runtime") then
    set_runtimes("MD")
end

add_requires("levilaminalibrary")
add_requires("gmlib")

target("GMLIB-Mod-Template") -- Change this to your mod name.
    add_cxflags(
        "/EHa",
        "/utf-8"
    )
    add_defines(
        "NOMINMAX",
        "UNICODE"
    )
    add_files(
        "src/**.cpp"
    )
    add_includedirs(
        "src"
    )
    add_packages(
        "levilaminalibrary",
        "gmlib"
    )
    add_shflags(
        "/DELAYLOAD:bedrock_server.dll" -- Magic to import symbols from BDS
    )
    set_exceptions("none") -- To avoid conflicts with /EHa
    set_kind("shared")
    set_languages("c++23")
    set_symbols("debug")

    after_build(function (target)
        local plugin_packer = import("scripts.after_build")

        local plugin_define = {
            pluginName = target:name(),
            pluginFile = path.filename(target:targetfile()),
        }
        
        plugin_packer.pack_plugin(target,plugin_define)
    end)
