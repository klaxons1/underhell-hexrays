BOOL __thiscall sub_1013EC00(int this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ecx
  int v6; // eax
  int v7; // esi
  double v8; // st4
  double v9; // st7
  double v10; // st4
  double v11; // st5

  v3 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  if ( v3 == -1 )
    return 0;
  v4 = &dword_1069E3E4[4 * (v3 & 0xFFF)];
  if ( v4[1] != v3 >> 12 )
    return 0;
  v5 = *v4;
  if ( !v5 )
    return 0;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 20))(v5);
  v7 = v6;
  if ( !v6 || *(char **)(v6 + 92) != "env_fire" && !sub_100D6240((_DWORD *)v6, "env_fire") )
    return 0;
  if ( *(_BYTE *)(this + 32) && *(float *)(v7 + 828) <= 0.0 )
    return 0;
  if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
    sub_100DAE60(v7);
  v8 = *(float *)(this + 4) - *(float *)(v7 + 580);
  v9 = v8 * v8;
  v10 = *(float *)(this + 8) - *(float *)(v7 + 584);
  v11 = *(float *)(this + 12) - *(float *)(v7 + 588);
  return v11 * v11 + v10 * v10 + v9 < *(float *)(this + 16) && !sub_1013E940((_DWORD *)this, v7);
}
