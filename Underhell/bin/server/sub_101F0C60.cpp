int __usercall sub_101F0C60@<eax>(int a1@<ecx>, double a2@<st0>)
{
  bool v3; // zf
  int *v4; // ecx
  bool v5; // al
  unsigned int v6; // eax
  int v7; // ecx
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  int *v12; // ecx
  int v13; // eax
  unsigned int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  int v17; // ecx
  float v19; // [esp+8h] [ebp-10h]

  v3 = *(_BYTE *)(a1 + 2137) == 0;
  *(_BYTE *)(a1 + 2123) = 0;
  if ( !v3 )
    sub_101ECF40(a1);
  if ( *(_BYTE *)(a1 + 2122) )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(a1 + 24);
      if ( v4 )
        sub_100194B0(v4, 2122);
    }
    *(_BYTE *)(a1 + 2122) = 0;
    a2 = *(float *)(a1 + 2128);
    sub_101E9580((void *)a1, COERCE_INT(*(float *)(a1 + 2128)), 0, 0, 0);
  }
  sub_101E60C0((unsigned int *)a1);
  v5 = *(_BYTE *)(a1 + 2172) == 0;
  *(_BYTE *)(a1 + 2172) = v5;
  v3 = !v5;
  v6 = *(_DWORD *)(a1 + 4028);
  if ( v3 )
  {
    if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 4028) & 0xFFF) + 2] != v6 >> 12 )
      v7 = 0;
    else
      v7 = off_1061BE18[4 * (*(_DWORD *)(a1 + 4028) & 0xFFF) + 1];
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 864))(v7, 32);
    v8 = *(_DWORD *)(a1 + 4028);
    if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 4028) & 0xFFF) + 2] != v8 >> 12 )
      v9 = 0;
    else
      v9 = off_1061BE18[4 * (*(_DWORD *)(a1 + 4028) & 0xFFF) + 1];
    (*(void (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v9 + 840))(
      v9,
      "models/weapons/v_flashlight_pg.mdl",
      0);
    v10 = *(_DWORD *)(a1 + 4028);
    if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 4028) & 0xFFF) + 2] != v10 >> 12 )
      v11 = 0;
    else
      v11 = off_1061BE18[4 * (*(_DWORD *)(a1 + 4028) & 0xFFF) + 1];
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 836))(v11, 1);
    if ( *(_BYTE *)(a1 + 2121) != 1 )
    {
      if ( *(_BYTE *)(a1 + 84) )
      {
        *(_BYTE *)(a1 + 88) |= 1u;
        *(_BYTE *)(a1 + 2121) = 1;
      }
      else
      {
        v12 = *(int **)(a1 + 24);
        if ( v12 )
          sub_100194B0(v12, 2121);
        *(_BYTE *)(a1 + 2121) = 1;
      }
    }
  }
  else
  {
    if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 4028) & 0xFFF) + 2] != v6 >> 12 )
      v13 = 0;
    else
      v13 = off_1061BE18[4 * (*(_DWORD *)(a1 + 4028) & 0xFFF) + 1];
    sub_101AB0C0(v13);
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1272))(a1);
    v14 = *(_DWORD *)(a1 + 4028);
    if ( v14 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 4028) & 0xFFF) + 2] != v14 >> 12 )
      v15 = 0;
    else
      v15 = off_1061BE18[4 * (*(_DWORD *)(a1 + 4028) & 0xFFF) + 1];
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v15 + 836))(v15, 2);
  }
  v16 = *(_DWORD *)(a1 + 4028);
  if ( v16 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 4028) & 0xFFF) + 2] != v16 >> 12 )
    v17 = 0;
  else
    v17 = off_1061BE18[4 * (*(_DWORD *)(a1 + 4028) & 0xFFF) + 1];
  sub_100D18C0(v17);
  v19 = a2 + *(float *)(dword_106B31C8 + 12);
  return sub_100EC4A0((int *)a1, v19, (int)"FlashLightContext");
}
