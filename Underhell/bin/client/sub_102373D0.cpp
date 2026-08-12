int __thiscall sub_102373D0(_DWORD *this, int a2)
{
  int result; // eax

  if ( a2 <= 2 )
  {
    result = a2 < 0 ? 0 : a2;
    this[42] = result;
  }
  else
  {
    result = 2;
    this[42] = 2;
  }
  return result;
}
