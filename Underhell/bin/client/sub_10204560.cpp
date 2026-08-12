int __thiscall sub_10204560(float *this, int a2, int a3)
{
  int result; // eax

  result = a3;
  *(float *)(a3 + 8) = this[12];
  *(_DWORD *)(a3 + 4) = 0;
  *(float *)a3 = 0.0;
  *(_BYTE *)(a3 + 16) = 0;
  *(float *)(a3 + 12) = 0.0;
  return result;
}
