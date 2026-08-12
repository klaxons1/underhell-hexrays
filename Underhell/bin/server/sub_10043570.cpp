int __thiscall sub_10043570(float *this, int a2, int a3, float a4, float *a5, float *a6)
{
  int v7; // edi
  void (__thiscall *v9)(int, _BYTE *, float *); // edx
  double v10; // st4
  double v11; // st6
  double v12; // st5
  double v13; // st7
  double v14; // st6
  double v15; // st7
  double v16; // st7
  float v17; // [esp+14h] [ebp-40h]
  _BYTE v18[12]; // [esp+24h] [ebp-30h] BYREF
  float v19[3]; // [esp+30h] [ebp-24h] BYREF
  float v20[3]; // [esp+3Ch] [ebp-18h] BYREF
  float v21[3]; // [esp+48h] [ebp-Ch] BYREF
  float v22; // [esp+64h] [ebp+10h]

  v7 = *((_DWORD *)this - 799);
  if ( !v7 )
    return 0;
  (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v7 + 204))(v7, v21, v20);
  v9 = *(void (__thiscall **)(int, _BYTE *, float *))(*(_DWORD *)v7 + 188);
  v10 = 0.1 / a4;
  v11 = (this[2] - v21[1]) * v10;
  v12 = (this[3] - v21[2]) * v10;
  *a5 = (this[1] - v21[0]) * v10 * 10.0;
  a5[1] = v11 * 10.0;
  a5[2] = v12 * 10.0;
  v9(v7, v18, v19);
  v13 = this[6];
  sub_10424C10(this[6], v19[2]);
  v14 = 1.0 / a4;
  v22 = v14;
  *a6 = v14 * (v13 - v20[0]);
  v15 = this[4];
  sub_10424C10(this[4], v19[0]);
  a6[1] = (v15 - v20[1]) * v22;
  v16 = this[10];
  v17 = v20[2] * 0.1 + v19[1];
  sub_10424C10(this[10], v17);
  a6[2] = v16 * v22;
  (*(void (__thiscall **)(float *, float *, float *))(*((_DWORD *)this - 905) + 2224))(this - 905, a5, a6);
  return 3;
}
