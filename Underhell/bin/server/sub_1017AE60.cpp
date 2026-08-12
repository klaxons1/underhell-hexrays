void __thiscall sub_1017AE60(float *this)
{
  double v1; // st7

  if ( this[201] == this[200] )
  {
    this[200] = 0.0;
    this[201] = 1.0;
  }
  if ( this[201] < (double)this[200] )
  {
    v1 = this[200];
    this[200] = this[201];
    this[201] = v1;
  }
}
