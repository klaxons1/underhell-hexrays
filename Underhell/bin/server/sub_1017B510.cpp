void __thiscall sub_1017B510(float *this, int a2)
{
  double v2; // st7

  v2 = 0.0099999998;
  if ( *(_DWORD *)(a2 + 24) == 1 && *(float *)(a2 + 8) >= 0.0099999998 )
    v2 = *(float *)(a2 + 8);
  if ( v2 != this[219] )
  {
    this[219] = v2;
    sub_1017ABB0((int)this);
  }
}
