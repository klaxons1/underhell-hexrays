int __thiscall sub_10268790(int this)
{
  int v2; // edi
  int v3; // eax
  double v4; // st7
  int v5; // edi
  int v6; // edi
  int v7; // eax
  double v8; // st7
  int v9; // edi
  int v10; // edi
  int v11; // eax
  double v12; // rt2
  double v13; // st7
  int v14; // edi
  int v15; // edi
  int v16; // eax
  double v17; // st7
  double v18; // st7
  int v19; // edi
  int v20; // edi
  int v21; // eax
  int v22; // ecx
  int v23; // ecx
  int v24; // edi
  int v25; // edx
  double v26; // st7
  double v27; // st5
  int v28; // ecx
  double v29; // st6
  double v30; // st7
  float v32; // [esp+1Ch] [ebp-9Ch]
  _DWORD v33[10]; // [esp+30h] [ebp-88h] BYREF
  char v34; // [esp+58h] [ebp-60h]
  int v35; // [esp+5Ch] [ebp-5Ch]
  int v36; // [esp+60h] [ebp-58h]
  int v37; // [esp+64h] [ebp-54h]
  __int16 v38; // [esp+68h] [ebp-50h]
  __int16 v39; // [esp+6Ah] [ebp-4Eh]
  char v40; // [esp+6Ch] [ebp-4Ch]
  int v41[5]; // [esp+70h] [ebp-48h] BYREF
  float v42; // [esp+84h] [ebp-34h] BYREF
  float v43; // [esp+88h] [ebp-30h]
  float v44; // [esp+8Ch] [ebp-2Ch]
  float v45; // [esp+90h] [ebp-28h] BYREF
  float v46; // [esp+94h] [ebp-24h]
  float v47; // [esp+98h] [ebp-20h]
  int v48; // [esp+9Ch] [ebp-1Ch] BYREF
  float v49; // [esp+A0h] [ebp-18h]
  float v50; // [esp+A4h] [ebp-14h]
  int v51; // [esp+A8h] [ebp-10h]
  int v52; // [esp+ACh] [ebp-Ch] BYREF
  float v53; // [esp+B0h] [ebp-8h]
  float v54; // [esp+B4h] [ebp-4h]

  if ( *(_DWORD *)(dword_106B945C + 48) && *(_DWORD *)(this + 52) )
  {
    (*(void (__thiscall **)(_DWORD, float *, float *, _DWORD))(**(_DWORD **)(this + 44) + 528))(
      *(_DWORD *)(this + 44),
      &v42,
      &v45,
      0);
    if ( (*(_BYTE *)(this + 52) & 8) != 0 )
    {
      v2 = *(_DWORD *)(this + 44);
      v3 = *(_DWORD *)(v2 + 252) >> 11;
      *(float *)&v52 = v42 * 200.0;
      v53 = v43 * 200.0;
      v54 = 200.0 * v44;
      if ( (v3 & 1) != 0 )
        sub_100DAE60(v2);
      *(float *)&v48 = *(float *)(v2 + 580) + *(float *)&v52;
      v49 = *(float *)(v2 + 584) + v53;
      v4 = *(float *)(v2 + 588);
      v5 = *(_DWORD *)(this + 44);
      v50 = v4 + v54;
      if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
        sub_100DAE60(v5);
      sub_1011BC50((float *)(v5 + 580), (float *)&v48, 0, 255, 0, 1, 0.1);
    }
    if ( (*(_BYTE *)(this + 52) & 0x10) != 0 )
    {
      v6 = *(_DWORD *)(this + 44);
      v7 = *(_DWORD *)(v6 + 252) >> 11;
      *(float *)&v52 = v42 * 200.0;
      v53 = v43 * 200.0;
      v54 = 200.0 * v44;
      if ( (v7 & 1) != 0 )
        sub_100DAE60(v6);
      *(float *)&v48 = *(float *)(v6 + 580) - *(float *)&v52;
      v49 = *(float *)(v6 + 584) - v53;
      v8 = *(float *)(v6 + 588);
      v9 = *(_DWORD *)(this + 44);
      v50 = v8 - v54;
      if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
        sub_100DAE60(v9);
      sub_1011BC50((float *)(v9 + 580), (float *)&v48, 0, 255, 0, 1, 0.1);
    }
    if ( (*(_DWORD *)(this + 52) & 0x200) != 0 )
    {
      v10 = *(_DWORD *)(this + 44);
      v11 = *(_DWORD *)(v10 + 252) >> 11;
      v12 = -*(float *)(this + 60);
      *(float *)&v52 = v45 * 200.0 * v12;
      v53 = v46 * 200.0 * v12;
      v54 = v12 * (200.0 * v47);
      if ( (v11 & 1) != 0 )
        sub_100DAE60(v10);
      *(float *)&v48 = *(float *)(v10 + 580) - *(float *)&v52;
      v49 = *(float *)(v10 + 584) - v53;
      v13 = *(float *)(v10 + 588);
      v14 = *(_DWORD *)(this + 44);
      v50 = v13 - v54;
      if ( (*(_DWORD *)(v14 + 252) & 0x800) != 0 )
        sub_100DAE60(v14);
      sub_1011BC50((float *)(v14 + 580), (float *)&v48, 0, 255, 0, 1, 0.1);
    }
    if ( (*(_DWORD *)(this + 52) & 0x400) != 0 )
    {
      v15 = *(_DWORD *)(this + 44);
      v16 = *(_DWORD *)(v15 + 252) >> 11;
      v17 = *(float *)(this + 60);
      *(float *)&v52 = v45 * 200.0 * v17;
      v53 = v46 * 200.0 * v17;
      v54 = v17 * (200.0 * v47);
      if ( (v16 & 1) != 0 )
        sub_100DAE60(v15);
      *(float *)&v48 = *(float *)&v52 + *(float *)(v15 + 580);
      v49 = *(float *)(v15 + 584) + v53;
      v18 = *(float *)(v15 + 588);
      v19 = *(_DWORD *)(this + 44);
      v50 = v18 + v54;
      if ( (*(_DWORD *)(v19 + 252) & 0x800) != 0 )
        sub_100DAE60(v19);
      sub_1011BC50((float *)(v19 + 580), (float *)&v48, 0, 255, 0, 1, 0.1);
    }
    if ( (*(_BYTE *)(this + 52) & 2) != 0 )
    {
      v20 = *(_DWORD *)(this + 44);
      *(float *)&v48 = 20.0;
      v49 = 20.0;
      v50 = 20.0;
      *(float *)&v52 = -20.0;
      v53 = -20.0;
      v54 = -20.0;
      if ( (*(_DWORD *)(v20 + 252) & 0x800) != 0 )
        sub_100DAE60(v20);
      sub_1011BB20(v20 + 580, (int)&v52, (int)&v48, 0, 255, 0, 1, 0.1);
    }
  }
  v21 = *(_DWORD *)(this + 52);
  v22 = *(_DWORD *)(this + 56);
  *(float *)&v33[3] = 0.0;
  v23 = v21 ^ v22;
  *(float *)&v33[4] = 0.0;
  *(float *)&v33[5] = 0.0;
  *(float *)&v33[8] = 0.0;
  v24 = v23 & v21;
  v25 = v23 & ~v21;
  v38 = 0;
  v39 = 0;
  v51 = v21 & 8;
  v26 = (double)v51;
  v51 = v21 & 0x10;
  v27 = (double)v51;
  v51 = v21 & 0x200;
  v28 = *(_DWORD *)(this + 44);
  v33[9] = v21;
  *(float *)&v33[6] = v26 * 200.0 - v27 * 200.0;
  v29 = (double)v51;
  v51 = v21 & 0x400;
  v33[0] = &CUserCmd::`vftable';
  memset(v41, 0, sizeof(v41));
  v33[1] = 0;
  v33[2] = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v40 = 0;
  *(float *)&v33[7] = 200.0 * (double)v51 + v29 * -200.0;
  (*(void (__stdcall **)(_DWORD, _DWORD *, int, int))(*(_DWORD *)v28 + 864))(
    *(float *)(dword_106B31C8 + 16),
    v33,
    v24,
    v25);
  v30 = *(float *)(this + 60);
  *(_DWORD *)(this + 56) = *(_DWORD *)(this + 52);
  v32 = v30;
  sub_10144EF0((float *)(*(_DWORD *)(this + 44) + 1124), v32, 0.0);
  *(_DWORD *)(this + 52) &= 0xFFFFF7FE;
  v33[0] = &CUserCmd::`vftable';
  return sub_102375F0(v41);
}
