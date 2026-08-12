int __usercall sub_103C5510@<eax>(int a1@<ecx>, int a2@<edi>)
{
  sub_100E8220(a2, "materials/effects/bluelaser2.vmt");
  sub_100E8220(a2, "models/combine_turrets/ground_turret.mdl");
  sub_1023B8B0("NPC_CeilingTurret.Deploy");
  *(_WORD *)(a1 + 3724) = sub_1023B8B0("NPC_FloorTurret.ShotSounds");
  sub_1023B8B0("NPC_FloorTurret.Die");
  sub_1023B8B0("NPC_FloorTurret.Ping");
  sub_1023B8B0("DoSpark");
  return sub_10021D80(a1);
}
