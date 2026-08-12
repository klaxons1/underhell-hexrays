int __thiscall sub_10328710(_DWORD *this)
{
  void (__noreturn ***v2)(); // eax
  int result; // eax

  v2 = sub_1023DBA0();
  result = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v2)[10])(v2, this[959]);
  this[959] = 0;
  return result;
}
