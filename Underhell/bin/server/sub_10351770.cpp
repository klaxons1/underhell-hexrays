void __usercall sub_10351770(int a1@<ecx>, int a2@<edi>)
{
  if ( (*(_DWORD *)(a1 + 248) & 0x2000) != 0 )
  {
    sub_100E8220(a2, "models/combine_helicopter.mdl");
    sub_10312F20(a2);
  }
  else
  {
    sub_100E8220(a2, "models/gunship.mdl");
  }
  sub_100E8220(a2, "sprites/lgtning.vmt");
  sub_10154360((int)"effects/ar2ground2");
  sub_10154360((int)"effects/blueblackflash");
  sub_1023B8B0("NPC_CombineGunship.SearchPing");
  sub_1023B8B0("NPC_CombineGunship.PatrolPing");
  sub_1023B8B0("NPC_Strider.Charge");
  sub_1023B8B0("NPC_Strider.Shoot");
  sub_1023B8B0("NPC_CombineGunship.SeeEnemy");
  sub_1023B8B0("NPC_CombineGunship.CannonStartSound");
  sub_1023B8B0("NPC_CombineGunship.Explode");
  sub_1023B8B0("NPC_CombineGunship.Pain");
  sub_1023B8B0("NPC_CombineGunship.CannonStopSound");
  sub_1023B8B0("NPC_CombineGunship.DyingSound");
  sub_1023B8B0("NPC_CombineGunship.CannonSound");
  sub_1023B8B0("NPC_CombineGunship.RotorSound");
  sub_1023B8B0("NPC_CombineGunship.ExhaustSound");
  sub_1023B8B0("NPC_CombineGunship.RotorBlastSound");
  if ( *(_DWORD *)(dword_10698344 + 48) )
  {
    sub_10260680("env_citadel_energy_core", 0);
    dword_10671968 = sub_100E8220(a2, "sprites/physbeam.vmt");
  }
  sub_10213890("models/gunship.mdl");
  nullsub_4();
}
