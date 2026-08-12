float *__usercall sub_10168EB0@<eax>(
        int a1@<ebp>,
        float *a2,
        int a3,
        int a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        char a13,
        float *a14,
        float *a15)
{
  double v15; // st7
  double v16; // st7
  double v17; // st7
  double v18; // st7
  double v19; // st7
  double v20; // st7
  double v21; // st7
  double v22; // st7
  double v23; // st6
  double v24; // st5
  double v25; // st4
  double v26; // rtt
  double v27; // st5
  double v28; // st7
  double v29; // st4
  double v30; // rt0
  long double v31; // st5
  double v32; // st7
  long double v33; // st5
  float *result; // eax
  float v35; // edx
  float v36; // ecx
  long double v37; // st0
  long double v38; // rt2
  long double v39; // st2
  float v40; // edx
  float v41; // ecx
  float v42; // ecx
  float v43; // edx
  float v44; // [esp+30h] [ebp-100h]
  float v45[20]; // [esp+44h] [ebp-ECh] BYREF
  _BYTE v46[12]; // [esp+94h] [ebp-9Ch] BYREF
  int v47; // [esp+A0h] [ebp-90h] BYREF
  float v48; // [esp+A8h] [ebp-88h]
  float v49; // [esp+C0h] [ebp-70h]
  float v50[3]; // [esp+ECh] [ebp-44h] BYREF
  float v51[3]; // [esp+F8h] [ebp-38h] BYREF
  float v52; // [esp+104h] [ebp-2Ch]
  float v53; // [esp+108h] [ebp-28h] BYREF
  float v54; // [esp+10Ch] [ebp-24h]
  float v55; // [esp+110h] [ebp-20h]
  float v56; // [esp+114h] [ebp-1Ch] BYREF
  float v57; // [esp+118h] [ebp-18h]
  float v58; // [esp+11Ch] [ebp-14h]
  float v59; // [esp+120h] [ebp-10h]
  _DWORD v60[3]; // [esp+124h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+130h] [ebp+0h]

  v60[0] = a1;
  v60[1] = retaddr;
  v52 = *(float *)(dword_106B6F0C + 44) * a12;
  if ( a10 - a7 > 500.0 )
    goto LABEL_20;
  sub_104222B0(a3 + 728, v51, v50, 0);
  if ( a13 )
  {
    v59 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            -8.0,
            8.0);
    v15 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            -16.0,
            16.0);
    v16 = v15 + v59;
    a8 = v50[0] * v16 + a8;
    a9 = v50[1] * v16 + a9;
    a10 = v16 * v50[2] + a10;
    v59 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            -8.0,
            8.0);
    v17 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            -16.0,
            16.0);
    v18 = v17 + v59;
    a8 = v51[0] * v18 + a8;
    a9 = v51[1] * v18 + a9;
    a10 = v18 * v51[2] + a10;
  }
  v19 = a7 + (a10 - a7) * 0.5;
  v56 = a5 + (a8 - a5) * 0.5;
  v53 = v56;
  v57 = a6 + (a9 - a6) * 0.5;
  v54 = v57;
  v58 = v19;
  v55 = v19 + 300.0;
  sub_1001F180(v45, &v56, &v53);
  (*(void (__thiscall **)(int, float *, int, int, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v45,
    16395,
    a4,
    v46);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v46, (int)&v47, 255, 0, 0, 1, -1.0);
  v58 = v48;
  if ( 1.0 == v49 )
  {
    v20 = v48;
  }
  else
  {
    v20 = v48 - 15.0;
    v58 = v20;
  }
  if ( -1.0 == a11 )
  {
    v23 = a10;
    v24 = a7;
  }
  else
  {
    v44 = (a8 - a5) * (a8 - a5) + (a9 - a6) * (a9 - a6) + (a10 - a7) * (a10 - a7);
    v21 = off_10689708(v44);
    v22 = v21 * a11;
    v23 = a10;
    v24 = a7;
    if ( a7 <= (double)a10 )
      v25 = a10;
    else
      v25 = a7;
    if ( v58 - v25 <= v22 )
      v20 = v58;
    else
      v20 = v22 + v25;
  }
  if ( v24 > v20 )
    goto LABEL_27;
  v26 = v24;
  v27 = v20;
  v28 = v26;
  if ( v27 < v23 )
    goto LABEL_27;
  v29 = v52 * 0.5;
  v59 = v29;
  v30 = v27;
  v31 = (v27 - v28) / v29;
  v32 = v30;
  v33 = sqrt(v31);
  if ( v33 < 0.1 )
  {
LABEL_20:
    result = a2;
    v35 = flt_106F1CAC;
    *a2 = flt_106F1CA8;
    v36 = flt_106F1CB0;
    a2[1] = v35;
    a2[2] = v36;
    return result;
  }
  v37 = 1.0 / (sqrt((v32 - v23) / v59) + v33);
  v38 = (a9 - a6) * v37;
  v39 = (a8 - a5) * v37;
  v53 = v39;
  v54 = v38;
  v55 = v33 * v52;
  v56 = v39 * v33 + a5;
  v57 = a6 + v33 * v38;
  v58 = v32;
  sub_10023120(COERCE_FLOAT(v60), a4, &a5, &v56, 33570819, a4, (int)v46);
  if ( 1.0 != v49 )
    goto LABEL_27;
  sub_10023120(COERCE_FLOAT(v60), a4, &a8, &v56, 16387, a4, (int)v46);
  if ( 1.0 != v49 )
    goto LABEL_20;
  if ( a14 && a15 && (sub_10023240(COERCE_FLOAT(v60), a4, &a5, &v56, a14, a15, 33570819, a4, (int)v46), v49 < 1.0) )
  {
LABEL_27:
    result = a2;
    v42 = flt_106F1CAC;
    *a2 = flt_106F1CA8;
    v43 = flt_106F1CB0;
    a2[1] = v42;
    a2[2] = v43;
  }
  else
  {
    result = a2;
    v40 = v54;
    *a2 = v53;
    v41 = v55;
    a2[1] = v40;
    a2[2] = v41;
  }
  return result;
}
