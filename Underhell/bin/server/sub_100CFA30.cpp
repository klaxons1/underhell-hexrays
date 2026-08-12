int sub_100CFA30()
{
  int v0; // eax

  v0 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 136))(dword_106B3CDC);
  sub_10275FE0(dword_106B31D8, v0);
  word_10696BA4 = sub_100E8220("sprites/zerogxplode.vmt");
  word_10696BA0 = sub_100E8220("sprites/steam1.vmt");
  word_10696B98 = sub_100E8220("sprites/bubble.vmt");
  word_10696BAC = sub_100E8220(off_1060E764);
  sub_101543E0("blood_impact_red_01");
  sub_101543E0("blood_impact_green_01");
  sub_101543E0("blood_impact_yellow_01");
  sub_100E8220("effects/bubble.vmt");
  sub_100E8220("models/weapons/w_bullet.mdl");
  sub_1023B8B0("BaseCombatWeapon.WeaponDrop");
  return sub_1023B8B0("BaseCombatWeapon.WeaponMaterialize");
}
