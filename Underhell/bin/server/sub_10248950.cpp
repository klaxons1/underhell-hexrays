void __thiscall sub_10248950(_DWORD *this)
{
  void (__noreturn ***v2)(); // esi
  int v3; // eax

  if ( this[202] )
  {
    v2 = sub_1023DBA0();
    v3 = this[203];
    if ( v3 )
      ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))(*v2)[13])(v2, v3, 0.25, 0);
    if ( this[204] )
    {
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v2)[4])(v2, this[204]);
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v2)[11])(v2, this[204], 70.0, 3.0);
    }
    this[202] = 0;
  }
}
