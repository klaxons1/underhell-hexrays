float *__thiscall sub_10286640(int *this)
{
  double v1; // st7
  float *v2; // ecx
  long double v3; // st7
  double v4; // st6
  float v6[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = (double)this[228];
  v2 = (float *)(this + 230);
  v3 = v1 * 0.017453292;
  v4 = (double)*((int *)v2 - 1);
  v6[0] = cos(v3) * v4;
  v6[1] = v4 * sin(v3);
  v6[2] = 0.0;
  return sub_102862E0(v2, v6);
}
