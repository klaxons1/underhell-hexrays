int __thiscall sub_100D0C40(_DWORD *this)
{
  int v2; // eax

  v2 = this[313];
  *this = &CBaseCombatWeapon::`vftable';
  if ( v2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF4 + 88))(dword_106BAFF4, v2);
    this[313] = 0;
  }
  sub_100D0C20((int)this);
  sub_1010BB10(this + 337);
  sub_1010BB10(this + 331);
  sub_1010BB10(this + 325);
  sub_1010BB10(this + 319);
  return sub_100C4960(this);
}
