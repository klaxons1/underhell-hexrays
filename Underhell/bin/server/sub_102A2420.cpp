int __thiscall sub_102A2420(int this)
{
  int result; // eax

  if ( *(_DWORD *)(this + 16) )
    return sub_1004B620((_DWORD **)this);
  result = 1;
  if ( *(_DWORD *)(this + 104) != 1 )
    return sub_1004B620((_DWORD **)this);
  return result;
}
