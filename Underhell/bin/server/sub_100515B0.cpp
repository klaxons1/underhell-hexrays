char __thiscall sub_100515B0(int this, int a2)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // esi
  float v7[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( *(_WORD *)(a2 + 816) != 900 )
    return sub_1004B580((_BYTE *)this, a2);
  v2 = *(_DWORD *)(this + 20);
  if ( v2 == -1 )
    return 0;
  v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
  v4 = v2 >> 12;
  if ( v3[1] != v4 || !*v3 )
    return 0;
  v5 = v3[1] == v4 ? *v3 : 0;
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  v7[0] = *(float *)(a2 + 580);
  v7[1] = *(float *)(a2 + 584);
  v7[2] = *(float *)(a2 + 588) + 0.1;
  return (*(unsigned __int8 (__thiscall **)(int, float *, int, _DWORD))(*(_DWORD *)v5 + 544))(v5, v7, 16449, 0) != 0;
}
