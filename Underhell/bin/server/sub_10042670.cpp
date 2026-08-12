double __thiscall sub_10042670(_DWORD *this)
{
  unsigned int v1; // ecx
  int *v2; // eax
  unsigned int v3; // ecx
  int v4; // eax

  v1 = *(_DWORD *)(this[647] + 124);
  if ( v1 == -1 )
    return 1.0;
  v2 = &off_1061BE18[4 * (v1 & 0xFFF) + 1];
  v3 = v1 >> 12;
  if ( v2[1] != v3 || !*v2 )
    return 1.0;
  if ( v2[1] == v3 )
    v4 = *v2;
  else
    v4 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) )
    return 10.0;
  else
    return 2.5999999;
}
