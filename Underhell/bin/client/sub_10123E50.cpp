void __thiscall sub_10123E50(float *this, float a2)
{
  double v2; // st7
  long double v3; // st7
  float v4; // [esp+8h] [ebp+8h]
  float v5; // [esp+8h] [ebp+8h]

  v2 = a2 + this[305];
  v4 = v2;
  if ( *((_DWORD *)this + 305) != LODWORD(v4) )
    this[305] = v2;
  if ( this[315] < (double)this[305] && this[315] > 0.0 )
  {
    v3 = fmod(this[305], this[315]);
    v5 = v3;
    if ( *((_DWORD *)this + 305) != LODWORD(v5) )
      this[305] = v3;
  }
}
