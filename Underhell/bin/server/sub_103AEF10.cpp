void __thiscall sub_103AEF10(int this, float a2)
{
  double v3; // st6
  double v4; // st7

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v3 = 490.0;
  v4 = 490.0 - (a2 - *(float *)(this + 588));
  if ( v4 > 490.0 || (v3 = 200.0, v4 < 200.0) )
    *(float *)(this + 3868) = v3;
  else
    *(float *)(this + 3868) = v4;
}
