void __thiscall sub_100A6250(float *this, float *a2)
{
  float *v2; // ecx

  this[23] = NAN;
  v2 = this + 20;
  *v2 = *a2;
  v2[1] = a2[1];
  v2[2] = a2[2];
  off_10689714();
}
