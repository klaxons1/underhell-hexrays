int __thiscall sub_1039BBE0(_DWORD *this)
{
  void (__noreturn ***v2)(); // eax
  void (__noreturn ***v3)(); // eax

  v2 = sub_1023DBA0();
  ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v2)[10])(v2, this[959]);
  this[959] = 0;
  v3 = sub_1023DBA0();
  ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v3)[10])(v3, this[960]);
  this[960] = 0;
  return sub_1032D020(this);
}
