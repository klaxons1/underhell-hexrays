bool __thiscall sub_10295EF0(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx

  v2 = this[15];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (this[15] & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        v5 = v3[1] == v4 ? *v3 : 0;
        if ( *(_DWORD *)(v5 + 860) == 1 )
          return *(_DWORD *)(this[1] + 2324) != 4;
      }
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)this[1] + 1088))(this[1]) )
    return 0;
  return (unsigned __int8)sub_1004B510(this, 1, 1) || (unsigned __int8)sub_1004B510(this, 0, 1);
}
