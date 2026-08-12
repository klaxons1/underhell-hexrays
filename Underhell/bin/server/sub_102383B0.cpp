int __thiscall sub_102383B0(int *this, int a2)
{
  double v2; // st7
  int v3; // eax
  float v5; // [esp+0h] [ebp-Ch]

  this[210] = 0;
  if ( *(_DWORD *)(a2 + 24) == 1 )
    v2 = *(float *)(a2 + 8);
  else
    v2 = 0.0;
  this[211] = (int)v2;
  if ( (int)v2 > 100 )
    this[211] = 100;
  if ( this[211] < 0 )
    this[211] = 0;
  v3 = this[211];
  if ( v3 > 0 )
    this[211] = 25600 / (5 * v3);
  v5 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC4A0(this, v5, 0);
}
