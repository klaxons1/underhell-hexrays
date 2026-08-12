double __thiscall sub_101F8760(_DWORD *this, __int16 a2, float *a3)
{
  __int16 v3; // si
  double v4; // st7
  double result; // st7
  float v6; // [esp+4h] [ebp-20h]
  float v7; // [esp+8h] [ebp-1Ch]
  float v8; // [esp+Ch] [ebp-18h]
  float v9; // [esp+18h] [ebp-Ch]
  float v10; // [esp+1Ch] [ebp-8h]
  float v11; // [esp+20h] [ebp-4h]
  float v12; // [esp+28h] [ebp+4h]

  v3 = this[1656] + a2;
  v4 = flt_103EE7C0[v3 & 0xFFF];
  v9 = acos(1.0 - (v4 + v4));
  v10 = flt_103EE7C0[(v3 + 1) & 0xFFF] * 6.283185307179586;
  v11 = pow(flt_103EE7C0[(v3 + 2) & 0xFFF], 0.3333333432674408);
  v8 = cos(v9);
  v6 = sin(v9);
  v12 = cos(v10);
  v7 = sin(v10);
  result = v11;
  *a3 = v12 * v6 * v11;
  a3[1] = v6 * v7 * v11;
  a3[2] = v8 * v11;
  return result;
}
