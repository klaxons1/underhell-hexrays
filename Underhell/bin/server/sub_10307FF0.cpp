int __thiscall sub_10307FF0(_DWORD *this)
{
  void (__noreturn ***v2)(); // eax
  void (__noreturn ***v3)(); // eax
  void (__noreturn ***v4)(); // eax
  void (__noreturn ***v5)(); // eax
  int result; // eax

  v2 = sub_1023DBA0();
  ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v2)[10])(v2, this[946]);
  v3 = sub_1023DBA0();
  ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v3)[10])(v3, this[948]);
  v4 = sub_1023DBA0();
  ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v4)[10])(v4, this[949]);
  v5 = sub_1023DBA0();
  ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v5)[10])(v5, this[950]);
  result = 0;
  this[946] = 0;
  this[948] = 0;
  this[949] = 0;
  this[950] = 0;
  return result;
}
