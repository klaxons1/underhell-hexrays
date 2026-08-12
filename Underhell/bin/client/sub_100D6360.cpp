void __thiscall sub_100D6360(float *this, float *a2)
{
  this[1] = *a2;
  this[2] = a2[1];
  this[3] = a2[2];
  if ( this[1] > 180.0 )
    this[1] = this[1] - 360.0;
  if ( this[1] < -180.0 )
    this[1] = this[1] + 360.0;
  this[7] = 0.0;
  this[8] = 0.0;
}
