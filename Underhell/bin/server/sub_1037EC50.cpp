float *__thiscall sub_1037EC50(void *this, float *a2)
{
  float *result; // eax
  long double v3; // st7
  long double v4; // st6
  long double v5; // st7
  long double v6; // rt1
  long double v7; // st4
  float v8[3]; // [esp+0h] [ebp-18h] BYREF
  float v9[3]; // [esp+Ch] [ebp-Ch] BYREF

  (*(void (__thiscall **)(void *, _DWORD, float *, float *))(*(_DWORD *)this + 528))(this, 0, v8, v9);
  result = a2;
  v3 = sin(*(float *)(dword_106B31C8 + 12));
  v4 = v3 + v3;
  v5 = v4 * v9[2];
  v6 = v9[1] * v4 + v8[1] * v4;
  v7 = v4 * v8[2];
  *a2 = v9[0] * v4 + v8[0] * v4 + *a2;
  a2[1] = v6 + a2[1];
  a2[2] = v5 + v7 + a2[2];
  return result;
}
