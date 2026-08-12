int __thiscall sub_101F45A0(float *this)
{
  int result; // eax
  int v3; // ecx

  sub_101F5A90();
  result = sub_102356B0(this + 267);
  if ( (_WORD)result != 0xFFFF )
  {
    result = Plat_MSTime();
    v3 = dword_104655E4;
    if ( !dword_104655E4 )
      v3 = result;
    dword_104655E4 = result;
    flt_104655E0 = (double)(result - v3) * 0.001 + flt_104655E0;
    this[274] = flt_104655E0;
  }
  return result;
}
