void __thiscall sub_100D7940(float *this)
{
  float v2; // eax

  v2 = *this;
  this[5] = 180.0;
  if ( (*(unsigned __int8 (**)(void))(LODWORD(v2) + 8))() )
  {
    if ( this[7] >= 0.0 )
      this[5] = -(1.0 * this[5]);
    else
      this[5] = -(-1.0 * this[5]);
  }
}
