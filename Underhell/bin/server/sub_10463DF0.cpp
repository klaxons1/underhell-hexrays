int sub_10463DF0()
{
  sub_1042C930(
    byte_106DB0C0,
    (int)"ai_debug_actbusy",
    "0",
    0x4000,
    "Used to debug actbusy behavior. Usage:\n"
    "1: Constantly draw lines from NPCs to the actbusy nodes they've chosen to actbusy at.\n"
    "2: Whenever an NPC makes a decision to use an actbusy, show which actbusy they've chosen.\n"
    "3: Selected NPCs (with npc_select) will report why they're not choosing actbusy nodes.\n"
    "4: Display debug output of actbusy logic.\n"
    "5: Display safe zone volumes and info.\n");
  return atexit(sub_10476560);
}
