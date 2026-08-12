__int16 __usercall sub_103D1CF0@<ax>(int a1@<edi>)
{
  sub_100E8220(a1, "models/effects/combineball.mdl");
  sub_100E8220(a1, "sprites/combineball_trail_black_1.vmt");
  dword_1067E550 = sub_100E8220(a1, "sprites/lgtning.vmt");
  sub_1023B8B0("NPC_CombineBall.Launch");
  sub_1023B8B0("NPC_CombineBall.KillImpact");
  if ( *(_DWORD *)(dword_10698344 + 48) )
  {
    sub_1023B8B0("NPC_CombineBall_Episodic.Explosion");
    sub_1023B8B0("NPC_CombineBall_Episodic.WhizFlyby");
    sub_1023B8B0("NPC_CombineBall_Episodic.Impact");
  }
  else
  {
    sub_1023B8B0("NPC_CombineBall.Explosion");
    sub_1023B8B0("NPC_CombineBall.WhizFlyby");
    sub_1023B8B0("NPC_CombineBall.Impact");
  }
  return sub_1023B8B0("NPC_CombineBall.HoldingInPhysCannon");
}
