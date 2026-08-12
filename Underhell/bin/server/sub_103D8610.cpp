int __usercall sub_103D8610@<eax>(int a1@<ecx>, int a2@<edi>)
{
  sub_100E8220(a2, "models/combine_soldier.mdl");
  word_106ED198 = sub_100E8220(a2, "sprites/light_glow03.vmt");
  word_106ED19C = sub_100E8220(a2, "sprites/muzzleflash1.vmt");
  sub_100E8220(a2, "effects/bluelaser1.vmt");
  sub_10260680("sniperbullet", 0);
  sub_1023B8B0("NPC_Sniper.Die");
  sub_1023B8B0("NPC_Sniper.TargetDestroyed");
  sub_1023B8B0("NPC_Sniper.HearDanger");
  sub_1023B8B0("NPC_Sniper.FireBullet");
  sub_1023B8B0("NPC_Sniper.Reload");
  sub_1023B8B0("NPC_Sniper.SonicBoom");
  return sub_10021D80(a1);
}
