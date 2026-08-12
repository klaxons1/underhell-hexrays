float *__thiscall sub_101ADB60(float *this, int a2, float *a3, float *a4)
{
  double v5; // st7
  float *result; // eax
  double v7; // st6
  double v8; // st7
  double v9; // rt0
  _BYTE v10[48]; // [esp+4h] [ebp-3Ch] BYREF
  float v11[3]; // [esp+34h] [ebp-Ch] BYREF

  *a3 = 0.0;
  a3[1] = 0.0;
  a3[2] = 0.0;
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 192))(a2, v10);
  sub_10421C60(this + 220, v10, v11);
  v5 = this[202];
  result = a4;
  v7 = v11[0] * v5;
  v8 = v5 * v11[2];
  v9 = this[202] * v11[1];
  *a4 = v7;
  a4[1] = v9;
  a4[2] = v8;
  return result;
}
