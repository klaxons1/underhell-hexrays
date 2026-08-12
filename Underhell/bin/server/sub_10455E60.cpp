int sub_10455E60()
{
  sub_1042C230(
    byte_106AE874,
    (int)"dbghist_dump",
    (int)sub_1012EF10,
    "Dump the debug history to the console. Format: <category id>\n"
    "    Categories:\n"
    "     0: Entity I/O\n"
    "     1: AI Decisions\n"
    "     2: Scene Print\n"
    "     3: Alyx Blind\n"
    "     4: Log of damage done to player",
    0,
    0);
  return atexit(sub_10470CE0);
}
