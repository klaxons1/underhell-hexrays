int __usercall sub_103DF390@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  sub_102664C0(a1, a2);
  sub_1023B8B0("Airboat_engine_stop");
  sub_1023B8B0("Airboat_engine_start");
  sub_1023B8B0("Airboat.FireGunHeavy");
  sub_1023B8B0("Airboat.FireGunRevDown");
  sub_1023B8B0("Airboat_engine_idle");
  sub_1023B8B0("Airboat_engine_fullthrottle");
  sub_1023B8B0("Airboat_fan_idle");
  sub_1023B8B0("Airboat_fan_fullthrottle");
  sub_1023B8B0("Airboat_water_stopped");
  sub_1023B8B0("Airboat_water_fast");
  sub_1023B8B0("Airboat_impact_splash");
  sub_1023B8B0("Airboat_impact_hard");
  sub_1023B8B0("Airboat_headlight_on");
  sub_1023B8B0("Airboat_headlight_off");
  sub_1023B8B0("Airboat.FireGunLoop");
  sub_10154360((int)"effects/splashwake1");
  return sub_10154360((int)"effects/splashwake4");
}
