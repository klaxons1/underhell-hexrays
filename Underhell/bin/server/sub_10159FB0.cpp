// bad sp value at call has been detected, the output may be wrong!
float *__usercall sub_10159FB0@<eax>(
        int a1@<ebp>,
        int a2@<edi>,
        int a3@<esi>,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  float v11; // ecx
  float v12; // edx
  double v13; // st7
  double v14; // st7
  double v15; // st6
  double v16; // st7
  bool v17; // c0
  bool v18; // c3
  double v19; // st7
  double v20; // st6
  double v21; // st7
  double v22; // st7
  bool v23; // c0
  bool v24; // c3
  double v25; // st7
  double v26; // st6
  double v27; // st7
  double v28; // st7
  bool v29; // c0
  bool v30; // c3
  double v31; // st7
  double v32; // st6
  float *result; // eax
  float v34[22]; // [esp+44h] [ebp-9Ch] BYREF
  _BYTE v35[12]; // [esp+9Ch] [ebp-44h] BYREF
  float v36; // [esp+A8h] [ebp-38h] BYREF
  float v37; // [esp+ACh] [ebp-34h]
  float v38; // [esp+B0h] [ebp-30h]
  float v39; // [esp+B4h] [ebp-2Ch] BYREF
  float v40; // [esp+B8h] [ebp-28h]
  float v41; // [esp+BCh] [ebp-24h]
  float v42; // [esp+C0h] [ebp-20h]
  float v43; // [esp+C4h] [ebp-1Ch]
  float v44; // [esp+C8h] [ebp-18h]
  float v45; // [esp+CCh] [ebp-14h]
  float *v46; // [esp+D0h] [ebp-10h]
  int v47; // [esp+D4h] [ebp-Ch]
  void *v48; // [esp+D8h] [ebp-8h]
  void *retaddr; // [esp+E0h] [ebp+0h]

  v47 = a1;
  v48 = retaddr;
  v11 = *(float *)(a11 + 12);
  v12 = *(float *)(a11 + 16);
  v45 = *(float *)(a11 + 44);
  v46 = (float *)(a11 + 12);
  v44 = *(float *)(a11 + 20);
  v36 = *a6;
  v13 = a6[1];
  v42 = v11;
  v37 = v13;
  v43 = v12;
  v38 = a6[2];
  v14 = 0.0;
  if ( a7[1] <= 0.0 )
    v15 = a7[1];
  else
    v15 = 0.0;
  if ( *a7 <= 0.0 )
    v14 = *a7;
  v39 = v14;
  v40 = v15;
  v41 = a7[2];
  sub_1001F200(v34, a4, a5, &v36, &v39);
  sub_10265570(a8, a10);
  (*(void (__thiscall **)(int, float *, int, _BYTE *, int, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v34,
    a9,
    v35,
    a11,
    a2,
    a3);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0(a11, (int)v46, 255, 0, 0, 1, -1.0);
  if ( !*(_DWORD *)(a11 + 76) || *(float *)(a11 + 32) < 0.7 )
  {
    v16 = a6[1];
    v17 = v16 > 0.0;
    v18 = 0.0 == v16;
    v19 = 0.0;
    if ( v17 || v18 )
      v20 = a6[1];
    else
      v20 = 0.0;
    if ( *a6 >= 0.0 )
      v19 = *a6;
    v36 = v19;
    v45 = COERCE_FLOAT(&v39);
    v37 = v20;
    v38 = a6[2];
    v44 = COERCE_FLOAT(&v36);
    v21 = *a7;
    v43 = *(float *)&a5;
    v39 = v21;
    v42 = *(float *)&a4;
    v40 = a7[1];
    v41 = a7[2];
    sub_1001F200(v34, a4, a5, &v36, &v39);
    sub_10265570(a8, a10);
    (*(void (__thiscall **)(int, float *, int, _BYTE *, int))(*(_DWORD *)dword_106B31F4 + 16))(
      dword_106B31F4,
      v34,
      a9,
      v35,
      a11);
    if ( *(_DWORD *)(dword_106CE63C + 48) )
      sub_101A0AD0(a11, (int)v46, 255, 0, 0, 1, -1.0);
    if ( !*(_DWORD *)(a11 + 76) || *(float *)(a11 + 32) < 0.7 )
    {
      v22 = a6[1];
      v23 = v22 > 0.0;
      v24 = 0.0 == v22;
      v25 = 0.0;
      if ( v23 || v24 )
        v26 = a6[1];
      else
        v26 = 0.0;
      v36 = *a6;
      v37 = v26;
      v38 = a6[2];
      if ( *a7 <= 0.0 )
        v25 = *a7;
      v39 = v25;
      v27 = a7[1];
      v45 = COERCE_FLOAT(&v39);
      v40 = v27;
      v41 = a7[2];
      sub_1001F200(v34, a4, a5, &v36, &v39);
      sub_10265570(a8, a10);
      (*(void (__thiscall **)(int, float *, int, _BYTE *, int))(*(_DWORD *)dword_106B31F4 + 16))(
        dword_106B31F4,
        v34,
        a9,
        v35,
        a11);
      if ( *(_DWORD *)(dword_106CE63C + 48) )
        sub_101A0AD0(a11, (int)v46, 255, 0, 0, 1, -1.0);
      if ( !*(_DWORD *)(a11 + 76) || *(float *)(a11 + 32) < 0.7 )
      {
        v28 = *a6;
        v29 = v28 > 0.0;
        v30 = 0.0 == v28;
        v31 = 0.0;
        if ( v29 || v30 )
          v32 = *a6;
        else
          v32 = 0.0;
        v36 = v32;
        v37 = a6[1];
        v38 = a6[2];
        if ( a7[1] <= 0.0 )
          v31 = a7[1];
        v39 = *a7;
        v40 = v31;
        sub_1001F200(v34, a4, a5, &v36, &v39);
        sub_10158540((int)v34, a9, a8, a10, a11);
      }
    }
  }
  result = v46;
  *(float *)(a11 + 44) = v45;
  *result = v42;
  result[1] = v43;
  result[2] = v44;
  return result;
}
