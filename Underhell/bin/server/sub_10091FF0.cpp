BOOL __thiscall sub_10091FF0(int this, float *a2, float *a3, int a4, float a5, float a6, int a7)
{
  BOOL result; // eax
  int v9; // ebx
  double v10; // st7
  int v11; // edi
  double v12; // st6
  int v13; // edi
  int v14; // ebx
  double v15; // st7
  double v16; // st6
  double v17; // st5
  double v18; // st7
  double v19; // rt1
  double v20; // st5
  double v21; // st7
  double v22; // st5
  double v23; // st7
  int v24; // edx
  int v25; // edi
  double v26; // rt1
  double v27; // st6
  double v28; // st7
  double v29; // st6
  double v30; // st4
  double v31; // st6
  double v32; // st5
  double v33; // st5
  double v34; // st7
  int v35; // edx
  double v36; // st7
  double v37; // st7
  float v38; // [esp+0h] [ebp-44h]
  float v39; // [esp+0h] [ebp-44h]
  float v40; // [esp+4h] [ebp-40h]
  float v41; // [esp+4h] [ebp-40h]
  float v42; // [esp+4h] [ebp-40h]
  float v43; // [esp+8h] [ebp-3Ch]
  float v44; // [esp+10h] [ebp-34h]
  int v45; // [esp+20h] [ebp-24h] BYREF
  float v46; // [esp+24h] [ebp-20h]
  float v47; // [esp+28h] [ebp-1Ch] BYREF
  float v48; // [esp+2Ch] [ebp-18h]
  int v49; // [esp+30h] [ebp-14h]
  int v50; // [esp+34h] [ebp-10h]
  int v51; // [esp+38h] [ebp-Ch]
  float v52; // [esp+3Ch] [ebp-8h]
  float v53; // [esp+40h] [ebp-4h]

  v51 = 0;
  if ( !*(_BYTE *)(this + 16)
    || *(float *)(this + 4) != *a2
    || *(float *)(this + 8) != a2[1]
    || *(float *)(this + 12) != a2[2] )
  {
    *(float *)(this + 48) = -1.0;
  }
  if ( 0.0 != flt_104A33F8[sub_10023500()] && *(float *)(dword_106B31C8 + 12) - *(float *)(this + 48) <= -0.001 )
    return *(_DWORD *)(this + 88) > 0;
  v44 = a5;
  *(_DWORD *)(this + 88) = 0;
  sub_10091CE0((int *)this, (int)a2, v44);
  if ( sub_100918D0((int *)this, (int)a2, a5) )
    v51 = 1;
  v9 = (a7 - 1) / 2;
  v53 = a6 / (double)a7;
  v10 = sub_10265030(a2 + 3);
  v52 = v10;
  if ( fabs(a5 - (a3[9] + *(float *)&a4)) >= 0.1 || *(_DWORD *)a3 == -3 )
  {
    v40 = v10;
    v10 = v52;
    if ( sub_100916C0((int *)this, (int)a2, (_DWORD *)LODWORD(v40), a5, v53, 0) == 1 )
      v51 = 1;
  }
  else if ( *(_DWORD *)a3 )
  {
    v51 = 1;
    v43 = v10;
    sub_10091340((int *)this, (int)a2, a3, a5, v43, v53, 0);
    v10 = v52;
  }
  v11 = 1;
  for ( HIBYTE(a7) = 0; v11 <= v9; ++v11 )
  {
    if ( HIBYTE(a7) )
    {
      v38 = v10;
      sub_10090AA0(v38, v53, v11, (float *)&a4, (float *)&a3);
      v47 = 0.0;
      v48 = 0.0;
      v45 = 5;
      v49 = -1;
      v46 = 1.0;
      v50 = 0;
      sub_100908B0(&v47, *(float *)&a3, v53);
      sub_100911A0((int *)(this + 76), *(_DWORD *)(this + 88), (int)&v45);
    }
    else
    {
      v41 = v10;
      if ( sub_100916C0((int *)this, (int)a2, (_DWORD *)LODWORD(v41), a5, v53, v11) == 1 )
        v51 = 1;
      else
        HIBYTE(a7) = 1;
    }
    v10 = v52;
  }
  v12 = 360.0;
  v13 = -1;
  v14 = -v9;
  HIBYTE(a7) = 0;
  if ( v14 <= -1 )
  {
    do
    {
      if ( HIBYTE(a7) )
      {
        v39 = v10;
        sub_10090AA0(v39, v53, v13, (float *)&a4, (float *)&a3);
        v45 = 5;
        v46 = 1.0;
        v49 = -1;
        v15 = *(float *)&a3;
        v50 = 0;
        if ( *(float *)&a3 >= 0.0 )
        {
          if ( v15 < 360.0 )
          {
            v16 = 0.0;
            v17 = 360.0;
            v18 = *(float *)&a3;
          }
          else
          {
            v18 = v15 - 360.0;
            v17 = 360.0;
            v16 = 0.0;
          }
        }
        else
        {
          v16 = 0.0;
          v17 = 360.0;
          v18 = v15 + 360.0;
        }
        v19 = v17;
        v20 = v18;
        v21 = v19;
        v47 = v20;
        v22 = v53;
        if ( v16 <= v53 )
        {
          if ( v22 < v21 )
            v23 = v53;
          else
            v23 = v22 - v21;
        }
        else
        {
          v23 = v21 + v22;
        }
        v24 = *(_DWORD *)(this + 88);
        v48 = v23;
        sub_100911A0((int *)(this + 76), v24, (int)&v45);
      }
      else
      {
        v42 = v10;
        if ( sub_100916C0((int *)this, (int)a2, (_DWORD *)LODWORD(v42), a5, v53, v13) == 1 )
          v51 = 1;
        else
          HIBYTE(a7) = 1;
      }
      v10 = v52;
      --v13;
    }
    while ( v13 >= v14 );
    v12 = 360.0;
  }
  v25 = v51;
  if ( v51 == 1 )
  {
    v26 = v12;
    v27 = v10;
    v28 = v26;
    v29 = v27 - 180.0;
    if ( v29 < 0.0 )
      v29 = v29 + v28;
    v45 = 5;
    v46 = 1.0;
    v49 = -1;
    v50 = 0;
    v30 = v29;
    if ( v29 >= 0.0 )
    {
      if ( v29 < v28 )
      {
        v32 = v29;
        v31 = 0.0;
      }
      else
      {
        v31 = 0.0;
        v32 = v30 - v28;
      }
    }
    else
    {
      v31 = 0.0;
      v32 = v30 + v28;
    }
    v47 = v32;
    v33 = v28 - a6;
    if ( v33 >= v31 )
    {
      if ( v33 < v28 )
        v34 = v33;
      else
        v34 = v33 - v28;
    }
    else
    {
      v34 = v28 + v33;
    }
    v35 = *(_DWORD *)(this + 88);
    v48 = v34;
    sub_100911A0((int *)(this + 76), v35, (int)&v45);
  }
  v36 = flt_104A33F8[sub_10023500()];
  result = v25;
  if ( -1.0 == v36 )
    v37 = *(float *)(this + 52) + *(float *)(dword_106B31C8 + 12);
  else
    v37 = v36 + *(float *)(dword_106B31C8 + 12);
  *(float *)(this + 48) = v37;
  return result;
}
