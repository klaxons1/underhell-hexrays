int (*__thiscall sub_10038030(_DWORD *this))(void)
{
  int (*result)(void); // eax

  result = (int (*)(void))this[1];
  if ( result )
    return (int (*)(void))result();
  return result;
}
