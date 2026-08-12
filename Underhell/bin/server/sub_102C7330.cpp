__int16 __usercall sub_102C7330@<ax>(int a1@<edi>)
{
  sub_100E8220(a1, "models/props_combine/suit_charger001.mdl");
  sub_1023B8B0("SuitRecharge.Deny");
  sub_1023B8B0("SuitRecharge.Start");
  return sub_1023B8B0("SuitRecharge.ChargingLoop");
}
