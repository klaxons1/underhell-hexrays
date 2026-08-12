int __thiscall sub_10430F70(_DWORD *this, int a2)
{
  int result; // eax

  result = this[1];
  this[3] = a2;
  if ( a2 > result )
  {
    sub_1042D560(this, a2 - result);
    result = this[1];
    if ( a2 > result )
      this[3] = result;
  }
  return result;
}
