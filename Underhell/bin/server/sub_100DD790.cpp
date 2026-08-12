void __thiscall sub_100DD790(float *this, float *a2)
{
  float *v2; // esi

  v2 = this + 148;
  if ( this[148] != *a2 || this[149] != a2[1] || this[150] != a2[2] )
  {
    sub_100E98A0(4);
    sub_100D9590(v2, a2);
  }
}
