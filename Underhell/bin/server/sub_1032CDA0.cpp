bool __thiscall sub_1032CDA0(int *this, int a2)
{
  double v2; // st7
  int v3; // eax
  bool result; // al

  v2 = *(float *)(a2 + 52) / (double)this[54];
  if ( v2 > 1.0 )
    v2 = 1.0;
  result = this[55] <= 0
        && v2 > 0.5
        && (v3 = *(_DWORD *)(a2 + 64), (v3 & 4) != 0)
        && (v3 & 1) != 0
        && (v3 & 0x400000) == 0;
  return result;
}
