char __thiscall sub_102CAD30(int this, float *a2, float *a3, float *a4)
{
  double v5; // st7
  char v7; // bl
  long double v8; // st7
  long double v9; // st5
  double v10; // st6
  long double v11; // st4
  long double v12; // rt0
  long double v13; // st4
  long double v14; // st5
  long double v15; // rt1
  long double v16; // st5
  long double v17; // st7
  double v18; // st7
  int v19; // edx
  double v20; // st7
  double v21; // st5
  double v22; // st5
  long double v23; // st5
  long double v24; // st5
  double v25; // st6
  double v26; // st7
  double v27; // st6
  float v29; // [esp+0h] [ebp-24h]
  float v30; // [esp+4h] [ebp-20h]
  float v31; // [esp+14h] [ebp-10h] BYREF
  float v32; // [esp+18h] [ebp-Ch]
  int v33; // [esp+1Ch] [ebp-8h]
  float v34; // [esp+20h] [ebp-4h]
  float v35; // [esp+2Ch] [ebp+8h]
  float v36; // [esp+2Ch] [ebp+8h]

  v5 = a2[1];
  v7 = 0;
  sub_10424C60(a2[1], *(float *)(this + 940));
  v35 = v5;
  v8 = *a2;
  sub_10424C60(*a2, *(float *)(this + 960));
  v9 = v35;
  v10 = *(float *)(this + 940) + v35;
  v11 = v8 + *(float *)(this + 960);
  v36 = v11;
  v12 = v11;
  v13 = v9;
  v14 = v12;
  if ( *(float *)(this + 956) + *(float *)(this + 952) < fabs(v13) )
  {
    v17 = v14;
  }
  else
  {
    v15 = v14;
    v16 = v8;
    v17 = v15;
    if ( *(float *)(this + 976) + *(float *)(this + 972) >= fabs(v16) )
    {
      v18 = v10;
      goto LABEL_4;
    }
  }
  v21 = *(float *)(this + 940) + *(float *)(this + 952);
  if ( v21 >= v10 )
  {
    v22 = *(float *)(this + 940) - *(float *)(this + 952);
    if ( v22 > v10 )
      v10 = v22;
  }
  else
  {
    v10 = v21;
  }
  v23 = *(float *)(this + 972) + *(float *)(this + 960);
  if ( v23 >= v17 )
  {
    v24 = *(float *)(this + 960) - *(float *)(this + 972);
    if ( v24 <= v17 )
    {
      v18 = v10;
      v7 = 1;
    }
    else
    {
      v18 = v10;
      v7 = 1;
      v36 = v24;
    }
  }
  else
  {
    v7 = 1;
    v18 = v10;
    v36 = v23;
  }
LABEL_4:
  v19 = *(_DWORD *)(this + 496);
  v30 = *(float *)(this + 732);
  v31 = *(float *)(this + 488);
  v29 = v18;
  v33 = v19;
  sub_10424C60(v29, v30);
  v34 = v18;
  v20 = v18 * 10.0;
  v32 = v20;
  if ( v20 <= *(float *)(this + 948) )
  {
    v25 = -*(float *)(this + 948);
    if ( v25 > v20 )
      v32 = v25;
  }
  else
  {
    v32 = *(float *)(this + 948);
  }
  sub_10424C60(v36, *(float *)(this + 728));
  v26 = v36 * 10.0;
  v31 = v26;
  if ( v26 <= *(float *)(this + 968) )
  {
    v27 = -*(float *)(this + 968);
    if ( v27 > v26 )
      v31 = v27;
  }
  else
  {
    v31 = *(float *)(this + 968);
  }
  sub_100D7260((float *)this, &v31);
  if ( a3 && a4 )
  {
    *a3 = v36;
    *a4 = v34;
  }
  return v7;
}
