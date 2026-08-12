int __usercall sub_1040AC80@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  int v4; // [esp+4h] [ebp-4h] BYREF

  sub_1023B8B0("Weapon_StriderBuster.StickToEntity");
  sub_1023B8B0("Weapon_StriderBuster.Detonate");
  sub_1023B8B0("Weapon_StriderBuster.Dud_Detonate");
  sub_1023B8B0("Weapon_StriderBuster.Ping");
  sub_100E8220(a2, "sprites/orangeflare1.vmt");
  sub_10260680("env_citadel_energy_core", 0);
  sub_10260680("sparktrail", 0);
  a1[432] = sub_100E8220(a2, "sprites/lgtning.vmt");
  sub_101543E0((int)"striderbuster_attach");
  sub_101543E0((int)"striderbuster_attached_pulse");
  sub_101543E0((int)"striderbuster_explode_core");
  sub_101543E0((int)"striderbuster_explode_dummy_core");
  sub_101543E0((int)"striderbuster_break_flechette");
  sub_101543E0((int)"striderbuster_trail");
  sub_101543E0((int)"striderbuster_shotdown_trail");
  sub_101543E0((int)"striderbuster_break");
  sub_101543E0((int)"striderbuster_flechette_attached");
  a1[115] = *sub_10162BE0(&v4, "models/magnusson_device.mdl");
  sub_100D8500(a1);
  return sub_10214020((int)a1, a2);
}
