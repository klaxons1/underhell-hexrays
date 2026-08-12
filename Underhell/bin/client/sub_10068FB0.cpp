int __thiscall sub_10068FB0(_DWORD *this, int a2)
{
  int result; // eax

  sub_1003CD40(this, a2);
  result = 0;
  if ( !a2 )
    return sub_10068980(this - 2);
  if ( a2 == 1 )
  {
    this[377] = 0;
    this[378] = 0;
  }
  return result;
}
