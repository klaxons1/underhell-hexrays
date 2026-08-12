int __thiscall sub_10132520(_DWORD **this)
{
  int result; // eax
  _DWORD *v3; // ecx
  _DWORD *v4; // ecx

  if ( this[1] )
  {
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this[1] + 156))(this[1], 0);
    v3 = this[1];
    if ( v3 )
      result = (*(int (__thiscall **)(_DWORD *, int))(*v3 + 120))(v3, 1);
  }
  if ( this[2] )
  {
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this[2] + 156))(this[2], 0);
    v4 = this[2];
    if ( v4 )
      return (*(int (__thiscall **)(_DWORD *, int))(*v4 + 120))(v4, 1);
  }
  return result;
}
