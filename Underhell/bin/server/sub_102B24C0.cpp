void __thiscall sub_102B24C0(_DWORD *this)
{
  void (__noreturn ***v2)(); // edi
  long double v3; // st7
  void (__noreturn **v4)(); // ebx
  float v5; // [esp+8h] [ebp-14h]
  float v6; // [esp+8h] [ebp-14h]
  float v7; // [esp+18h] [ebp-4h]

  if ( this[945] )
  {
    v2 = sub_1023DBA0();
    v7 = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*this + 2296))(this);
    v3 = v7 - ((double (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v2)[15])(v2, this[945]);
    if ( 0.0 != v3 )
    {
      v4 = *v2;
      v5 = fabs(v3) * 3.0;
      v6 = ((double (__thiscall *)(_DWORD *, _DWORD))*(_DWORD *)(*this + 2296))(this, LODWORD(v5));
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD))v4[12])(v2, this[945], LODWORD(v6));
    }
  }
}
