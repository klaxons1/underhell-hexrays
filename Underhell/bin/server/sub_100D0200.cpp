char __thiscall sub_100D0200(_DWORD *this)
{
  int v2; // ecx
  char result; // al
  unsigned int v4; // eax
  float v5; // [esp+0h] [ebp-Ch]

  v5 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0(v5, 0);
  v2 = this[106];
  if ( v2 )
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
  else
    result = this[64] & 1;
  if ( result )
  {
    v4 = this[103];
    if ( v4 != -1 && off_1061BE18[4 * (this[103] & 0xFFF) + 2] == v4 >> 12 )
    {
      if ( off_1061BE18[4 * (this[103] & 0xFFF) + 1] )
        sub_1023C380((int)"BaseCombatWeapon.WeaponDrop", 0.0, 0);
    }
    return (*(int (__thiscall **)(_DWORD *))(*this + 1348))(this);
  }
  return result;
}
