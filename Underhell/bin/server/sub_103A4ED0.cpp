bool __thiscall sub_103A4ED0(_DWORD *this, int a2)
{
  int v2; // edi
  _DWORD *v5; // ecx
  int v6; // eax
  unsigned int v7; // eax
  int v8; // ecx

  v2 = a2;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 220))(a2) == 7
    && *(float *)(dword_106B31C8 + 12) < (double)*(float *)(v2 + 5700) )
  {
    return 0;
  }
  v5 = (_DWORD *)this[699];
  if ( v5 )
  {
    v6 = sub_100B1560(v5, &a2, 1);
    if ( v6 )
    {
      while ( 1 )
      {
        v7 = *(_DWORD *)(v6 + 2420);
        if ( v7 == -1 || off_1061BE18[4 * (v7 & 0xFFF) + 2] != v7 >> 12 )
          v8 = 0;
        else
          v8 = off_1061BE18[4 * (v7 & 0xFFF) + 1];
        if ( v8 == v2 )
          break;
        v6 = sub_100B1630((_DWORD *)this[699], &a2, 1);
        if ( !v6 )
          return (*(int (__thiscall **)(_DWORD *, int))(*this + 1080))(this, v2) != 3;
      }
      return 0;
    }
  }
  return (*(int (__thiscall **)(_DWORD *, int))(*this + 1080))(this, v2) != 3;
}
