int __thiscall sub_1008D300(_DWORD *this)
{
  int result; // eax

  result = ++this[25];
  if ( result >= this[21] )
    this[25] = 0;
  return result;
}
