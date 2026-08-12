int __thiscall sub_103DFBE0(_DWORD *this)
{
  void (__noreturn ***v2)(); // edi
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int result; // eax

  v2 = sub_1023DBA0();
  ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v2)[10])(v2, this[461]);
  v3 = this[459];
  this[461] = 0;
  ((void (__thiscall *)(void (__noreturn ***)(), int))(*v2)[10])(v2, v3);
  v4 = this[460];
  this[459] = 0;
  ((void (__thiscall *)(void (__noreturn ***)(), int))(*v2)[10])(v2, v4);
  v5 = this[463];
  this[460] = 0;
  ((void (__thiscall *)(void (__noreturn ***)(), int))(*v2)[10])(v2, v5);
  v6 = this[462];
  this[463] = 0;
  ((void (__thiscall *)(void (__noreturn ***)(), int))(*v2)[10])(v2, v6);
  v7 = this[464];
  this[462] = 0;
  result = ((int (__thiscall *)(void (__noreturn ***)(), int))(*v2)[10])(v2, v7);
  this[464] = 0;
  return result;
}
