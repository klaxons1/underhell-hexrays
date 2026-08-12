void __cdecl sub_100FF230(
        int a1,
        int a2,
        int a3,
        int a4,
        _DWORD *a5,
        int a6,
        float a7,
        int a8,
        int a9,
        float a10,
        float a11)
{
  double v12; // st7
  double v13; // st6
  double v14; // st5
  int v15; // ecx
  int v16; // edx
  float *v17; // ecx
  double v18; // rt0
  double v19; // st5
  double v20; // st6
  double v21; // rt1
  double v22; // st5
  double v23; // st7
  double v24; // st4
  double v25; // st4
  double v26; // st3
  double v27; // st6
  int v28; // eax
  double v29; // rt1
  double v30; // st5
  double v31; // rt2
  int v32; // [esp+20h] [ebp-Ch]
  float v33; // [esp+24h] [ebp-8h]
  int i; // [esp+28h] [ebp-4h]
  int v35; // [esp+44h] [ebp+18h]

  if ( (a5[3] & 0x200) != 0 )
  {
    v32 = 0;
    if ( (int)a5[37] > 0 )
    {
      v12 = a10;
      v13 = a7;
      v14 = 1.0;
      for ( i = 0; ; i += 24 )
      {
        v15 = i + a5[38];
        v16 = *(_DWORD *)((char *)a5 + v15 + 4);
        v17 = (float *)((char *)a5 + v15);
        if ( (v16 & 0x1000) != 0 )
          break;
LABEL_24:
        if ( ++v32 >= a5[37] )
          return;
      }
      v18 = v14;
      v19 = v13;
      v20 = v18;
      v33 = v19;
      v21 = v19;
      v22 = v12;
      v23 = v21;
      *(float *)&v35 = v22;
      if ( v17[5] == v17[2] )
      {
LABEL_23:
        v28 = sub_10245630(a6, *(__int16 *)v17);
        sub_10107490(a1, a2, a3, a4, v28, LODWORD(v33), a8, a9, v35, LODWORD(a11));
        v13 = a7;
        v14 = 1.0;
        v12 = a10;
        goto LABEL_24;
      }
      v24 = v20;
      if ( v17[2] > v23 || v17[5] <= v23 )
      {
        v29 = v22;
        v30 = v23;
        v12 = v29;
        v31 = v30;
        v14 = v20;
        v13 = v31;
        goto LABEL_24;
      }
      if ( v17[3] <= v23 || v17[3] == v17[2] )
      {
        if ( v17[4] >= v23 || v17[4] == v17[5] )
          goto LABEL_15;
        v25 = v17[5] - v23;
        v26 = v17[5] - v17[4];
      }
      else
      {
        v25 = v23 - v17[2];
        v26 = v17[3] - v17[2];
      }
      v24 = v25 / v26;
LABEL_15:
      if ( (v16 & 0x40) != 0 )
        v24 = 3.0 * (v24 * v24) - v24 * (v24 * v24 + v24 * v24);
      if ( (v16 & 0x80u) == 0 || v17[4] >= v23 )
      {
        v27 = v24;
        if ( (v16 & 0x200) == 0 )
          v27 = v24 * v22;
      }
      else
      {
        v27 = v24 * v22 / (v20 - v22 + v24 * v22);
      }
      *(float *)&v35 = v27;
      v33 = (v23 - v17[2]) / (v17[5] - v17[2]);
      goto LABEL_23;
    }
  }
}
