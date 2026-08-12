__int16 __usercall sub_102EFF10@<ax>(int a1@<edi>)
{
  sub_100E8220(a1, "models/props_combine/health_charger001.mdl");
  sub_1023B8B0("WallHealth.Deny");
  sub_1023B8B0("WallHealth.Start");
  sub_1023B8B0("WallHealth.LoopingContinueCharge");
  return sub_1023B8B0("WallHealth.Recharge");
}
