char __thiscall sub_10135DA0(_DWORD *this, _DWORD *a2)
{
  bool v3; // bl
  unsigned int v4; // eax

  v3 = 0;
  if ( this[254] != 2 )
    v3 = (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 320))(a2) != 0;
  if ( this[254] != 1 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 284))(a2) )
    v3 = 1;
  if ( (this[254] != 4 || a2[23] != dword_106AFE90) && !v3 )
    return 0;
  v4 = this[256];
  if ( v4 != -1 && off_1061BE18[4 * (this[256] & 0xFFF) + 2] == v4 >> 12 && off_1061BE18[4 * (this[256] & 0xFFF) + 1] )
    return sub_1013D760(this, a2);
  else
    return 1;
}
