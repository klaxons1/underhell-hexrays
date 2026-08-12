int __thiscall sub_1021F7F0(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int result; // eax

  this[51] = (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)off_103EE614 + 60) + 36))(
               *((_DWORD *)off_103EE614 + 60),
               (int)this + 73);
  v4 = this[16];
  if ( v4 > 63 )
  {
    v4 = 63;
  }
  else if ( v4 < 0 )
  {
    v4 = 0;
  }
  this[16] = v4;
  result = this[17];
  if ( result > 63 )
  {
    result = 63;
  }
  else if ( result < 0 )
  {
    result = 0;
    this[17] = 0;
    return result;
  }
  this[17] = result;
  return result;
}
