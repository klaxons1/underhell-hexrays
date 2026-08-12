void __thiscall sub_10034B10(float *this, float *a2)
{
  if ( this[151] != *a2 || this[152] != a2[1] || this[153] != a2[2] )
  {
    sub_1000F6C0((int)this, 2);
    this[151] = *a2;
    this[152] = a2[1];
    this[153] = a2[2];
  }
}
