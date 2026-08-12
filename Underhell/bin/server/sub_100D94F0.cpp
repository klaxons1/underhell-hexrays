char __cdecl sub_100D94F0(_DWORD *a1)
{
  unsigned int v2; // eax
  int v3; // esi
  unsigned int v4; // eax
  int v5; // eax

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 320))(a1) )
    return 1;
  v2 = a1[78];
  if ( v2 == -1 || off_1061BE18[4 * (a1[78] & 0xFFF) + 2] != v2 >> 12 )
    v3 = 0;
  else
    v3 = off_1061BE18[4 * (a1[78] & 0xFFF) + 1];
  if ( v3 )
  {
    while ( !(unsigned __int8)sub_100D94F0(v3) )
    {
      v4 = *(_DWORD *)(v3 + 316);
      if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(v3 + 316) & 0xFFF) + 2] != v4 >> 12 )
        v5 = 0;
      else
        v5 = off_1061BE18[4 * (*(_DWORD *)(v3 + 316) & 0xFFF) + 1];
      v3 = v5;
      if ( !v5 )
        return 0;
    }
    return 1;
  }
  return 0;
}
