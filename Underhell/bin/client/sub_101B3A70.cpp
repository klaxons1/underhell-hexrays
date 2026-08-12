char __thiscall sub_101B3A70(
        void *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        int a7,
        int a8,
        float a9,
        int a10,
        float *a11,
        float *a12,
        float *a13,
        float *a14)
{
  double v14; // st7
  char v15; // bl
  double v16; // st6
  int v17; // ecx
  long double v18; // st7
  double v19; // st6
  double v20; // st5
  long double v21; // st3
  long double v22; // st2
  double v23; // st3
  long double v24; // st4
  long double v25; // st5
  long double v26; // st3
  long double v27; // rt1
  double v28; // rt2
  double v29; // st3
  double v30; // st6
  long double v31; // rtt
  long double v32; // st4
  long double v33; // st3
  long double v34; // rt1
  long double v35; // st2
  long double v36; // st3
  long double v37; // st1
  long double v38; // st2
  long double v39; // st4
  long double v40; // rt1
  long double v41; // st3
  long double v42; // st5
  long double v43; // st7
  long double v44; // st7
  long double v45; // rt0
  long double v46; // st4
  float v48; // [esp+4h] [ebp-8h]
  float v49; // [esp+8h] [ebp-4h]
  float v50; // [esp+1Ch] [ebp+10h]

  v14 = a2 - a5;
  v15 = 1;
  v48 = v14;
  v16 = a3 - a6;
  v49 = v16;
  if ( 0.0 == v14 )
    v48 = 0.0000099999997;
  if ( v16 == 0.0 )
    v49 = 0.0000099999997;
  v17 = sub_102374C0(this);
  v18 = *(float *)(dword_1044EED4 + 44);
  v50 = (double)v17 * 0.46511626 / v18;
  v19 = v49;
  v20 = v48;
  v21 = atan2(v49 / v48, 1.0) * 180.0 * 0.3183098861837907;
  if ( v48 >= 0.0 )
  {
    v25 = v21;
    if ( v49 < 0.0 )
      v25 = v21 + 360.0;
    v19 = v49;
    v26 = v25;
    v20 = v48;
    v27 = v26;
    v23 = 0.0;
    v24 = v27;
  }
  else
  {
    v22 = v21;
    v23 = 0.0;
    v24 = v22 + 180.0;
  }
  v28 = v23;
  v29 = v19 * v19;
  v30 = v28;
  v31 = v24;
  v32 = sqrt(v20 * v20 + v29) * -1.0;
  v33 = (a9 - v31) * 3.141592653589793 * 0.0055555557;
  v34 = cos(v33);
  v35 = sin(v33);
  v36 = v34 * v28 - v35 * v32;
  v37 = v35 * v28;
  v38 = v32;
  v39 = v34 * v32 + v37;
  v40 = v36;
  v41 = -1.0 * v38;
  v42 = v40;
  if ( v41 <= v18 )
  {
    v45 = v39;
    v46 = sqrt(v39 * v39 + v42 * v42) / v18;
    v44 = v45;
    *a14 = v46;
  }
  else
  {
    v43 = v41 / v18;
    v15 = 0;
    v42 = v42 / v43;
    v44 = v39 / v43;
    *a14 = 1.0;
  }
  *a11 = (float)(v17 / 2 + (int)(v42 * v50));
  *a12 = (float)(v17 / 2 + (int)(v44 * v50));
  *a13 = v30;
  return v15;
}
