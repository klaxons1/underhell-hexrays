void __thiscall sub_10206E20(float *this)
{
  double v1; // st7
  double v2; // st6
  double v3; // st5
  long double v4; // st4
  long double v5; // st7
  long double v6; // st6
  long double v7; // st5

  v1 = this[481];
  v2 = this[482];
  v3 = this[480];
  if ( 0.0 == this[483] )
    this[483] = 90.0;
  v4 = fabs(this[483]);
  this[483] = v4;
  v5 = v1 * v4;
  this[492] = this[489] - v5;
  v6 = v2 * v4;
  this[493] = this[490] - v6;
  v7 = v3 * v4;
  this[494] = this[491] - v7;
  this[495] = v5 + this[489];
  this[496] = v6 + this[490];
  this[497] = v7 + this[491];
}
