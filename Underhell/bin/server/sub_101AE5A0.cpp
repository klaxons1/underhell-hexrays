int __thiscall sub_101AE5A0(_DWORD *this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // esi
  __int16 v7; // ax

  *this = &CPhysMotor::`vftable';
  v2 = this[201];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 && *v3 && this[206] )
    {
      if ( v3[1] == v4 )
        v5 = *v3;
      else
        v5 = 0;
      v6 = *(_DWORD *)(v5 + 424);
      if ( v6 )
      {
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 76))(v6);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 72))(v6, v7 & 0xFF7F);
      }
    }
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF4 + 88))(dword_106BAFF4, this[206]);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF4 + 120))(dword_106BAFF4, this[207]);
  return sub_100DF1D0(this);
}
