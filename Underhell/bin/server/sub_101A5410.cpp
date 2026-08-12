int __usercall sub_101A5410@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  int v3; // eax

  sub_1032F080();
  a1[202] = a1[973];
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
  v3 = a1[973];
  switch ( v3 )
  {
    case 0:
      a1[204] = "models/gibs/bodyparts/infected/inmate_leftarm.mdl";
      a1[205] = "models/gibs/bodyparts/infected/inmate_rightarm.mdl";
      a1[206] = "models/gibs/bodyparts/infected/inmate_leftleg.mdl";
      a1[207] = "models/gibs/bodyparts/infected/inmate_rightleg.mdl";
LABEL_17:
      a1[203] = String;
      break;
    case 1:
      a1[204] = "models/gibs/bodyparts/infected/worker_leftarm.mdl";
      a1[205] = "models/gibs/bodyparts/infected/worker_rightarm.mdl";
      a1[206] = "models/gibs/bodyparts/infected/worker_leftleg.mdl";
      a1[207] = "models/gibs/bodyparts/infected/worker_rightleg.mdl";
      goto LABEL_17;
    case 2:
      a1[204] = "models/gibs/bodyparts/infected/doctor_leftarm.mdl";
      a1[205] = "models/gibs/bodyparts/infected/doctor_rightarm.mdl";
      a1[206] = "models/gibs/bodyparts/infected/doctor_leftleg.mdl";
      a1[207] = "models/gibs/bodyparts/infected/doctor_rightleg.mdl";
      goto LABEL_17;
    case 3:
      a1[204] = "models/gibs/bodyparts/infected/uniform_leftarm.mdl";
      a1[205] = "models/gibs/bodyparts/infected/uniform_rightarm.mdl";
      a1[206] = "models/gibs/bodyparts/infected/uniform_leftleg.mdl";
      a1[207] = "models/gibs/bodyparts/infected/uniform_rightleg.mdl";
      goto LABEL_17;
    case 4:
      a1[204] = "models/gibs/bodyparts/infected/urban_leftarm.mdl";
      a1[205] = "models/gibs/bodyparts/infected/urban_rightarm.mdl";
      a1[206] = "models/gibs/bodyparts/infected/urban_leftleg.mdl";
      a1[207] = "models/gibs/bodyparts/infected/urban_rightleg.mdl";
      goto LABEL_17;
    case 5:
      a1[204] = "models/gibs/bodyparts/infected/rural_leftarm.mdl";
      a1[205] = "models/gibs/bodyparts/infected/rural_rightarm.mdl";
      a1[206] = "models/gibs/bodyparts/infected/rural_leftleg.mdl";
      a1[207] = "models/gibs/bodyparts/infected/rural_rightleg.mdl";
      goto LABEL_17;
    case 6:
      a1[204] = "models/gibs/bodyparts/infected/guard_leftarm.mdl";
      a1[205] = "models/gibs/bodyparts/infected/guard_rightarm.mdl";
      a1[206] = "models/gibs/bodyparts/infected/guard_leftleg.mdl";
      a1[207] = "models/gibs/bodyparts/infected/guard_rightleg.mdl";
      goto LABEL_17;
    case 7:
      a1[204] = "models/gibs/bodyparts/infected/office_leftarm.mdl";
      a1[205] = "models/gibs/bodyparts/infected/office_rightarm.mdl";
      a1[206] = "models/gibs/bodyparts/infected/office_leftleg.mdl";
      a1[207] = "models/gibs/bodyparts/infected/office_rightleg.mdl";
      goto LABEL_17;
  }
  sub_1023B8B0("Zombie.FootstepRight");
  sub_1023B8B0("Zombie.FootstepLeft");
  sub_1023B8B0("Zombine.ScuffRight");
  sub_1023B8B0("Zombine.ScuffLeft");
  sub_1023B8B0("Zombie.AttackHit");
  sub_1023B8B0("Zombie.AttackMiss");
  sub_1023B8B0("Zombine.Pain");
  sub_1023B8B0("Zombine.Die");
  sub_1023B8B0("Zombine.Alert");
  sub_1023B8B0("Zombine.Idle");
  sub_1023B8B0("Zombine.ReadyGrenade");
  sub_1023B8B0("Metal.Door_Breach");
  sub_1023B8B0("ATV_engine_null");
  sub_1023B8B0("Zombine.Charge");
  return sub_1023B8B0("Zombie.Attack");
}
