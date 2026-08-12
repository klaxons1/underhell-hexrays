int __thiscall sub_10313D10(_DWORD *this)
{
  void (__noreturn ***v2)(); // eax

  if ( this[537] )
  {
    v2 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v2)[11])(v2, this[537], 140.0, 1.0);
  }
  return sub_100EC3F0(this, 0, *(float *)(dword_106B31C8 + 12), off_1066C8D8);
}
