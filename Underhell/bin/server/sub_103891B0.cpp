float *__thiscall sub_103891B0(float *this, int a2, float *a3, float a4, int a5)
{
  float *result; // eax
  double v6; // st6
  double v7; // st4
  double v8; // st3
  double v9; // st2
  float v10; // [esp+0h] [ebp-Ch]
  float v11; // [esp+8h] [ebp-4h]

  v10 = this[1071];
  v11 = this[1073];
  result = a3;
  v6 = this[1072];
  v7 = a3[2] * v11 + *a3 * v10 + a3[1] * v6;
  v8 = (v7 - this[1074]) * a4;
  v9 = 1.0 / (double)(a5 - 1);
  this[1074] = v7;
  this[1055] = v10 * v8 * v9 + this[1055];
  this[1056] = v6 * v8 * v9 + this[1056];
  this[1057] = v11 * v8 * v9 + this[1057];
  return result;
}
