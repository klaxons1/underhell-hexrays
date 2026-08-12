int __thiscall sub_103CDCE0(int this, int a2)
{
  int result; // eax

  result = sub_1032EC20((_DWORD *)this, a2);
  if ( result == 11 )
    return 6;
  if ( *(_BYTE *)(this + 3776) )
  {
    if ( result == dword_106EC79C )
      return 1;
  }
  return result;
}
