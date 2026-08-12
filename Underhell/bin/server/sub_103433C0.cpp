int __usercall sub_103433C0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  sub_100E8220(a2, "models/combine_soldier.mdl");
  sub_100E8220(a2, "effects/bluelaser1.vmt");
  dword_106E65D8 = sub_100E8220(a2, "sprites/light_glow03.vmt");
  sub_1023B8B0("NPC_Combine_Cannon.FireBullet");
  return sub_10021D80(a1);
}
