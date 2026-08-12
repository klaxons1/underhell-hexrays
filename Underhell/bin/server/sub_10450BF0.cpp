int sub_10450BF0()
{
  sub_1042C230(
    byte_10692804,
    (int)"ai_nodes",
    (int)sub_10063340,
    "Toggles node display.  First call displays the nodes for the given network as green objects.  Second call  displays "
    "the nodes and their IDs.  Nodes are color coded as follows:\n"
    "\tGreen\t\t- ground node\n"
    "\tCyan\t\t- air node\n"
    "\tMagenta\t- climb node\n"
    "\tGrey\t\t- node not available for selected hull size\n"
    "\tOrange \t- node currently locked",
    0x4000,
    0);
  return atexit(sub_1046EE50);
}
