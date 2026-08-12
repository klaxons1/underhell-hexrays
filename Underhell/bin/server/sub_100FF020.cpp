void __cdecl sub_100FF020(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        float a7,
        int a8,
        int a9,
        float a10,
        float a11)
{
  int v11; // edi
  int v12; // esi
  double v13; // st7
  __int16 *v14; // esi
  int v15; // ecx
  double v16; // st6
  double v17; // st7
  double v18; // st5
  int v19; // eax
  int v20; // eax
  int v21; // edi
  int v22; // eax
  double v23; // st5
  double v24; // st4
  int v25; // ecx
  bool v26; // c0
  double v27; // st7
  int v28; // eax
  int i; // [esp+20h] [ebp-10h]
  int v30; // [esp+24h] [ebp-Ch]
  float v31; // [esp+28h] [ebp-8h]
  float v32; // [esp+2Ch] [ebp-4h]

  v11 = a5;
  v12 = 0;
  v30 = 0;
  if ( *(int *)(a5 + 148) > 0 )
  {
    v13 = a10;
    for ( i = 0; ; i += 24 )
    {
      v14 = (__int16 *)(*(_DWORD *)(v11 + 152) + v11 + v12);
      v15 = *((_DWORD *)v14 + 1);
      if ( (v15 & 0x1000) != 0 )
        goto LABEL_32;
      v31 = a7;
      v16 = v13;
      v17 = a7;
      v32 = v16;
      if ( *((float *)v14 + 5) == *((float *)v14 + 2) )
        goto LABEL_29;
      v18 = 1.0;
      if ( (v15 & 0x4000) != 0 )
      {
        v19 = sub_10245630(a6, *v14);
        v20 = sub_102456F0(v19, v14[1]);
        v21 = v20;
        if ( v20 == -1 )
        {
          v17 = 0.0;
        }
        else
        {
          v22 = sub_10245670(v20);
          v17 = (*(float *)(v22 + 12) - *(float *)(v22 + 8)) * *(float *)(a8 + 4 * v21) + *(float *)(v22 + 8);
        }
        v11 = a5;
        v18 = (float)1.0;
        v16 = a10;
      }
      if ( *((float *)v14 + 2) > v17 || *((float *)v14 + 5) <= v17 )
      {
        v13 = v16;
        goto LABEL_32;
      }
      if ( *((float *)v14 + 3) > v17 && *((float *)v14 + 3) != *((float *)v14 + 2) )
        break;
      if ( *((float *)v14 + 4) < v17 && *((float *)v14 + 4) != *((float *)v14 + 5) )
      {
        v23 = *((float *)v14 + 5) - v17;
        v24 = *((float *)v14 + 5) - *((float *)v14 + 4);
        goto LABEL_18;
      }
LABEL_19:
      v25 = *((_DWORD *)v14 + 1);
      if ( (v25 & 0x40) != 0 )
        v18 = 3.0 * (v18 * v18) - v18 * (v18 * v18 + v18 * v18);
      if ( (v25 & 0x80u) == 0 )
      {
        v27 = v18;
LABEL_25:
        if ( (v25 & 0x200) == 0 )
          v27 = v27 * v16;
        goto LABEL_27;
      }
      v26 = *((float *)v14 + 4) < v17;
      v27 = v18;
      if ( !v26 )
        goto LABEL_25;
      v27 = v18 * v16 / (1.0 - v16 + v18 * v16);
LABEL_27:
      v32 = v27;
      if ( (v25 & 0x4000) == 0 )
        v31 = (a7 - *((float *)v14 + 2)) / (*((float *)v14 + 5) - *((float *)v14 + 2));
LABEL_29:
      v28 = sub_10245630(a6, *v14);
      sub_10107490(a1, a2, a3, a4, v28, LODWORD(v31), a8, a9, LODWORD(v32), LODWORD(a11));
      v13 = a10;
LABEL_32:
      v12 = i + 24;
      if ( ++v30 >= *(_DWORD *)(v11 + 148) )
        return;
    }
    v23 = v17 - *((float *)v14 + 2);
    v24 = *((float *)v14 + 3) - *((float *)v14 + 2);
LABEL_18:
    v18 = v23 / v24;
    goto LABEL_19;
  }
}
