unsigned int __thiscall sub_10200590(int this, int a2)
{
  bool v2; // zf
  unsigned int result; // eax

  if ( *(_BYTE *)(this + 800) )
  {
    v2 = *(_BYTE *)(this + 801) == 0;
    *(_BYTE *)(this + 800) = 0;
    if ( !v2 )
      return sub_102004C0((_DWORD *)this);
  }
  return result;
}
