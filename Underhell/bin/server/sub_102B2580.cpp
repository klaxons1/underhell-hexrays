int __thiscall sub_102B2580(_DWORD *this)
{
  double v2; // st7
  void (__noreturn ***v3)(); // edi
  int v4; // eax
  int result; // eax
  float v6; // [esp+24h] [ebp-Ch]

  v2 = 0.0;
  v3 = sub_1023DBA0();
  v4 = this[945];
  if ( v4 )
  {
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD, _DWORD))(*v3)[2])(v3, v4, 0.0, 100.0, 0.0);
    (*(void (__thiscall **)(_DWORD *))(*this + 2340))(this);
    v2 = 0.0;
  }
  result = this[946];
  if ( result )
  {
    v6 = v2;
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD, _DWORD))(*v3)[2])(
      v3,
      result,
      1.0,
      100.0,
      LODWORD(v6));
    result = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v3)[12])(v3, this[946], 0.0, 0.0);
  }
  this[954] = 2;
  return result;
}
