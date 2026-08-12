int __usercall sub_1010E2F0@<eax>(int a1@<edi>)
{
  sub_100E8220(a1, "cable/cable.vmt");
  sub_100E8220(a1, "cable/cable_lit.vmt");
  sub_100E8220(a1, "cable/chain.vmt");
  sub_100E8220(a1, "cable/rope.vmt");
  sub_100E8220(a1, "sprites/blueglow1.vmt");
  sub_100E8220(a1, "sprites/purpleglow1.vmt");
  sub_100E8220(a1, "sprites/purplelaser1.vmt");
  sub_1023B8B0("Hud.Hint");
  sub_1023B8B0("Player.FallDamage");
  sub_1023B8B0("Player.Swim");
  sub_1023B8B0("Player.PickupWeapon");
  sub_1023B8B0("Player.DenyWeaponSelection");
  sub_1023B8B0("Player.WeaponSelected");
  sub_1023B8B0("Player.WeaponSelectionClose");
  sub_1023B8B0("Player.WeaponSelectionMoveSlot");
  sub_1023B8B0("Bounce.Glass");
  sub_1023B8B0("Bounce.Metal");
  sub_1023B8B0("Bounce.Flesh");
  sub_1023B8B0("Bounce.Wood");
  sub_1023B8B0("Bounce.Shrapnel");
  sub_1023B8B0("Bounce.ShotgunShell");
  sub_1023B8B0("Bounce.Shell");
  sub_1023B8B0("Bounce.Concrete");
  sub_100E8220(a1, "models/player.mdl");
  sub_100E8220(a1, "models/gibs/agibs.mdl");
  sub_100E8220(a1, "models/weapons/v_hands.mdl");
  sub_1023B8B0("HUDQuickInfo.LowAmmo");
  sub_1023B8B0("HUDQuickInfo.LowHealth");
  sub_1023B8B0("FX_AntlionImpact.ShellImpact");
  sub_1023B8B0("Missile.ShotDown");
  sub_1023B8B0("Bullets.DefaultNearmiss");
  sub_1023B8B0("Bullets.GunshipNearmiss");
  sub_1023B8B0("Bullets.StriderNearmiss");
  sub_1023B8B0("Geiger.BeepHigh");
  return sub_1023B8B0("Geiger.BeepLow");
}
