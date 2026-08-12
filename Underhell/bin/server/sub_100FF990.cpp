char __cdecl sub_100FF990(int a1, int a2, int a3, float a4, int a5, int a6, int a7, float *a8, char *a9)
{
  double v10; // st7
  float *v11; // ebx
  int v12; // edi
  double v13; // st6
  int v14; // ecx
  int v15; // eax
  float *v16; // ecx
  double v17; // st6
  double v18; // st5
  double v19; // st5
  double v20; // st4
  double v21; // rt1
  double v22; // st5
  double v24; // rt2
  double v25; // st6
  double v26; // st7
  double v27; // st7
  double v28; // st7
  float *v29; // ebx
  float *v30; // edi
  int v31; // eax
  _DWORD *v32; // edi
  double v33; // st7
  int v34; // eax
  double v35; // st7
  double v36; // st5
  double v37; // st6
  double v38; // st7
  float *v39; // eax
  double v40; // st7
  bool v41; // zf
  double v42; // st7
  double v43; // st7
  int v44; // eax
  float *v45; // [esp+4h] [ebp-58h]
  float v46; // [esp+8h] [ebp-54h]
  int v47[4]; // [esp+1Ch] [ebp-40h] BYREF
  float v48[4]; // [esp+2Ch] [ebp-30h] BYREF
  int v49[3]; // [esp+3Ch] [ebp-20h] BYREF
  int v50; // [esp+48h] [ebp-14h] BYREF
  float v51; // [esp+4Ch] [ebp-10h]
  int v52; // [esp+50h] [ebp-Ch]
  float *v53; // [esp+54h] [ebp-8h]
  float v54; // [esp+58h] [ebp-4h]
  int v55; // [esp+84h] [ebp+28h]
  int v56; // [esp+84h] [ebp+28h]

  memset(a9, 0, 0x84u);
  v10 = 0.0;
  v11 = a8;
  *((float *)a9 + 18) = 0.0;
  v53 = 0;
  *((float *)a9 + 17) = 0.0;
  v55 = 0;
  *((float *)a9 + 16) = 0.0;
  v12 = a7;
  *((float *)a9 + 15) = 0.0;
  v13 = 1.0;
  v14 = a7 - (_DWORD)a8;
  v52 = a7 - (_DWORD)a8;
  do
  {
    if ( v10 == *v11 )
      goto LABEL_12;
    v15 = *(_DWORD *)(*(_DWORD *)((char *)v11 + v14) + 60);
    if ( a5 >= v15 )
      return 0;
    if ( v15 != *(_DWORD *)(*(_DWORD *)v12 + 60) )
      return 0;
    v16 = (float *)sub_10245130(a5);
    if ( !v16 )
      return 0;
    v10 = 0.0;
    v17 = 0.0;
    if ( !v53 )
    {
      v53 = v16;
LABEL_16:
      v19 = 1.0;
      goto LABEL_11;
    }
    v18 = v16[19] - v53[19];
    if ( v18 <= 0.5 )
    {
      if ( v18 >= -0.5 )
        goto LABEL_16;
      v19 = 1.0;
      v17 = 1.0;
    }
    else
    {
      v17 = -1.0;
      v19 = 1.0;
    }
LABEL_11:
    v12 = a7;
    *((float *)a9 + 15) = (v16[19] + v17) * *v11 + *((float *)a9 + 15);
    *((float *)a9 + 16) = (v16[20] + v17) * *v11 + *((float *)a9 + 16);
    *((float *)a9 + 17) = (v16[21] + v17) * *v11 + *((float *)a9 + 17);
    v20 = v16[22];
    v14 = v52;
    v21 = v19;
    v22 = v17 + v20;
    v13 = v21;
    *((float *)a9 + 18) = v22 * *v11 + *((float *)a9 + 18);
LABEL_12:
    ++v11;
    ++v55;
  }
  while ( v55 < 4 );
  if ( v13 >= *((float *)a9 + 15) )
  {
    v24 = v13;
    v25 = v10;
    v26 = v24;
    if ( v25 > *((float *)a9 + 15) )
    {
      *((float *)a9 + 15) = *((float *)a9 + 15) + v26;
      *((float *)a9 + 16) = *((float *)a9 + 16) + v26;
      *((float *)a9 + 17) = *((float *)a9 + 17) + v26;
      *((float *)a9 + 18) = v26 + *((float *)a9 + 18);
    }
  }
  else
  {
    *((float *)a9 + 15) = *((float *)a9 + 15) - v13;
    *((float *)a9 + 16) = *((float *)a9 + 16) - v13;
    *((float *)a9 + 17) = *((float *)a9 + 17) - v13;
    *((float *)a9 + 18) = *((float *)a9 + 18) - v13;
  }
  v27 = sub_100FF6C0((float *)a9, a4);
  *((float *)a9 + 23) = v27;
  if ( v27 <= 0.001 )
  {
    if ( sub_10245130(a5)
      && (*(_BYTE *)(*(_DWORD *)v12 + 12) & 1) != 0
      && *(_DWORD *)(sub_10245130(a5) + 4) == 3
      && *((float *)a9 + 18) - *((float *)a9 + 15) > 0.75 )
    {
      *((float *)a9 + 23) = 0.001;
      a4 = *((float *)a9 + 18) - 0.001;
      goto LABEL_26;
    }
    return 0;
  }
LABEL_26:
  v28 = 0.0;
  v29 = a8;
  *((float *)a9 + 8) = 0.0;
  v30 = (float *)(a9 + 44);
  *((float *)a9 + 9) = 0.0;
  v53 = (float *)(a9 + 44);
  *((float *)a9 + 10) = 0.0;
  v56 = 0;
  *((float *)a9 + 11) = 0.0;
  *((float *)a9 + 12) = 0.0;
  *((float *)a9 + 13) = 0.0;
  *((float *)a9 + 14) = 0.0;
  v54 = 0.0;
  while ( 2 )
  {
    if ( v28 != *v29 )
    {
      v31 = sub_10245130(a5);
      v32 = (_DWORD *)v31;
      if ( !v31 )
        return 0;
      *((_DWORD *)a9 + 2) = *(_DWORD *)(v31 + 8);
      *((_DWORD *)a9 + 3) = *(_DWORD *)(v31 + 12);
      *((_DWORD *)a9 + 1) = *(_DWORD *)(v31 + 4);
      *((_DWORD *)a9 + 4) = *(_DWORD *)(v31 + 16);
      *((float *)a9 + 5) = *(float *)(v31 + 20) * *v29 + *((float *)a9 + 5);
      *((float *)a9 + 7) = *(float *)(v31 + 28) * *v29 + *((float *)a9 + 7);
      *((float *)a9 + 6) = *(float *)(v31 + 24) * *v29 + *((float *)a9 + 6);
      *((float *)a9 + 20) = *(float *)(v31 + 100) * *v29 + *((float *)a9 + 20);
      *((float *)a9 + 19) = *(float *)(v31 + 104) * *v29 + *((float *)a9 + 19);
      v33 = sub_100FF7C0((float *)a9, a4);
      v34 = *((_DWORD *)a9 + 1);
      *((float *)a9 + 22) = v33 * *v29 + *((float *)a9 + 22);
      if ( v34 > 0 && (v34 <= 3 || v34 == 5) )
      {
        if ( sub_100FF820(a1, v32, *(_DWORD *)((char *)v29 + v52), a4, (float *)v49, v47, (float *)&v50) )
        {
          v35 = *v29;
          v45 = v53;
          v36 = *(float *)v49 * v35 + *((float *)a9 + 8);
          v37 = *(float *)&v49[1] * v35 + *((float *)a9 + 9);
          v38 = v35 * *(float *)&v49[2] + *((float *)a9 + 10);
          *((float *)a9 + 8) = v36;
          *((float *)a9 + 9) = v37;
          *((float *)a9 + 10) = v38;
          v51 = *v29;
          sub_10422BE0(v45, v47, v48);
          v39 = v53;
          v40 = v51;
          *v53 = v48[0] * v51 + *v53;
          v39[1] = v48[1] * v40 + v39[1];
          v39[2] = v48[2] * v40 + v39[2];
          v39[3] = v40 * v48[3] + v39[3];
          goto LABEL_34;
        }
      }
      else
      {
LABEL_34:
        v54 = *v29 + v54;
      }
      LODWORD(v51) = sub_100FF770((float *)a9, a4);
      v41 = *((_DWORD *)a9 + 1) == 5;
      *((float *)a9 + 25) = (double)SLODWORD(v51) * *((float *)a9 + 23);
      v28 = 0.0;
      if ( v41 )
        *((_DWORD *)a9 + 26) = (char *)v32 + v32[30];
      v30 = v53;
    }
    ++v29;
    if ( ++v56 < 4 )
      continue;
    break;
  }
  v42 = v54;
  if ( v54 <= 0.000099999997 )
    return 0;
  if ( v42 < 0.99900001 )
  {
    v43 = 1.0 / v42;
    *((float *)a9 + 8) = v43 * *((float *)a9 + 8);
    *((float *)a9 + 9) = v43 * *((float *)a9 + 9);
    *((float *)a9 + 10) = v43 * *((float *)a9 + 10);
    v46 = v43;
    sub_10422E20((int)v30, v46, (int)v30);
  }
  if ( *((_DWORD *)a9 + 1) == 1 && *((_DWORD *)a9 + 3) != -1 )
  {
    v44 = sub_10245C50(a3, *((_DWORD *)a9 + 3));
    *((_DWORD *)a9 + 3) = v44;
    if ( v44 == -1 )
      return 0;
  }
  sub_10422DC0(v30);
  return 1;
}
