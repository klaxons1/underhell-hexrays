int sub_10451010()
{
  sub_1042C230(
    byte_10692B64,
    (int)"npc_route",
    (int)sub_100639F0,
    "Displays the current route of the given NPC as a line on the screen.  Waypoints along the route are drawn as small c"
    "yan rectangles.  Line is color coded in the following manner:\n"
    "\tBlue\t- path to a node\n"
    "\tCyan\t- detour around an object (triangulation)\n"
    "\tRed\t- jump\n"
    "\tMaroon - path to final target position\n"
    "\tArguments:   \t{npc_name} / {npc_class_name} / no argument picks what player is looking at ",
    0x4000,
    0);
  return atexit(sub_1046EFB0);
}
