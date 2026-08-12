void __thiscall sub_10204580(float *this, int a2, int a3)
{
  double v3; // st6

  if ( 0.0 != this[11] )
  {
    v3 = this[12] + *(float *)(a2 + 36);
    *(_DWORD *)(a3 + 4) = 0;
    *(float *)(a3 + 8) = v3;
    *(float *)a3 = 0.0;
    *(float *)(a3 + 12) = *(float *)(a2 + 36);
  }
}
