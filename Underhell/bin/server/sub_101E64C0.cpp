double __stdcall sub_101E64C0(float *a1, float *a2, float *a3, int a4, float a5, int a6)
{
  double v6; // st7
  double v7; // st6
  double v8; // rt0
  double v9; // st6
  double v10; // st7
  float v12[2]; // [esp+0h] [ebp-18h] BYREF
  float v13; // [esp+8h] [ebp-10h]
  float v14[3]; // [esp+Ch] [ebp-Ch] BYREF
  float v15; // [esp+2Ch] [ebp+14h]
  int v16; // [esp+2Ch] [ebp+14h]

  v6 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a4 + 232))(a4) * a5;
  if ( a6 )
  {
    v15 = v6;
    v6 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a6 + 1148))(a6) * v15;
  }
  *(float *)&v16 = v6 * v6;
  v7 = 8192.0 * a2[2];
  v8 = a2[1] * 8192.0;
  v14[0] = *a2 * 8192.0 + *a1;
  v14[1] = v8 + a1[1];
  v14[2] = v7 + a1[2];
  sub_10086040(v12, a1, v14, a3);
  v9 = a3[1] - v12[1];
  v10 = (a3[2] - v13) * (a3[2] - v13) + v9 * v9 + (*a3 - v12[0]) * (*a3 - v12[0]);
  if ( *(float *)&v16 < v10 )
    return 0.0;
  else
    return 1.0 - v10 / *(float *)&v16;
}
