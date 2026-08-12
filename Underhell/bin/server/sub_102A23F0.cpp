int __thiscall sub_102A23F0(int this, int a2)
{
  int result; // eax

  result = sub_1004B560((_DWORD **)this);
  if ( *(_DWORD *)(this + 16) == 2 && result == 1 )
  {
    if ( *(_BYTE *)(this + 66) )
      return dword_106DB62C;
  }
  return result;
}
