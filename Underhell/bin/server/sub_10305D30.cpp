int __usercall sub_10305D30@<eax>(int a1@<edi>)
{
  sub_100E8220(a1, "models/grub_nugget_small.mdl");
  sub_100E8220(a1, "models/grub_nugget_medium.mdl");
  sub_100E8220(a1, "models/grub_nugget_large.mdl");
  sub_1023B8B0("GrubNugget.Touch");
  sub_1023B8B0("NPC_Antlion_Grub.Explode");
  return sub_101543E0((int)"antlion_spit_player");
}
