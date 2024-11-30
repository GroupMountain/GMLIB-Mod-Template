#include "Global.h"

namespace my_mod {

std::unique_ptr<Entry>& Entry::getInstance() {
    static std::unique_ptr<Entry> instance;
    return instance;
}

bool Entry::load() {
    return true;
}

bool Entry::enable() {
    return true;
}

bool Entry::disable() {
    return true;
}

// bool Entry::unload() {
//     return true;
// }

} // namespace my_mod

LL_REGISTER_MOD(my_mod::Entry, my_mod::Entry::getInstance());