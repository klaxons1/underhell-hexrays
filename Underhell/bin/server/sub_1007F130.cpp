char __thiscall sub_1007F130(int this, float a2, int a3)
{
  int v5; // ecx
  int v6; // eax
  int v7; // ebx
  float *v8; // edi
  float *v9; // eax
  double v10; // st7
  float *v11; // edi
  double v12; // st6
  _DWORD *v13; // edx
  int v14; // eax
  double v15; // st5
  double v16; // rt0
  double v17; // st5
  int v18; // eax
  void *v19; // eax
  int *v20; // edi
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  float *v27; // eax
  bool v28; // c0
  double v29; // st7
  float *v30; // eax
  double v31; // st5
  double v32; // st6
  double v33; // st7
  int v34; // edi
  int v35; // eax
  int v36; // eax
  char *v37; // eax
  char v38; // [esp+24h] [ebp-18Ch]
  _DWORD *v39; // [esp+28h] [ebp-188h]
  char Buffer[256]; // [esp+38h] [ebp-178h] BYREF
  int v41[14]; // [esp+138h] [ebp-78h] BYREF
  float v42; // [esp+170h] [ebp-40h]
  float v43; // [esp+174h] [ebp-3Ch]
  float v44; // [esp+178h] [ebp-38h]
  int v45; // [esp+17Ch] [ebp-34h] BYREF
  float v46; // [esp+180h] [ebp-30h]
  float v47; // [esp+184h] [ebp-2Ch]
  int v48; // [esp+188h] [ebp-28h] BYREF
  int v49; // [esp+18Ch] [ebp-24h]
  float v50; // [esp+190h] [ebp-20h]
  double v51; // [esp+194h] [ebp-1Ch]
  int v52; // [esp+19Ch] [ebp-14h]
  _DWORD *v53; // [esp+1A0h] [ebp-10h]
  int v54; // [esp+1A4h] [ebp-Ch] BYREF
  float v55; // [esp+1A8h] [ebp-8h]
  float v56; // [esp+1ACh] [ebp-4h]
  float v57; // [esp+1B8h] [ebp+8h]
  int v58; // [esp+1B8h] [ebp+8h]

  if ( sub_10023500() )
    return 0;
  v5 = *(_DWORD *)(this + 4);
  if ( (*(_DWORD *)(v5 + 248) & 0x10) != 0 || *(float *)(dword_106B31C8 + 12) <= (double)*(float *)(this + 72) )
    return 0;
  *(float *)(this + 72) = *(float *)(dword_106B31C8 + 12);
  v48 = *(int *)(v5 + 716);
  v6 = *(_DWORD *)(v5 + 720);
  v51 = a2;
  v49 = v6;
  v50 = *(float *)(v5 + 724);
  v7 = 0;
  if ( sub_100737B0(*(_DWORD *)(v5 + 1676)) * 0.5 > a2 )
  {
    memset(v41, 0, sizeof(v41));
    v8 = *(float **)(this + 4);
    v9 = (float *)sub_100A6030(*(_DWORD *)(this + 36));
    *(float *)&v54 = *v9 - v8[179];
    v55 = v9[1] - v8[180];
    v56 = v9[2] - v8[181];
    off_10689714();
    v10 = -sub_100737B0(*(_DWORD *)(*(_DWORD *)(this + 4) + 1676));
    v11 = *(float **)(this + 4);
    v12 = *(float *)&v54 * v10;
    v13 = *(_DWORD **)(this + 24);
    v14 = *(_DWORD *)(this + 12);
    *(float *)&v54 = v12;
    v53 = v13;
    v15 = v55 * v10;
    v55 = v15;
    v52 = v14;
    v16 = v15;
    v17 = v10 * v56;
    v56 = v17;
    v38 = v14 == 0;
    *(float *)&v54 = v12 + v11[179];
    v55 = v16 + v11[180];
    v56 = v17 + v11[181];
    v18 = sub_1007E610(this);
    if ( sub_1007C550(v53, v52, v11 + 179, (float *)&v54, 33701899, v18, 100.0, v38, (float *)v41) )
    {
      v48 = v41[1];
      v49 = v41[2];
      v50 = *(float *)&v41[3];
      v19 = (void *)sub_1042FCC0(48);
      if ( v19 )
        v7 = sub_100B9A20(v19, (int)&v48, 0.0, *(_DWORD *)(this + 12), 1, -1);
      else
        v7 = 0;
    }
  }
  v20 = *(int **)(*(_DWORD *)(this + 4) + 2596);
  v53 = *(_DWORD **)(this + 12);
  v21 = sub_100A6030(*(_DWORD *)(this + 36));
  v22 = *v20;
  v52 = v21;
  v39 = v53;
  HIDWORD(v51) = v22;
  v23 = sub_1007E610(this);
  v24 = (*(int (__thiscall **)(int *, int *, int, int, int, int, _DWORD, _DWORD, _DWORD *))(HIDWORD(v51) + 28))(
          v20,
          &v48,
          v52,
          v23,
          1,
          -1,
          0.0,
          LODWORD(a2),
          v39);
  if ( v24 )
  {
    if ( v7 )
      sub_1007DC70((_DWORD *)v7, v24);
    else
      v7 = v24;
    v57 = sub_10078590(*(_DWORD *)(this + 20));
    v27 = *(float **)(this + 4);
    v42 = *(float *)v7 - v27[179];
    v43 = *(float *)(v7 + 4) - v27[180];
    v44 = *(float *)(v7 + 8) - v27[181];
    v28 = v57 < off_10689714();
    v29 = v57;
    if ( v28 )
    {
      v30 = *(float **)(this + 4);
      v31 = v42 * v29 + v30[179];
      v32 = v43 * v29 + v30[180];
      v33 = v29 * v44 + v30[181];
      *(float *)&v45 = v31;
      v46 = v32;
    }
    else
    {
      v45 = *(int *)v7;
      v46 = *(float *)(v7 + 4);
      v33 = *(float *)(v7 + 8);
    }
    v34 = *(_DWORD *)(this + 12);
    v47 = v33;
    v35 = *(_DWORD *)(this + 4);
    HIDWORD(v51) = *(_DWORD *)(this + 24);
    v58 = v35;
    v36 = sub_1007E610(this);
    if ( sub_1007C550(
           (_DWORD *)HIDWORD(v51),
           v34,
           (float *)(v58 + 716),
           (float *)&v45,
           33701899,
           v36,
           100.0,
           v34 == 0,
           0) )
    {
      if ( *(_DWORD *)(dword_106934A4 + 48) )
      {
        v37 = sub_1001E280(Buffer, "[Nav] %s", "Adding triangulation\n");
        sub_10029660(*(_DWORD **)(this + 4), (int)v37);
      }
      sub_100A5F20(v7);
      return 1;
    }
    else
    {
      sub_100B9C00(v7);
      return 0;
    }
  }
  else
  {
    if ( v7 )
    {
      v25 = *(_DWORD *)(v7 + 40);
      if ( v25 )
        *(_DWORD *)(v25 + 44) = *(_DWORD *)(v7 + 44);
      v26 = *(_DWORD *)(v7 + 44);
      if ( v26 )
        *(_DWORD *)(v26 + 40) = *(_DWORD *)(v7 + 40);
      sub_1042FBE0(v7);
    }
    return 0;
  }
}
