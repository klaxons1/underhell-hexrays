int __usercall sub_1035CE30@<eax>(int a1@<ecx>, int a2@<edi>)
{
  sub_10021D80(a1);
  sub_100E8220(a2, "models/crow.mdl");
  sub_100E8220(a2, "models/pigeon.mdl");
  sub_100E8220(a2, "models/seagull.mdl");
  sub_1023B8B0("NPC_Crow.Hop");
  sub_1023B8B0("NPC_Crow.Squawk");
  sub_1023B8B0("NPC_Crow.Gib");
  sub_1023B8B0("NPC_Crow.Idle");
  sub_1023B8B0("NPC_Crow.Alert");
  sub_1023B8B0("NPC_Crow.Die");
  sub_1023B8B0("NPC_Crow.Pain");
  sub_1023B8B0("NPC_Crow.Flap");
  sub_1023B8B0("NPC_Seagull.Pain");
  sub_1023B8B0("NPC_Seagull.Idle");
  sub_1023B8B0("NPC_Pigeon.Idle");
  return sub_101543E0((int)"crow_death");
}
