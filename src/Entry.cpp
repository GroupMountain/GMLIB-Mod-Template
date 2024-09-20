#include "Entry.h"
#include "Global.h"

ll::Logger logger(MOD_NAME);

namespace my_mod {

std::unique_ptr<MyMod>& MyMod::getInstance() {
    static std::unique_ptr<MyMod> instance;
    return instance;
}

bool MyMod::load() {
    // Code for loading the mod goes here.
    return true;
}

bool MyMod::enable() {
    // Code for enabling the mod goes here.
    return true;
}

bool MyMod::disable() {
    // Code for disabling the mod goes here.
    return true;
}

} // namespace my_mod

LL_REGISTER_MOD(my_mod::MyMod, my_mod::MyMod::getInstance());