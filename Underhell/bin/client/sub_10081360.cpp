void *__thiscall sub_10081360(_DWORD *this, int a2)
{
  void *result; // eax

  result = off_103DC81C;
  if ( *((_DWORD *)off_103DC81C + 5) != 1 )
  {
    if ( this[4] )
      return (void *)sub_100BA960(a2);
  }
  return result;
}
