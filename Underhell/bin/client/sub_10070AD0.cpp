void __cdecl sub_10070AD0(int a1, int a2, float a3, int a4, int a5, float *a6)
{
  double v6; // st7
  double v7; // st6
  double v8; // st7
  int v9; // [esp+0h] [ebp-44h]
  int v10; // [esp+0h] [ebp-44h]
  float v11; // [esp+4h] [ebp-40h]
  float v12; // [esp+8h] [ebp-3Ch]
  float v13; // [esp+Ch] [ebp-38h]
  float v14[3]; // [esp+14h] [ebp-30h] BYREF
  float v15[3]; // [esp+20h] [ebp-24h] BYREF
  float v16[3]; // [esp+2Ch] [ebp-18h] BYREF
  float v17; // [esp+38h] [ebp-Ch]
  float v18; // [esp+3Ch] [ebp-8h]
  float v19; // [esp+40h] [ebp-4h]
  float v20; // [esp+4Ch] [ebp+8h]
  float v21; // [esp+50h] [ebp+Ch]

  v11 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_1041315C + 352))(dword_1041315C) * 0.75;
  sub_10135880(a3, v11);
  v18 = a3;
  v6 = (double)(sub_10076740(v9) / 2);
  v19 = v6;
  v17 = (double)a1 - v6;
  v20 = (double)(sub_10076720(v10) / 2) - (double)a2;
  v21 = v19 / tan(a3 * 3.141592653589793 * 0.002777777777777778);
  sub_101EE040(a5, v14, v15, v16);
  v12 = v14[0] * v21;
  v13 = v14[1] * v21;
  v7 = v20 * v16[2] + v17 * v15[2] + v21 * v14[2];
  v8 = v16[1] * v20 + v15[1] * v17 + v13;
  *a6 = v16[0] * v20 + v15[0] * v17 + v12;
  a6[1] = v8;
  a6[2] = v7;
  off_103EDFEC();
}
