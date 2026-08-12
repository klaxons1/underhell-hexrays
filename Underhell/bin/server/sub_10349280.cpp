void __thiscall sub_10349280(int this)
{
  bool v2; // zf
  void (__noreturn ***v3)(); // eax

  v2 = *(_DWORD *)(this + 4152) == 0;
  *(_BYTE *)(this + 3977) = 0;
  if ( !v2 )
  {
    v3 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v3)[12])(
      v3,
      *(_DWORD *)(this + 4152),
      0.0,
      0.1);
  }
}
