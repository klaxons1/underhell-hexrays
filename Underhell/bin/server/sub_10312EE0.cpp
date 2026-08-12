int __thiscall sub_10312EE0(_DWORD *this)
{
  int result; // eax
  void (__noreturn ***v3)(); // eax

  result = sub_102B3100(this);
  if ( this[1070] )
  {
    v3 = sub_1023DBA0();
    result = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v3)[10])(v3, this[1070]);
    this[1070] = 0;
  }
  return result;
}
