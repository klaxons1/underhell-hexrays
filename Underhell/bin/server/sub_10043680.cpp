int __thiscall sub_10043680(float *this, int a2, float *a3)
{
  double v4; // st7
  int result; // eax
  float v6; // [esp+0h] [ebp-18h]
  float v7[3]; // [esp+Ch] [ebp-Ch] BYREF

  v7[0] = *a3 - this[179];
  v7[1] = a3[1] - this[180];
  v7[2] = a3[2] - this[181];
  v4 = sub_10029300(this, v7);
  v6 = v4;
  result = sub_10424C10(v6, 0.0);
  this[915] = v4;
  return result;
}
