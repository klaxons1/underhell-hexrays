char __cdecl sub_1016B0D0(_DWORD *a1, unsigned int *a2)
{
  char result; // al
  unsigned int v3; // ebx
  unsigned int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( a1 )
    v3 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a1 + 8))(a1);
  else
    v3 = -1;
  v4 = a1[78];
  if ( v4 == -1 || off_1061BE18[4 * (a1[78] & 0xFFF) + 2] != v4 >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (a1[78] & 0xFFF) + 1];
  if ( v5 )
    a2[79] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
  else
    a2[79] = -1;
  if ( a2 )
    a1[78] = *(_DWORD *)(*(int (__thiscall **)(unsigned int *))(*a2 + 8))(a2);
  else
    a1[78] = -1;
  if ( v3 == -1 || off_1061BE18[4 * (v3 & 0xFFF) + 2] != v3 >> 12 )
    v6 = 0;
  else
    v6 = off_1061BE18[4 * (v3 & 0xFFF) + 1];
  sub_1016AD60(a2 + 77, v6);
  a2[16] = v3;
  sub_100D8500(a2);
  (*(void (__thiscall **)(unsigned int *, int, _DWORD))(*a2 + 352))(a2, 2, 0);
  result = sub_100D94F0(a1);
  if ( result )
    a1[63] |= 0x10u;
  else
    a1[63] &= ~0x10u;
  return result;
}
