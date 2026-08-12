int __userpurge sub_10255720@<eax>(float *a1@<ecx>, int a2@<esi>, int a3, int a4, float a5, float *a6, float *a7)
{
  double v9; // st7
  double v12; // st7
  float *v13; // ecx
  double v14; // st4
  double v15; // st7
  double v16; // st7
  double v17; // st7
  float *v18; // ecx
  bool v19; // c3
  double v20; // st7
  double v21; // st7
  double v22; // st6
  double v23; // st7
  double v24; // st4
  double v25; // st5
  double v26; // st7
  double v27; // st6
  double v28; // st5
  double v29; // st7
  double v30; // st6
  double v31; // st7
  double v32; // st5
  double v33; // st4
  double v34; // st6
  double v35; // st6
  double v36; // st5
  double v37; // st7
  float v39; // [esp+4h] [ebp-38h] BYREF
  float v40; // [esp+8h] [ebp-34h]
  float v41; // [esp+Ch] [ebp-30h]
  float v42; // [esp+10h] [ebp-2Ch] BYREF
  float v43; // [esp+14h] [ebp-28h]
  float v44; // [esp+18h] [ebp-24h]
  float v45; // [esp+1Ch] [ebp-20h] BYREF
  float v46; // [esp+20h] [ebp-1Ch]
  float v47; // [esp+24h] [ebp-18h]
  float v48; // [esp+28h] [ebp-14h] BYREF
  float v49; // [esp+2Ch] [ebp-10h]
  float v50; // [esp+30h] [ebp-Ch]
  float v51; // [esp+34h] [ebp-8h]
  float v52; // [esp+38h] [ebp-4h]
  int v53; // [esp+50h] [ebp+14h]
  int v54; // [esp+54h] [ebp+18h]

  if ( *((_BYTE *)a1 - 12) )
    return 0;
  v9 = 0.0;
  *a6 = 0.0;
  a6[1] = 0.0;
  a6[2] = 0.0;
  *a7 = 0.0;
  a7[1] = 0.0;
  a7[2] = 0.0;
  if ( 1.0 != a1[7] )
    a6[2] = a6[2] - (a1[7] - 1.0) * *(float *)(dword_106B6F0C + 44);
  if ( 0.0 != a1[17] )
  {
    sub_10422220(a1 + 18, &v39);
    v12 = a1[17];
    *a6 = v39 * v12 + *a6;
    a6[1] = v40 * v12 + a6[1];
    a6[2] = v12 * v41 + a6[2];
    v9 = 0.0;
  }
  if ( a1[8] != v9 || 0.0 != sub_10254BD0(a1 - 203) || 1.0 != a1[14] || a1[15] != 0.0 || sub_10254B80(v13) )
  {
    (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)a4 + 204))(a4, &v48, &v39);
    v14 = a6[2];
    v15 = a6[1] * a5;
    v48 = *a6 * a5 + v48;
    v45 = v48;
    v42 = v39;
    v49 = v15 + v49;
    v46 = v49;
    v43 = v40;
    v50 = a5 * v14 + v50;
    v47 = v50;
    v44 = v41;
    v52 = off_10689714();
    v51 = off_10689714();
    *(float *)&v53 = 0.0;
    *(float *)&v54 = 0.0;
    if ( a1[8] != 0.0 )
    {
      v16 = ((double (__thiscall *)(int, float *, int))*(_DWORD *)(*(_DWORD *)a4 + 256))(a4, &v45, a2)
          * (a1[8]
           * -0.5)
          * a5;
      if ( v16 < -1.0 )
        v16 = -1.0;
      *(float *)&v53 = v16 / a5;
      v17 = ((double (__thiscall *)(int, float *))*(_DWORD *)(*(_DWORD *)a4 + 260))(a4, &v42) * (a1[8] * -0.5) * a5;
      if ( v17 < -1.0 )
        v17 = -1.0;
      *(float *)&v54 = v17 / a5;
    }
    v19 = 0.0 == sub_10254BD0(a1 - 203);
    v20 = 0.0;
    if ( v19 || a1[9] >= (double)v52 )
    {
      v22 = a5;
    }
    else
    {
      v21 = sub_10254BD0(v18);
      v22 = a5;
      v23 = (v21 - v52) / a5;
      if ( 0.0 != a1[10] )
      {
        v24 = -(a1[10] / v22);
        if ( v24 > v23 )
          v23 = v24;
      }
      *a6 = v45 * v23 + *a6;
      a6[1] = v46 * v23 + a6[1];
      v25 = v23 * v47;
      v20 = 0.0;
      a6[2] = v25 + a6[2];
    }
    if ( a1[15] != v20 && v51 > (double)a1[15] )
    {
      v26 = (a1[15] - v51) / v22;
      v27 = v42 * v26;
      v28 = v43 * v26;
      v29 = v26 * v44;
      *a7 = v27 + *a7;
      a7[1] = v28 + a7[1];
      a7[2] = v29 + a7[2];
    }
    v30 = *(float *)&v53;
    if ( 1.0 != a1[14] )
      v30 = (v30 + 1.0) * a1[14] - 1.0;
    if ( 1.0 == a1[16] )
      v31 = *(float *)&v54;
    else
      v31 = (*(float *)&v54 + 1.0) * a1[16] - 1.0;
    v32 = v48 * v30;
    v33 = v49 * v30;
    v34 = v30 * v50;
    *a6 = v32 + *a6;
    a6[1] = v33 + a6[1];
    a6[2] = v34 + a6[2];
    v35 = v39 * v31;
    v36 = v40 * v31;
    v37 = v31 * v41;
    *a7 = v35 + *a7;
    a7[1] = v36 + a7[1];
    a7[2] = v37 + a7[2];
  }
  return 3;
}
