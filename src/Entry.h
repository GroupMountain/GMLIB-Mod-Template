#include <ll/api/mod/NativeMod.h>
#include <ll/api/mod/RegisterHelper.h>

namespace my_mod {

class Entry {

public:
    static std::unique_ptr<Entry>& getInstance();

    Entry(ll::mod::NativeMod& self) : mSelf(self) {}

    [[nodiscard]] ll::mod::NativeMod& getSelf() const { return mSelf; }

    bool load();

    bool enable();

    bool disable();

    // bool unload();

private:
    ll::mod::NativeMod& mSelf;
};

} // namespace my_mod