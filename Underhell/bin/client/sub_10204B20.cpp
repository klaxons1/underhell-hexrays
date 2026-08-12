int __thiscall sub_10204B20(_DWORD *this, __int16 a2, float *a3, float *a4, float *a5)
{
  int v5; // edx
  int result; // eax

  v5 = this[1656];
  *a5 = *a3 + (*a4 - *a3) * flt_103EE7C0[((_WORD)v5 + (_WORD)v5 + a2) & 0xFFF];
  a5[1] = a3[1] + (a4[1] - a3[1]) * flt_103EE7C0[((_WORD)v5 + a2 + (unsigned __int16)this[1656] + 1) & 0xFFF];
  result = ((_WORD)v5 + a2 + (unsigned __int16)this[1656] + 2) & 0xFFF;
  a5[2] = a3[2] + (a4[2] - a3[2]) * flt_103EE7C0[result];
  return result;
}
