char __thiscall sub_10172E80(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v6; // edi
  void (__thiscall *v7)(int); // edx
  int *v8; // ecx
  int *v9; // ecx
  double v10; // st7
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  void *v16; // eax
  _DWORD *v17; // ebx
  int v18; // eax
  int v19; // edx
  int v20; // edi
  int *v21; // ecx
  int v22; // ebx
  int v23; // eax
  float v25; // [esp+14h] [ebp-24h]
  float v26[3]; // [esp+28h] [ebp-10h] BYREF
  _DWORD *v27; // [esp+34h] [ebp-4h]
  int v28; // [esp+40h] [ebp+8h]

  v27 = this;
  if ( a2 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
    v5 = a2;
  else
    v5 = 0;
  if ( !a2 || !v5 )
    return 0;
  if ( *(_BYTE *)(v5 + 2137) )
    sub_101ECF40(v5);
  sub_100CF460((_DWORD *)v5);
  sub_101E60C0(v5);
  if ( *(_BYTE *)(v5 + 2121) )
  {
    if ( *(_BYTE *)(v5 + 2172) )
    {
      if ( *(_BYTE *)(v5 + 2122) )
        sub_101E9580(*(float *)(v5 + 2128), 0, 0, 0);
    }
    else
    {
      v6 = *(_DWORD *)(v5 + 4152);
      v7 = *(void (__thiscall **)(int))(*(_DWORD *)v5 + 1304);
      *(_DWORD *)(v5 + 4152) = 100;
      v7(v5);
      *(_DWORD *)(v5 + 4152) = v6;
    }
  }
  sub_102600F0(v5, "Valve_Hint_Flare");
  if ( *(_BYTE *)(v5 + 2122) != 1 )
  {
    if ( *(_BYTE *)(v5 + 84) )
    {
      *(_BYTE *)(v5 + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(v5 + 24);
      if ( v8 )
        sub_100194B0(v8, 2122);
    }
    *(_BYTE *)(v5 + 2122) = 1;
  }
  if ( *(_BYTE *)(v5 + 2121) != 1 )
  {
    if ( *(_BYTE *)(v5 + 84) )
    {
      *(_BYTE *)(v5 + 88) |= 1u;
    }
    else
    {
      v9 = *(int **)(v5 + 24);
      if ( v9 )
        sub_100194B0(v9, 2121);
    }
    *(_BYTE *)(v5 + 2121) = 1;
  }
  v10 = *(float *)(dword_106B31C8 + 12);
  *(float *)(v5 + 2128) = *(float *)(dword_106B31C8 + 12);
  v11 = sub_101E7EA0(1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 864))(v11, 32);
  v12 = sub_101E7EA0(1);
  (*(void (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v12 + 840))(v12, "models/weapons/v_flare_pg.mdl", 0);
  v13 = sub_101E7EA0(1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 836))(v13, 1);
  v14 = sub_101E7EA0(1);
  sub_100D18C0(v14);
  v25 = v10 + *(float *)(dword_106B31C8 + 12);
  sub_100EC4A0((int *)v5, v25, (int)"FlashLightContext");
  v15 = sub_101E7EA0(1);
  v28 = sub_100BEF30(v15, "fuse");
  v16 = (void *)sub_101E7EA0(1);
  sub_100BD6D0(v16, v28, (int)v26, 0, 0, 0);
  v17 = v27;
  if ( (v27[63] & 0x800) != 0 )
    sub_100DAE60((int)v27);
  v18 = sub_10417880(LODWORD(v26[0]), LODWORD(v26[1]), LODWORD(v26[2]), v17[176], v17[177], v17[178], v17, 90.0, 0, 0);
  v20 = v18;
  if ( v18 )
  {
    sub_100E0970(v18, v19, 0, 0);
    sub_10112C00(v20 + 320, 0);
    if ( *(_BYTE *)(v20 + 113) != 4 )
    {
      if ( *(_BYTE *)(v20 + 84) )
      {
        *(_BYTE *)(v20 + 88) |= 1u;
      }
      else
      {
        v21 = *(int **)(v20 + 24);
        if ( v21 )
          sub_100194B0(v21, 113);
      }
      *(_BYTE *)(v20 + 113) = 4;
    }
    sub_100FB020(v20, 0);
    sub_100E10C0(v20, v26);
    v22 = *(_DWORD *)v20;
    v23 = sub_101E7EA0(1);
    (*(void (__thiscall **)(int, int, int))(v22 + 140))(v20, v23, v28);
    sub_102EB400(v20, 307.20001);
    v17 = v27;
  }
  sub_1025FAC0(v17);
  return 1;
}
