void __thiscall sub_1021F9D0(float *this, int a2, int a3)
{
  double v3; // st6

  *(_DWORD *)a3 = 0;
  if ( this[12] <= 1.0 )
  {
    *(_DWORD *)(a3 + 8) = 1;
    *(float *)(a3 + 4) = 0.0;
  }
  else
  {
    v3 = this[12];
    *(_DWORD *)(a3 + 8) = 1;
    *(float *)(a3 + 4) = 1.0 / (v3 - 1.0);
  }
}
