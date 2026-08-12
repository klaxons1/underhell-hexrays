int __thiscall sub_10212770(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int result; // eax

  this[17] = (*(int (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)off_103EE614 + 60) + 36))(
               *((_DWORD *)off_103EE614 + 60),
               this + 20);
  v4 = this[18];
  if ( v4 > 41 )
    v4 = 41;
  result = v4 - 1;
  this[19] = result;
  return result;
}
