int __thiscall sub_101F5EE0(float *this, float a2)
{
  long double v3; // st7
  int v5; // [esp+4h] [ebp-Ch] BYREF
  int v6; // [esp+8h] [ebp-8h] BYREF
  float v7; // [esp+Ch] [ebp-4h]

  v7 = this[78] * 0.008726646259971648;
  sub_102361D0(&v6, &v5);
  if ( v5 >= v6 )
    v3 = v7;
  else
    v3 = atan2(tan(v7) * (double)v5 / (double)v6, 1.0);
  this[255] = -(a2 / sin(v3));
  return sub_101F5A00(this);
}
