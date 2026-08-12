int __thiscall sub_1039E860(_DWORD *this)
{
  void (__noreturn ***v2)(); // eax
  void (__noreturn ***v3)(); // eax
  int result; // eax

  v2 = sub_1023DBA0();
  ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v2)[10])(v2, this[932]);
  this[932] = 0;
  v3 = sub_1023DBA0();
  result = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v3)[10])(v3, this[933]);
  this[933] = 0;
  return result;
}
