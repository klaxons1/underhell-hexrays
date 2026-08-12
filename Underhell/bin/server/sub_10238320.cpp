int __thiscall sub_10238320(int *this, int a2)
{
  double v2; // st7
  int v3; // eax
  float v5; // [esp+0h] [ebp-Ch]

  this[211] = 0;
  if ( *(_DWORD *)(a2 + 24) == 1 )
    v2 = *(float *)(a2 + 8);
  else
    v2 = 0.0;
  this[210] = (int)v2;
  if ( (int)v2 > 100 )
    this[210] = 100;
  if ( this[210] < 0 )
    this[210] = 0;
  v3 = this[210];
  if ( v3 > 0 )
    this[210] = 25600 / (5 * v3);
  v5 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC4A0(this, v5, 0);
}
