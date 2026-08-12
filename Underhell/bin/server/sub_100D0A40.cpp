int __thiscall sub_100D0A40(unsigned __int16 *this)
{
  unsigned int v2; // ebx
  int *v3; // ecx

  if ( (*((_DWORD *)this + 48) & 0x20) != 0 )
  {
    sub_1023C380((int)"BaseCombatWeapon.WeaponMaterialize", 0.0, 0);
    v2 = *((_DWORD *)this + 48) & 0xFFFFFFDF;
    if ( *((_DWORD *)this + 48) != v2 )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v3 = (int *)*((_DWORD *)this + 6);
        if ( v3 )
          sub_100194B0(v3, 192);
      }
      *((_DWORD *)this + 48) = v2;
    }
    if ( *((_DWORD *)this + 6) )
      **((_DWORD **)this + 6) |= 0x80u;
    sub_100D8500(this);
    sub_100C1B10((int)this);
  }
  sub_10112C00(2);
  sub_101129A0(this[178] | 8);
  (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 908))(this);
  return sub_100EC3F0(0, 0.0, 0);
}
