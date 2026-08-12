int sub_10450D40()
{
  sub_1042C230(
    byte_10692900,
    (int)"npc_enemies",
    (int)sub_10063770,
    "Shows memory of NPC.  Draws an X on top of each memory.\n"
    "\tEluded entities drawn in blue (don't know where it went)\n"
    "\tUnreachable entities drawn in green (can't get to it)\n"
    "\tCurrent enemy drawn in red\n"
    "\tCurrent target entity drawn in magenta\n"
    "\tAll other entities drawn in pink\n"
    "\tArguments:   \t{npc_name} / {npc class_name} / no argument picks what player is looking at",
    0x4000,
    0);
  return atexit(sub_1046EEC0);
}
