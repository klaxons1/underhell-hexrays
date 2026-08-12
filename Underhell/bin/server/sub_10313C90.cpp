__int16 __usercall sub_10313C90@<ax>(int a1@<edi>)
{
  sub_100F3A60();
  sub_100E8220(a1, "models/combine_helicopter/helicopter_bomb01.mdl");
  sub_1023B8B0("ReallyLoudSpark");
  sub_1023B8B0("NPC_AttackHelicopterGrenade.Ping");
  sub_1023B8B0("NPC_AttackHelicopterGrenade.PingCaptured");
  return sub_1023B8B0("NPC_AttackHelicopterGrenade.HardImpact");
}
