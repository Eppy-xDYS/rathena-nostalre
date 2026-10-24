// Copyright (c) rAthena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

#ifndef CONFIG_CUSTOM_DEFINES_POST_HPP
#define CONFIG_CUSTOM_DEFINES_POST_HPP

/**
 * rAthena configuration file (http://rathena.org)
 * For detailed guidance on these check http://rathena.org/wiki/SRC/config/
 **/

// roBrowser does not obfuscate packets, a single player server has no use for it
#undef PACKET_OBFUSCATION
#undef PACKET_OBFUSCATION_WARN

/// Ragnarok Solo: send the monster HP bar (ZC_HP_INFO, 0x0977) to every client version, not only from 2012-04-04.
/// Its clients all read it: roBrowser, and nostalre-client (patched) at packet version 20120307.
#define SOLO_MONSTER_HP_BAR

#endif /* CONFIG_CUSTOM_DEFINES_POST_HPP */
