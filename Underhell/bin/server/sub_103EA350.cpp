int __usercall sub_103EA350@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  sub_10260680("npc_seagull", 0);
  sub_1023B8B0("PropJeep.AmmoClose");
  sub_1023B8B0("FuncTank.Fire");
  sub_1023B8B0("PropJeep.FireCannon");
  sub_1023B8B0("PropJeep.FireChargedCannon");
  sub_1023B8B0("PropJeep.AmmoOpen");
  sub_1023B8B0("Jeep.GaussCharge");
  sub_101543E0((int)"muzzle_star_uh");
  sub_100E8220(a2, "sprites/laserbeam.vmt");
  return sub_102664C0(a1, a2);
}
