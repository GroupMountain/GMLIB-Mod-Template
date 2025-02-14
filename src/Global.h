#pragma once

#include "Entry.h"
#include <include_all.h>

#define selfMod  my_mod::Entry::getInstance()
#define MOD_NAME selfMod.getSelf().getName()
#define logger   selfMod.getSelf().getLogger()