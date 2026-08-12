int sub_10450DD0()
{
  sub_1042C230(
    byte_10692990,
    (int)"npc_create",
    (int)sub_10063E70,
    "Creates an NPC of the given type where the player is looking (if the given NPC can actually stand at that location)."
    "  Note that this only works for npc classes that are already in the world.  You can not create an entity that doesn'"
    "t have an instance in the level.\n"
    "\tArguments:\t{npc_class_name}",
    0x4000,
    0);
  return atexit(sub_1046EEF0);
}
