// bad sp value at call has been detected, the output may be wrong!
float *__usercall sub_102FF9F0@<eax>(
        int a1@<ebp>,
        int a2@<edi>,
        int a3@<esi>,
        float *a4,
        int a5,
        float *a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11)
{
  double v11; // st7
  double v12; // st6
  double v13; // st5
  double v14; // st7
  double v15; // st7
  double v16; // st4
  double v17; // st3
  double v18; // st7
  float *result; // eax
  float v20; // ecx
  float v21; // edx
  float v22; // edx
  float v23; // ecx
  float v24; // [esp+28h] [ebp-F0h]
  float v25[20]; // [esp+3Ch] [ebp-DCh] BYREF
  _BYTE v26[12]; // [esp+8Ch] [ebp-8Ch] BYREF
  float v27; // [esp+98h] [ebp-80h] BYREF
  float v28; // [esp+9Ch] [ebp-7Ch]
  float v29; // [esp+A0h] [ebp-78h]
  float v30; // [esp+B8h] [ebp-60h]
  _DWORD v31[2]; // [esp+E4h] [ebp-34h] BYREF
  float v32; // [esp+F0h] [ebp-28h]
  float v33[3]; // [esp+F4h] [ebp-24h] BYREF
  float v34; // [esp+100h] [ebp-18h]
  float v35; // [esp+104h] [ebp-14h]
  float v36; // [esp+108h] [ebp-10h]
  _DWORD v37[3]; // [esp+10Ch] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+118h] [ebp+0h]

  v37[0] = a1;
  v37[1] = retaddr;
  if ( a10 < 1.0 )
    a10 = 1.0;
  v32 = *(float *)(dword_106B6F0C + 44);
  v11 = a7 - *a6;
  v34 = v11;
  v12 = a8 - a6[1];
  v35 = v12;
  v13 = a9 - a6[2];
  v36 = v13;
  v24 = v11 * v11 + v12 * v12 + v13 * v13;
  v14 = off_10689708(v24);
  v15 = v14 / a10;
  v34 = v34 * (1.0 / v15);
  v35 = v35 * (1.0 / v15);
  v36 = 1.0 / v15 * v36 + v15 * v32 * 0.5;
  v16 = (a8 - a6[1]) * 0.5;
  v17 = (a9 - a6[2]) * 0.5;
  v33[0] = (a7 - *a6) * 0.5 + *a6;
  v33[1] = v16 + a6[1];
  v33[2] = v17 + a6[2] + v15 * 0.5 * (0.5 * v32 * (v15 * 0.5));
  sub_1001F180(v25, a6, v33);
  sub_10265570(v31, a5, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v25,
    33570827,
    v31,
    v26,
    a2,
    a3);
  v18 = 5.0;
  if ( *(_DWORD *)(dword_106CE63C + 48) )
  {
    sub_101A0AD0((int)v26, (int)&v27, 255, 0, 0, 1, 5.0);
    v18 = 5.0;
  }
  if ( 1.0 != v30 )
  {
    if ( *(_DWORD *)(dword_106E2D64 + 48) )
    {
      v35 = v18;
      sub_1011BC50(a6, v33, 255, 0, 0, 1, v35);
    }
LABEL_8:
    result = a4;
    v20 = flt_106F1CAC;
    *a4 = flt_106F1CA8;
    v21 = flt_106F1CB0;
    a4[1] = v20;
    a4[2] = v21;
    return result;
  }
  if ( *(_DWORD *)(dword_106E2D64 + 48) )
  {
    v35 = v18;
    sub_1011BC50(a6, v33, 0, 255, 0, 1, v35);
  }
  sub_1002A5F0((int)v37, (int)a6, v33, &a7, 16395, a5, 0, (int)v26);
  if ( 1.0 != v30 )
  {
    if ( a11 <= 0.0 || a11 * a11 <= (v27 - a7) * (v27 - a7) + (v28 - a8) * (v28 - a8) + (v29 - a9) * (v29 - a9) )
    {
      if ( *(_DWORD *)(dword_106E2D64 + 48) )
      {
        sub_1011BC50(v33, &a7, 255, 0, 0, 1, 5.0);
        sub_1011CDD0(&v27, (int)&flt_106F1CB4, a11, 255, 0, 0, 0, 1, 5.0);
      }
      goto LABEL_8;
    }
    if ( *(_DWORD *)(dword_106E2D64 + 48) )
      sub_1011CDD0(&v27, (int)&flt_106F1CB4, a11, 0, 255, 0, 0, 1, 5.0);
  }
  if ( *(_DWORD *)(dword_106E2D64 + 48) )
    sub_1011BC50(v33, &a7, 0, 255, 0, 1, 5.0);
  result = a4;
  v22 = v35;
  *a4 = v34;
  v23 = v36;
  a4[1] = v22;
  a4[2] = v23;
  return result;
}
