int __thiscall sub_10212710(_DWORD *this, int a2, int a3)
{
  int result; // eax

  this[50] = (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)off_103EE614 + 60) + 36))(
               *((_DWORD *)off_103EE614 + 60),
               (int)this + 69);
  result = this[16];
  if ( result > 63 )
  {
    result = 63;
  }
  else if ( result < 0 )
  {
    result = 0;
    this[16] = 0;
    return result;
  }
  this[16] = result;
  return result;
}
