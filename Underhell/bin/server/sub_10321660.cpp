int __thiscall sub_10321660(void *this)
{
  unsigned int i; // esi

  sub_100E8220((int)this, "models/barnacle.mdl");
  for ( i = 0; i < 0x10; i += 4 )
    sub_100E8220((int)this, *(const char **)((char *)&off_1066D13C + i));
  sub_1023B8B0("NPC_Barnacle.Digest");
  sub_1023B8B0("NPC_Barnacle.Scream");
  sub_1023B8B0("NPC_Barnacle.PullPant");
  sub_1023B8B0("NPC_Barnacle.TongueStretch");
  sub_1023B8B0("NPC_Barnacle.FinalBite");
  sub_1023B8B0("NPC_Barnacle.Die");
  sub_1023B8B0("NPC_Barnacle.BreakNeck");
  sub_100E8220((int)this, "models/props_junk/rock001a.mdl");
  return sub_10021D80((int)this);
}
