void __thiscall sub_102B2630(_DWORD *this, int a2)
{
  void (__noreturn ***v3)(); // eax
  float v4; // [esp+0h] [ebp-Ch]

  if ( this[945] )
  {
    v3 = sub_1023DBA0();
    v4 = (float)a2;
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v3)[11])(v3, this[945], LODWORD(v4), 0.1);
    (*(void (__thiscall **)(_DWORD *))(*this + 2340))(this);
  }
}
