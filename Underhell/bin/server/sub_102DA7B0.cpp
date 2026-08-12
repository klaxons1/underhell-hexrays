int __usercall sub_102DA7B0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  sub_101E25F0(a1, a2);
  sub_1023B8B0("HL2Player.SprintNoPower");
  sub_1023B8B0("HL2Player.SprintStart");
  sub_1023B8B0("HL2Player.UseDeny");
  sub_1023B8B0("HL2Player.FlashLightOn");
  sub_1023B8B0("HL2Player.FlashLightOff");
  sub_1023B8B0("HL2Player.PickupWeapon");
  sub_1023B8B0("HL2Player.TrainUse");
  sub_1023B8B0("HL2Player.Use");
  sub_1023B8B0("HL2Player.BurnPain");
  sub_1023B8B0("HL2Player.Ironsighton");
  sub_1023B8B0("HL2Player.Ironsightoff");
  sub_1023B8B0("Player.Eat");
  sub_1023B8B0("Player.Drink");
  sub_100E8220(a2, "models/player/jake_casual.mdl");
  sub_100E8220(a2, "models/player/jake_guard.mdl");
  sub_100E8220(a2, "models/player/jake_inmate.mdl");
  return sub_100E8220(a2, "models/player/jake_pmc.mdl");
}
