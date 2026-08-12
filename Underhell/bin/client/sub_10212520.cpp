int __thiscall sub_10212520(_DWORD *this, int a2, int a3)
{
  int result; // eax

  this[43] = (*(int (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)off_103EE614 + 60) + 36))(
               *((_DWORD *)off_103EE614 + 60),
               this + 11);
  result = this[51];
  if ( result > 63 )
  {
    result = 63;
  }
  else if ( result < 0 )
  {
    result = 0;
    this[51] = 0;
    return result;
  }
  this[51] = result;
  return result;
}
