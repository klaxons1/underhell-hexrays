void __thiscall sub_103662B0(_DWORD *this, int a2)
{
  void (__noreturn ***v3)(); // eax
  void (__noreturn ***v4)(); // eax

  if ( this[1004] )
  {
    v3 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, void *, int))(*v3)[17])(
      v3,
      this[1004],
      0,
      &unk_1067336C,
      2);
  }
  if ( this[943] )
  {
    v4 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, void *, int))(*v4)[17])(
      v4,
      this[943],
      0,
      &unk_1067338C,
      2);
  }
}
