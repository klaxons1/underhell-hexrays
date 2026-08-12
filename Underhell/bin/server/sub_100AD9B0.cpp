unsigned int __thiscall sub_100AD9B0(void *this)
{
  unsigned int result; // eax
  unsigned int v3; // eax
  int v4; // esi
  int v5; // eax
  float *v6; // ebx
  unsigned int v7; // eax
  int v8; // esi
  int v9; // ecx

  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 8))(this);
  if ( (_BYTE)result )
  {
    *((float *)this + 11) = *(float *)(dword_106B31C8 + 12);
    *((float *)this + 12) = *(float *)(dword_106B31C8 + 12);
    v3 = *((_DWORD *)this + 16);
    if ( v3 == -1 || off_1061BE18[4 * (*((_DWORD *)this + 16) & 0xFFF) + 2] != v3 >> 12 )
      v4 = 0;
    else
      v4 = off_1061BE18[4 * (*((_DWORD *)this + 16) & 0xFFF) + 1];
    result = sub_100D7680(v4);
    if ( result )
    {
      v5 = sub_100D7680(v4);
      v6 = &flt_1060B428;
      if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 1528))(v5, 0) )
        v6 = &flt_1060B430;
      v7 = *((_DWORD *)v6 + 1);
      if ( v7 == -1 || off_1061BE18[4 * ((_DWORD)v6[1] & 0xFFF) + 2] != v7 >> 12 )
        v8 = 0;
      else
        v8 = off_1061BE18[4 * ((_DWORD)v6[1] & 0xFFF) + 1];
      result = *((_DWORD *)this + 16);
      if ( result == -1 || (result >>= 12, off_1061BE18[4 * (*((_DWORD *)this + 16) & 0xFFF) + 2] != result) )
        v9 = 0;
      else
        v9 = off_1061BE18[4 * (*((_DWORD *)this + 16) & 0xFFF) + 1];
      if ( v8 == v9 )
      {
        *v6 = 0.0;
        v6[1] = NAN;
      }
    }
  }
  return result;
}
