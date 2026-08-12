int __usercall sub_101CAE30@<eax>(int a1@<ecx>, int a2@<edi>)
{
  const char *v2; // eax
  _BYTE v4[4]; // [esp+4h] [ebp-4h] BYREF

  v2 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 28))(a1, v4);
  if ( !v2 )
    v2 = String;
  sub_100E8220(a2, v2);
  sub_100BD350();
  sub_100E8220(a2, "models/infected/infected_inmate.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/inmate_leftarm.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/inmate_rightarm.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/inmate_leftleg.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/inmate_rightleg.mdl");
  sub_100E8220(a2, "models/infected/infected_worker.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/worker_leftarm.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/worker_rightarm.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/worker_leftleg.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/worker_rightleg.mdl");
  sub_100E8220(a2, "models/items/worker_helmet.mdl");
  sub_100E8220(a2, "models/infected/infected_doctor.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/doctor_leftarm.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/doctor_rightarm.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/doctor_leftleg.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/doctor_rightleg.mdl");
  sub_100E8220(a2, "models/infected/infected_uniform.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/uniform_leftarm.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/uniform_rightarm.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/uniform_leftleg.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/uniform_rightleg.mdl");
  sub_100E8220(a2, "models/infected/infected_urban.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/urban_leftarm.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/urban_rightarm.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/urban_leftleg.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/urban_rightleg.mdl");
  sub_100E8220(a2, "models/infected/infected_rural.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/rural_leftarm.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/rural_rightarm.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/rural_leftleg.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/rural_rightleg.mdl");
  sub_100E8220(a2, "models/infected/infected_guard.mdl");
  sub_100E8220(a2, "models/items/guard_helmet.mdl");
  sub_100E8220(a2, "models/items/respirator.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/guard_leftarm.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/guard_rightarm.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/guard_leftleg.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/guard_rightleg.mdl");
  sub_100E8220(a2, "models/infected/infected_office.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/office_leftarm.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/office_rightarm.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/office_leftleg.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/infected/office_rightleg.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/soldier/leftarm.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/soldier/rightarm.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/soldier/leftleg.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/soldier/leftleg2.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/soldier/rightleg.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/soldier/rightleg2.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/soldier_prisonguard/leftarm.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/soldier_prisonguard/rightarm.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/soldier_prisonguard/leftleg.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/soldier_prisonguard/rightleg.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/pmc/pmc_leftarm.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/pmc/pmc_rightarm.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/pmc/pmc_leftleg.mdl");
  sub_100E8220(a2, "models/gibs/bodyparts/pmc/pmc_rightleg.mdl");
  sub_1023B8B0("Player.Splat");
  sub_1023B8B0("Player.Headshot");
  sub_1023B8B0("Player.Helmet");
  sub_101543E0((int)"blood_advisor_puncture_withdraw");
  return sub_101543E0((int)"impact_metal");
}
