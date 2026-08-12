char __thiscall sub_10059060(_BYTE *this, int a2)
{
  char result; // al

  result = sub_1003DBB0((int)this, a2);
  if ( !a2 )
  {
    if ( !this[1188] )
      return result;
    return (*(int (__stdcall **)(_DWORD))(*((_DWORD *)this - 2) + 408))(*((float *)off_103DC81C + 3));
  }
  result = this[1188];
  if ( this[1189] != result )
  {
    if ( result )
      return (*(int (__stdcall **)(_DWORD))(*((_DWORD *)this - 2) + 408))(*((float *)off_103DC81C + 3));
    return sub_100EA4D0(0, 0, 0);
  }
  return result;
}
