// bad sp value at call has been detected, the output may be wrong!
bool __usercall sub_1018D560@<al>(int a1@<ebp>, int a2@<esi>, float *a3)
{
  float v3; // ecx
  float v4; // edx
  double v5; // st7
  int v6; // esi
  long double v8; // st7
  float v10[20]; // [esp+34h] [ebp-DCh] BYREF
  _BYTE v11[12]; // [esp+84h] [ebp-8Ch] BYREF
  _BYTE v12[32]; // [esp+90h] [ebp-80h] BYREF
  float v13; // [esp+B0h] [ebp-60h]
  _BYTE v14[12]; // [esp+DCh] [ebp-34h] BYREF
  float v15; // [esp+E8h] [ebp-28h] BYREF
  float v16; // [esp+ECh] [ebp-24h]
  float v17; // [esp+F0h] [ebp-20h]
  float v18; // [esp+F4h] [ebp-1Ch]
  float v19[2]; // [esp+F8h] [ebp-18h] BYREF
  float v20; // [esp+100h] [ebp-10h]
  int v21; // [esp+104h] [ebp-Ch]
  void *v22; // [esp+108h] [ebp-8h]
  void *retaddr; // [esp+110h] [ebp+0h]

  v21 = a1;
  v22 = retaddr;
  v3 = *a3;
  v4 = a3[1];
  v20 = a3[2];
  v5 = v20 + 36.0;
  v19[0] = v3;
  v19[1] = v4;
  v20 = v5;
  v6 = 0;
  v15 = v3;
  v16 = v4;
  v17 = v5 + 20.0;
  sub_1001F180(v10, v19, &v15);
  sub_10265570(0, 0);
  (*(void (__thiscall **)(int, float *, int, _BYTE *, _BYTE *, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v10,
    81931,
    v14,
    v11,
    a2);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v11, (int)v12, 255, 0, 0, 1, 5.0);
  if ( 1.0 != v13 )
    return 1;
  v8 = 0.0;
  v18 = 0.0;
  v17 = v20 + 36.0;
  do
  {
    v15 = cos(v8) * 100.0 + v19[0];
    v16 = 100.0 * sin(v8) + COERCE_FLOAT(v19);
    sub_1001F180(v10, v19, &v15);
    sub_10265570(0, 0);
    (*(void (__thiscall **)(int, float *, int, _BYTE *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
      dword_106B31F4,
      v10,
      81931,
      v14,
      v11);
    if ( *(_DWORD *)(dword_106CE63C + 48) )
      sub_101A0AD0((int)v11, (int)v12, 255, 0, 0, 1, 5.0);
    if ( 1.0 != v13 )
      ++v6;
    v8 = v18 + 0.39269909;
    v18 = v8;
  }
  while ( v8 < 6.283185307179586 );
  return v6 >= 8;
}
