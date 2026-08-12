int __thiscall sub_102B3100(_DWORD *this)
{
  void (__noreturn ***v2)(); // edi
  int result; // eax

  v2 = sub_1023DBA0();
  ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v2)[10])(v2, this[945]);
  ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v2)[10])(v2, this[946]);
  result = 0;
  this[945] = 0;
  this[946] = 0;
  return result;
}
