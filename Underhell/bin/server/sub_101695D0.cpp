// bad sp value at call has been detected, the output may be wrong!
float *__usercall sub_101695D0@<eax>(
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
        float a11,
        float *a12,
        float *a13)
{
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v16; // st7
  double v17; // st7
  double v18; // st4
  double v19; // st3
  float *result; // eax
  float v21; // edx
  float v22; // ecx
  float v23; // ecx
  float v24; // edx
  float v25; // ecx
  float v26; // edx
  float v27; // [esp+10h] [ebp-F0h]
  float v28[20]; // [esp+24h] [ebp-DCh] BYREF
  _BYTE v29[12]; // [esp+74h] [ebp-8Ch] BYREF
  int v30; // [esp+80h] [ebp-80h] BYREF
  float v31; // [esp+A0h] [ebp-60h]
  int v32; // [esp+CCh] [ebp-34h] BYREF
  float v33; // [esp+D8h] [ebp-28h]
  float v34[3]; // [esp+DCh] [ebp-24h] BYREF
  float v35; // [esp+E8h] [ebp-18h]
  float v36; // [esp+ECh] [ebp-14h]
  float v37; // [esp+F0h] [ebp-10h]
  _DWORD v38[3]; // [esp+F4h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+100h] [ebp+0h]

  v38[0] = a1;
  v38[1] = retaddr;
  v33 = *(float *)(dword_106B6F0C + 44) * a11;
  v13 = a7 - *a6;
  v35 = v13;
  v14 = a8 - a6[1];
  v36 = v14;
  v15 = a9 - a6[2];
  v37 = v15;
  v27 = v15 * v15 + v14 * v14 + v13 * v13;
  v16 = off_10689708(v27);
  v17 = v16 / a10;
  v35 = v35 * (1.0 / v17);
  v36 = 1.0 / v17 * v36;
  v37 = 1.0 / v17 * v37 + v17 * v33 * 0.5;
  v18 = (a8 - a6[1]) * 0.5;
  v19 = (a9 - a6[2]) * 0.5;
  v34[0] = (a7 - *a6) * 0.5 + *a6;
  v34[1] = v18 + a6[1];
  v34[2] = v17 * 0.5 * (0.5 * v33 * (v17 * 0.5)) + v19 + a6[2];
  sub_1001F180(v28, a6, v34);
  sub_10265570(a5, 0);
  (*(void (__thiscall **)(int, float *, int, int *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v28,
    33570827,
    &v32,
    v29,
    a2,
    a3);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v29, (int)&v30, 255, 0, 0, 1, 5.0);
  if ( 1.0 != v31 )
    goto LABEL_4;
  sub_1002A5F0((int)v38, (int)a6, &a7, v34, 16395, a5, 0, (int)v29);
  if ( 1.0 == v31 )
  {
    if ( a12 )
    {
      if ( a13 )
      {
        sub_100231A0((int)v38, (int)a6, a6, v34, a12, a13, 33570827, a5, 0, (int)v29);
        if ( v31 < 1.0 )
        {
LABEL_4:
          result = a4;
          v21 = flt_106F1CAC;
          *a4 = flt_106F1CA8;
          v22 = flt_106F1CB0;
          a4[1] = v21;
          a4[2] = v22;
          return result;
        }
      }
    }
    result = a4;
    v25 = v36;
    *a4 = v35;
    v26 = v37;
    a4[1] = v25;
    a4[2] = v26;
  }
  else
  {
    result = a4;
    v23 = flt_106F1CAC;
    *a4 = flt_106F1CA8;
    v24 = flt_106F1CB0;
    a4[1] = v23;
    a4[2] = v24;
  }
  return result;
}
