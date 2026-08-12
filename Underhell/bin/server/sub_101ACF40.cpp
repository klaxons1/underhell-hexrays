float *__thiscall sub_101ACF40(float *this, float *a2, float a3, int a4, int *a5)
{
  double v5; // st7
  char v8; // bl
  double v9; // st6
  double v10; // st5
  double v11; // st4
  double v12; // rt2
  double v13; // st4
  double v14; // rt0
  int v15; // ecx
  int v16; // eax
  bool v17; // zf
  int v18; // eax
  int v19; // eax
  int v20; // eax
  float *v21; // eax
  int v22; // eax
  double v23; // rt1
  double v24; // st5
  double v25; // rt2
  double v26; // st5
  double v27; // rtt
  double v28; // st5
  double v29; // st7
  _DWORD *v30; // eax
  int v31; // ecx
  int v32; // ecx
  int v33; // eax
  int v34; // ecx
  int v35; // ecx
  double v36; // st5
  float *v37; // ecx
  double v38; // st6
  int v39; // eax
  float *v40; // eax
  int v41; // eax
  double v42; // st5
  double v43; // st4
  double v44; // st3
  int v45; // eax
  int v46; // eax
  double v47; // rt2
  double v48; // st3
  double v49; // st4
  double v50; // st7
  float *v52; // eax
  double v53; // st7
  float v54; // [esp+0h] [ebp-30h]
  float v55; // [esp+0h] [ebp-30h]
  float v56; // [esp+10h] [ebp-20h]
  float v57; // [esp+14h] [ebp-1Ch]
  float v58; // [esp+18h] [ebp-18h]
  float v59; // [esp+1Ch] [ebp-14h]
  float v60; // [esp+20h] [ebp-10h]
  float v61; // [esp+24h] [ebp-Ch]
  float v62; // [esp+28h] [ebp-8h]
  char v63; // [esp+38h] [ebp+8h]

  v5 = a3;
  v62 = a3;
  v59 = *a2;
  v8 = 1;
  v60 = a2[1];
  v61 = a2[2];
  v63 = 1;
  if ( a3 < 0.0 )
  {
    v8 = 0;
    v63 = 0;
    a3 = -v5;
    v5 = -v5;
  }
  if ( v5 <= 0.0 )
  {
LABEL_70:
    if ( a5 )
      *a5 = sub_101ACD40(this, v63);
    return this;
  }
  v9 = v61;
  v10 = v60;
  v11 = v59;
  while ( 1 )
  {
    v15 = *((_DWORD *)this + 202);
    if ( v8 )
    {
      if ( !v15
        || (v16 = *((_DWORD *)this + 62), (v16 & 0x8000) == 0)
        || (v17 = (v16 & 4) == 0, v18 = *((_DWORD *)this + 202), !v17) )
      {
        v18 = *((_DWORD *)this + 200);
      }
    }
    else if ( !v15
           || (v19 = *((_DWORD *)this + 62), (v19 & 0x8000) == 0)
           || (v17 = (v19 & 4) == 0, v18 = *((_DWORD *)this + 202), v17) )
    {
      v18 = *((_DWORD *)this + 201);
    }
    if ( !v18 || a4 && (*(_BYTE *)(v18 + 248) & 1) != 0 )
    {
      if ( !a4 )
      {
        v55 = v5;
        v52 = (float *)sub_101ACD40(this, v8 == 0);
        sub_101ACEB0(v52, this, a2, v55);
        return 0;
      }
      return 0;
    }
    if ( v8 )
    {
      if ( !v15
        || (v20 = *((_DWORD *)this + 62), (v20 & 0x8000) == 0)
        || (v17 = (v20 & 4) == 0, v21 = (float *)*((_DWORD *)this + 202), !v17) )
      {
        v21 = (float *)*((_DWORD *)this + 200);
      }
    }
    else if ( !v15
           || (v22 = *((_DWORD *)this + 62), (v22 & 0x8000) == 0)
           || (v17 = (v22 & 4) == 0, v21 = (float *)*((_DWORD *)this + 202), v17) )
    {
      v21 = (float *)*((_DWORD *)this + 201);
    }
    v23 = v10;
    v24 = v21[179] - v11;
    v56 = v24;
    v25 = v24;
    v26 = v21[180] - v23;
    v57 = v26;
    v27 = v26;
    v28 = v21[181] - v9;
    v58 = v28;
    v54 = v25 * v25 + v27 * v27 + v28 * v28;
    v29 = off_10689708(v54);
    if ( 0.0 == v29 )
    {
      v30 = (_DWORD *)*((_DWORD *)this + 202);
      if ( v8 )
      {
        if ( !v30 || (v31 = *((_DWORD *)this + 62), (v31 & 0x8000) == 0) || (v31 & 4) != 0 )
          v30 = (_DWORD *)*((_DWORD *)this + 200);
        if ( v30[202] && (v32 = v30[62], (v32 & 0x8000) != 0) && (v32 & 4) == 0 )
          v33 = v30[202];
        else
          v33 = v30[200];
      }
      else
      {
        if ( !v30 || (v34 = *((_DWORD *)this + 62), (v34 & 0x8000) == 0) || (v34 & 4) == 0 )
          v30 = (_DWORD *)*((_DWORD *)this + 201);
        if ( v30[202] && (v35 = v30[62], (v35 & 0x8000) != 0) && (v35 & 4) != 0 )
          v33 = v30[202];
        else
          v33 = v30[201];
      }
      if ( !v33 || a4 && (*(_BYTE *)(v33 + 248) & 1) != 0 )
      {
        if ( a5 )
          *a5 = 0;
        if ( v62 != a3 )
          return (float *)sub_101ACD40(this, v63);
        return 0;
      }
    }
    v36 = a3;
    if ( a3 < v29 )
      break;
    v37 = (float *)*((_DWORD *)this + 202);
    v38 = v36 - v29;
    a3 = v38;
    if ( v8 )
    {
      if ( !v37
        || (v39 = *((_DWORD *)this + 62), (v39 & 0x8000) == 0)
        || (v17 = (v39 & 4) == 0, v40 = (float *)*((_DWORD *)this + 202), !v17) )
      {
        v40 = (float *)*((_DWORD *)this + 200);
      }
    }
    else if ( !v37
           || (v41 = *((_DWORD *)this + 62), (v41 & 0x8000) == 0)
           || (v17 = (v41 & 4) == 0, v40 = (float *)*((_DWORD *)this + 202), v17) )
    {
      v40 = (float *)*((_DWORD *)this + 201);
    }
    v42 = v40[179];
    v59 = v40[179];
    v43 = v40[180];
    v60 = v40[180];
    v44 = v40[181];
    v61 = v40[181];
    if ( v8 )
    {
      if ( !v37 || (v45 = *((_DWORD *)this + 62), (v45 & 0x8000) == 0) || (v45 & 4) != 0 )
        v37 = (float *)*((_DWORD *)this + 200);
    }
    else if ( !v37 || (v46 = *((_DWORD *)this + 62), (v46 & 0x8000) == 0) || (v46 & 4) == 0 )
    {
      v37 = (float *)*((_DWORD *)this + 201);
    }
    v47 = v44;
    this = v37;
    *a2 = v42;
    v48 = v43;
    v49 = v42;
    a2[1] = v48;
    v10 = v48;
    a2[2] = v47;
    v50 = v47;
    if ( v38 <= 0.0 )
      goto LABEL_70;
    v12 = v49;
    v13 = v50;
    v5 = v38;
    v14 = v13;
    v11 = v12;
    v9 = v14;
  }
  v53 = v36 / v29;
  *a2 = v56 * v53 + v59;
  a2[1] = v57 * v53 + v60;
  a2[2] = v53 * v58 + v61;
  if ( !a5 )
    return this;
  *a5 = sub_101ACD40(this, v63);
  return this;
}
