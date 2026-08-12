int __thiscall sub_101E2830(_DWORD *this, int a2, char a3)
{
  int result; // eax

  if ( a3 )
  {
    result = a2;
    this[854] |= a2;
  }
  else
  {
    this[854] &= ~a2;
  }
  return result;
}
