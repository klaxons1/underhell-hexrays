int __thiscall sub_10312F60(int this)
{
  int result; // eax

  result = sub_100DA1F0((_DWORD *)this) | 8;
  if ( *(_BYTE *)(this + 4262) )
    return result | 8;
  return result;
}
