int __thiscall sub_101334C0(_DWORD **this)
{
  int result; // eax
  _DWORD *v3; // ecx

  if ( this[1] )
  {
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this[1] + 156))(this[1], 0);
    v3 = this[1];
    if ( v3 )
      return (*(int (__thiscall **)(_DWORD *, int))(*v3 + 120))(v3, 1);
  }
  return result;
}
