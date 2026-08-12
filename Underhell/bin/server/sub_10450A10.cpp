int sub_10450A10()
{
  sub_1042C190(
    byte_1069269C,
    (int)"ai_show_hints",
    (int)sub_100631A0,
    "Displays all hints as small boxes\n"
    "\tBlue\t\t- hint is available for use\n"
    "\tRed\t\t- hint is currently being used by an NPC\n"
    "\tOrange\t\t- hint not being used by timed out\n"
    "\tGrey\t\t- hint has been disabled",
    0x4000,
    0);
  return atexit(sub_1046EDB0);
}
