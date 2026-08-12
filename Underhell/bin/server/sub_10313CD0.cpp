int __thiscall sub_10313CD0(_DWORD *this)
{
  void (__noreturn ***v2)(); // eax

  if ( this[537] )
  {
    v2 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v2)[10])(v2, this[537]);
  }
  ((void (__thiscall *)(int (__stdcall ***)(int, int), _DWORD *))(*off_1061BE1C)[4])(off_1061BE1C, this);
  return sub_100C8890(this);
}
