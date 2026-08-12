void __thiscall sub_103499B0(_DWORD *this, float a2)
{
  int v3; // edi
  void (__noreturn ***v4)(); // esi
  long double v5; // st7
  float v6; // [esp+Ch] [ebp-10h]
  float v7; // [esp+24h] [ebp+8h]
  float v8; // [esp+24h] [ebp+8h]

  v3 = this[1039];
  v7 = sub_10134630(a2, 100.0, 750.0, 1.0, 0.0);
  v8 = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*this + 2296))(this) * v7;
  if ( v3 )
  {
    v4 = sub_1023DBA0();
    v5 = v8 - ((double (__thiscall *)(void (__noreturn ***)(), int))(*v4)[15])(v4, v3);
    if ( 0.0 != v5 )
    {
      v6 = fabs(v5) * 0.5;
      ((void (__thiscall *)(void (__noreturn ***)(), int, float, _DWORD))(*v4)[12])(
        v4,
        v3,
        COERCE_FLOAT(LODWORD(v8)),
        LODWORD(v6));
    }
  }
}
