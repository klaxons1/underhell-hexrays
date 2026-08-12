void __thiscall sub_10396DA0(float *this, int a2)
{
  double v2; // st7

  if ( *(_DWORD *)(a2 + 24) == 1 )
  {
    v2 = *(float *)(a2 + 8);
    if ( -1.0 == v2 )
    {
      this[1401] = 3.4028235e38;
      return;
    }
  }
  else
  {
    v2 = 0.0;
  }
  this[1401] = v2 + *(float *)(dword_106B31C8 + 12);
}
