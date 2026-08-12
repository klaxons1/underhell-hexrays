int __usercall sub_1037EBB0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  sub_100E8220(a2, "models/ichthyosaur.mdl");
  sub_1023B8B0("NPC_Ichthyosaur.Bite");
  sub_1023B8B0("NPC_Ichthyosaur.BiteMiss");
  sub_1023B8B0("NPC_Ichthyosaur.AttackGrowl");
  return sub_10021D80(a1);
}
