int __thiscall sub_100F3020(int this, int a2)
{
  int result; // eax

  result = sub_100EB1D0((unsigned __int16 *)(this + 8));
  if ( !result && !*(_DWORD *)(this + 248) )
  {
    result = *(_DWORD *)(this + 236);
    if ( (result & 2) != 0 && (result & 4) == 0 )
      *(_DWORD *)(this + 156) |= 1u;
  }
  return result;
}
