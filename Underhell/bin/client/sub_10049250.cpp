int __stdcall sub_10049250(int a1, int a2, float a3, float *a4, float *a5)
{
  void (__thiscall *v5)(int, float *, _BYTE *); // edx
  double v6; // st4
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st6
  int result; // eax
  _BYTE v12[12]; // [esp+4h] [ebp-24h] BYREF
  float v13; // [esp+10h] [ebp-18h]
  float v14; // [esp+14h] [ebp-14h]
  float v15; // [esp+18h] [ebp-10h]
  float v16; // [esp+1Ch] [ebp-Ch] BYREF
  float v17; // [esp+20h] [ebp-8h]
  float v18; // [esp+24h] [ebp-4h]

  v5 = *(void (__thiscall **)(int, float *, _BYTE *))(*(_DWORD *)a2 + 204);
  *a4 = 0.0;
  a4[1] = 0.0;
  a4[2] = 0.0;
  *a5 = 0.0;
  a5[1] = 0.0;
  a5[2] = 0.0;
  a4[2] = a4[2] - *(float *)(dword_10434644 + 44) * -1.02;
  v5(a2, &v16, v12);
  v6 = a4[2];
  v7 = a4[1] * a3;
  v16 = *a4 * a3 + v16;
  v13 = v16;
  v17 = v7 + v17;
  v14 = v17;
  v18 = a3 * v6 + v18;
  v15 = v18;
  v8 = off_103EDFEC();
  if ( v8 <= 50.0 )
    return 3;
  v9 = (50.0 - v8) / a3;
  v10 = -40.0 / a3;
  if ( v10 > v9 )
    v9 = v10;
  result = 3;
  *a4 = v13 * v9 + *a4;
  a4[1] = v14 * v9 + a4[1];
  a4[2] = v9 * v15 + a4[2];
  return result;
}
