#pragma once

#include "Entry.h"
#include <include_all.h>

#define MOD_NAME "GMLIB-Mod-Template"
#define selfMod my_mod::Entry::getInstance()
#define logger selfMod->getSelf().getLogger()