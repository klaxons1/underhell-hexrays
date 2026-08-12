void __thiscall sub_10365F90(_DWORD *this)
{
  void (__noreturn ***v2)(); // eax
  void (__noreturn ***v3)(); // eax
  void (__noreturn ***v4)(); // eax
  void (__noreturn ***v5)(); // eax

  if ( this[943] )
  {
    v2 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v2)[11])(v2, this[943], 35.0, 1.0);
    v3 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v3)[12])(v3, this[943], 0.75, 1.0);
  }
  if ( this[1004] )
  {
    v4 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v4)[11])(v4, this[1004], 100.0, 1.0);
    v5 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v5)[12])(v5, this[1004], 0.0, 1.0);
  }
}
