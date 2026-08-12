int __usercall sub_10369E80@<eax>(int a1@<ecx>, int a2@<edi>)
{
  sub_100E8220(a2, "models/headcrab.mdl");
  sub_1023B8B0("NPC_FastHeadcrab.Idle");
  sub_1023B8B0("NPC_FastHeadcrab.Alert");
  sub_1023B8B0("NPC_FastHeadcrab.Pain");
  sub_1023B8B0("NPC_FastHeadcrab.Die");
  sub_1023B8B0("NPC_FastHeadcrab.Bite");
  sub_1023B8B0("NPC_FastHeadcrab.Attack");
  return sub_10021D80(a1);
}
