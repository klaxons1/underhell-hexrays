void __thiscall sub_103B0320(float *this, int a2)
{
  double v2; // st7
  double v3; // st6

  v2 = 200.0;
  if ( *(_DWORD *)(a2 + 24) != 1 )
    goto LABEL_5;
  v3 = *(float *)(a2 + 8);
  if ( v3 > 490.0 )
  {
    v3 = 490.0;
LABEL_4:
    v2 = v3;
LABEL_5:
    this[967] = v2;
    return;
  }
  if ( v3 >= 200.0 )
    goto LABEL_4;
  this[967] = 200.0;
}
