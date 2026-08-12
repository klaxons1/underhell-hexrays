int __thiscall sub_103CE0B0(int this)
{
  void (__noreturn ***v2)(); // eax
  void (__noreturn ***v3)(); // eax

  if ( *(_DWORD *)(this + 3772) )
  {
    v2 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v2)[12])(
      v2,
      *(_DWORD *)(this + 3772),
      0.0,
      2.0);
    v3 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v3)[11])(
      v3,
      *(_DWORD *)(this + 3772),
      100.0,
      2.0);
    *(float *)(this + 3800) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                dword_106B31E4,
                                2.0,
                                4.0)
                            + *(float *)(dword_106B31C8 + 12);
  }
  return sub_100EA9A0((int *)this, 0x8000000);
}
