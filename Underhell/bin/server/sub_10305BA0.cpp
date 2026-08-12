int __usercall sub_10305BA0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  sub_100E8220(a2, "models/antlion_grub.mdl");
  sub_100E8220(a2, "models/antlion_grub_squashed.mdl");
  *(_DWORD *)(a1 + 1124) = sub_100E8220(a2, "sprites/grubflare1.vmt");
  sub_1023B8B0("NPC_Antlion_Grub.Idle");
  sub_1023B8B0("NPC_Antlion_Grub.Alert");
  sub_1023B8B0("NPC_Antlion_Grub.Stimulated");
  sub_1023B8B0("NPC_Antlion_Grub.Die");
  sub_1023B8B0("NPC_Antlion_Grub.Squish");
  sub_101543E0((int)"GrubSquashBlood");
  sub_101543E0((int)"GrubBlood");
  sub_10260680("item_grubnugget", 0);
  return sub_100BD350();
}
