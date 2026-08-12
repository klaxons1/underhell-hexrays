// bad sp value at call has been detected, the output may be wrong!
float *__userpurge sub_102AA6F0@<eax>(int a1@<ecx>, float a2@<ebp>, int a3@<esi>, float *a4, float *a5)
{
  int v5; // esi
  double v6; // st4
  double v7; // st5
  double v8; // st6
  float *result; // eax
  float v11[20]; // [esp+24h] [ebp-CCh] BYREF
  _BYTE v12[12]; // [esp+74h] [ebp-7Ch] BYREF
  float v13[19]; // [esp+80h] [ebp-70h] BYREF
  _DWORD v14[3]; // [esp+CCh] [ebp-24h] BYREF
  float v15[6]; // [esp+D8h] [ebp-18h] BYREF
  float retaddr; // [esp+F0h] [ebp+0h]

  v15[3] = a2;
  v15[4] = retaddr;
  v5 = *(_DWORD *)(a1 + 4);
  v6 = *(float *)(a1 + 44);
  v7 = *(float *)(a1 + 32) * 2.0 * v6;
  v8 = 2.0 * *(float *)(a1 + 36) * v6;
  v15[0] = *(float *)(a1 + 28) * 2.0 * v6 + *a4;
  v15[1] = v7 + a4[1];
  v15[2] = v8 + a4[2];
  sub_1001F180(v11, a4, v15);
  sub_10265570(v14, v5, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v11,
    16513,
    v14,
    v12,
    a3);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v12, (int)v13, 255, 0, 0, 1, 5.0);
  result = a5;
  *a5 = v13[0];
  a5[1] = v13[1];
  a5[2] = v13[2];
  return result;
}
