float *__thiscall sub_10209290(int this, int a2, int a3, int a4, int a5, int a6)
{
  int v8; // ecx
  float *v9; // esi
  float *result; // eax
  double v11; // st7
  double v12; // st6
  int v13[3]; // [esp+18h] [ebp-18h] BYREF
  float v14[3]; // [esp+24h] [ebp-Ch] BYREF

  for ( ; a4; v9[8] = v12 + v9[8] )
  {
    --a4;
    v8 = a3 & 3;
    v9 = (float *)(*(_DWORD *)(a2 + 6068) + 4 * (v8 + a3 / 4 * *(_DWORD *)(a2 + 6324)));
    sub_101F8ED0(
      a2,
      *(_DWORD *)(this + 44),
      *(float *)(*(_DWORD *)(a2 + 6100) + 4 * (v8 + a3 / 4 * *(_DWORD *)(a2 + 6356))),
      (float *)v13);
    result = sub_101F8840((float *)a2, *(_DWORD *)(this + 44), v14);
    ++a3;
    v11 = (*(float *)&v13[1] - v14[1]) * *(float *)(this + 48);
    v12 = (*(float *)&v13[2] - v14[2]) * *(float *)(this + 48);
    *v9 = (*(float *)v13 - v14[0]) * *(float *)(this + 48) + *v9;
    v9[4] = v11 + v9[4];
  }
  return result;
}
