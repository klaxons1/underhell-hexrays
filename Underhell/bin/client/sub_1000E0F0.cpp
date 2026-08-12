int __thiscall sub_1000E0F0(_DWORD *this)
{
  int result; // eax

  result = this[46];
  if ( result )
  {
    result = sub_10101E50(result, this);
    this[46] = 0;
  }
  return result;
}
