int __thiscall sub_1002E5E0(_DWORD *this, char a2, int a3)
{
  unsigned int v4; // eax
  int v5; // edi
  int *v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx
  unsigned int v10; // eax

  v4 = this[672];
  v5 = 1;
  if ( v4 != -1 )
  {
    v6 = &off_1061BE18[4 * (this[672] & 0xFFF) + 1];
    v7 = v4 >> 12;
    if ( v6[1] == v7 )
    {
      if ( *v6 )
      {
        if ( v6[1] == v7 )
          v8 = *v6;
        else
          v8 = 0;
        if ( !(unsigned __int8)sub_10230A20(v8) )
          return 0;
        v5 = 2;
      }
    }
  }
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 264))(this) )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 1088))(this) )
    return 0;
  if ( !a2 )
  {
    v10 = this[581];
    if ( v10 >= 2 && this[584] != 1 && (v10 != 2 || a3 < 1) )
      return 0;
  }
  return v5;
}
