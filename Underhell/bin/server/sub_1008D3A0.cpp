// bad sp value at call has been detected, the output may be wrong!
double __usercall sub_1008D3A0@<st0>(int a1@<ebp>, int a2@<esi>, int a3, float a4)
{
  float v5[22]; // [esp+34h] [ebp-12Ch] BYREF
  _BYTE v6[12]; // [esp+8Ch] [ebp-D4h] BYREF
  float v7[16]; // [esp+98h] [ebp-C8h] BYREF
  int v8; // [esp+D8h] [ebp-88h]
  _BYTE v9[12]; // [esp+E4h] [ebp-7Ch] BYREF
  float v10[19]; // [esp+F0h] [ebp-70h] BYREF
  _BYTE v11[12]; // [esp+13Ch] [ebp-24h] BYREF
  float v12; // [esp+148h] [ebp-18h] BYREF
  float *v13; // [esp+14Ch] [ebp-14h]
  float v14; // [esp+150h] [ebp-10h]
  int v15; // [esp+154h] [ebp-Ch]
  void *v16; // [esp+158h] [ebp-8h]
  void *retaddr; // [esp+160h] [ebp+0h]

  v15 = a1;
  v16 = retaddr;
  v12 = *(float *)a3;
  v13 = *(float **)(a3 + 4);
  v14 = *(float *)(a3 + 8) - a4;
  sub_1001F180(v5, (float *)a3, &v12);
  sub_10265570(0, 0);
  (*(void (__thiscall **)(int, float *, int, _BYTE *, _BYTE *, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v5,
    147467,
    v11,
    v9,
    a2);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v9, (int)v10, 255, 0, 0, 1, 5.0);
  v12 = *(float *)a3;
  v14 = COERCE_FLOAT(&v12);
  v13 = *(float **)(a3 + 4);
  v14 = *(float *)(a3 + 8) - a4;
  sub_1001F180(v5, v13, (float *)LODWORD(v14));
  sub_10265570(0, 0);
  (*(void (__thiscall **)(int, float *, int, _BYTE *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v5,
    33701899,
    v11,
    v6);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v6, (int)v7, 255, 0, 0, 1, 5.0);
  if ( v10[8] > (double)v7[8] && v8 && (*(_DWORD *)(v8 + 256) & 0x1000000) != 0 )
    return v7[2];
  else
    return v10[2];
}
