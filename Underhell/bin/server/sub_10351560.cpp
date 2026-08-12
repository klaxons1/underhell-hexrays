int __thiscall sub_10351560(_DWORD *this)
{
  void (__noreturn ***v2)(); // edi

  v2 = sub_1023DBA0();
  if ( this[1026] )
  {
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v2)[10])(v2, this[1026]);
    this[1026] = 0;
  }
  if ( this[945] )
  {
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v2)[10])(v2, this[945]);
    this[945] = 0;
  }
  if ( this[1024] )
  {
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v2)[10])(v2, this[1024]);
    this[1024] = 0;
  }
  if ( this[1025] )
  {
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v2)[10])(v2, this[1025]);
    this[1025] = 0;
  }
  return sub_102B3100(this);
}
