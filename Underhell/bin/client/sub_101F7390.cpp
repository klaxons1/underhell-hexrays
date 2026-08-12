int __thiscall sub_101F7390(_DWORD *this, __int16 a2, float a3, float a4, float *a5)
{
  __int16 v5; // ax
  double v6; // st7
  int v7; // edx
  int result; // eax

  v5 = a2 + this[1656];
  v6 = a4 - a3;
  v7 = (v5 + 1) & 0xFFF;
  result = (v5 + 2) & 0xFFF;
  *a5 = flt_103EE7C0[(a2 + (unsigned __int16)this[1656]) & 0xFFF] * v6 + a3;
  a5[1] = flt_103EE7C0[v7] * v6 + a3;
  a5[2] = v6 * flt_103EE7C0[result] + a3;
  return result;
}
