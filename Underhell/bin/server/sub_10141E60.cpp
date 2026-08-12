void __thiscall sub_10141E60(_DWORD *this, int a2)
{
  int v4; // eax
  double v5; // st7
  int v6; // edi
  int v7; // edx
  unsigned int v8; // eax
  int v9; // esi
  double v10; // st4
  double v11; // st7
  double v12; // st4
  double v13; // st5
  unsigned int v14; // eax
  float *v15; // ecx
  float i; // [esp+Ch] [ebp-4h]
  int v17; // [esp+18h] [ebp+8h]

  v4 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a2 + 24))(a2, "userid", 0);
  v17 = sub_10261A90(v4);
  if ( !strcmp("player_footstep", (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2)) )
    v5 = 75.0;
  else
    v5 = 500.0;
  v6 = 0;
  for ( i = v5; v6 < this[10]; ++v6 )
  {
    v7 = v17;
    if ( v17 )
    {
      v8 = *(_DWORD *)(this[7] + 4 * v6);
      if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(this[7] + 4 * v6) & 0xFFF) + 2] != v8 >> 12 )
        v9 = 0;
      else
        v9 = off_1061BE18[4 * (*(_DWORD *)(this[7] + 4 * v6) & 0xFFF) + 1];
      if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
      {
        sub_100DAE60(v9);
        v7 = v17;
      }
      if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
      {
        sub_100DAE60(v7);
        v7 = v17;
      }
      v10 = *(float *)(v7 + 580) - *(float *)(v9 + 580);
      v11 = v10 * v10;
      v12 = *(float *)(v7 + 584) - *(float *)(v9 + 584);
      v13 = *(float *)(v7 + 588) - *(float *)(v9 + 588);
      if ( i * i < v13 * v13 + v12 * v12 + v11 )
        continue;
    }
    v14 = *(_DWORD *)(this[7] + 4 * v6);
    if ( v14 == -1 || off_1061BE18[4 * (v14 & 0xFFF) + 2] != v14 >> 12 )
      v15 = 0;
    else
      v15 = (float *)off_1061BE18[4 * (*(_DWORD *)(this[7] + 4 * v6) & 0xFFF) + 1];
    sub_10141330(v15);
  }
}
