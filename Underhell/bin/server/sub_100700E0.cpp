int __thiscall sub_100700E0(_DWORD *this)
{
  int result; // eax

  result = this[209];
  if ( result == -1 )
  {
    this[214] = -1;
  }
  else
  {
    result = sub_10085FA0(result);
    this[214] = result;
  }
  return result;
}
