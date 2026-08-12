void __thiscall sub_10270CE0(_DWORD *this, _DWORD *a2)
{
  char *v3; // eax
  double v4; // st7
  float v5; // [esp+0h] [ebp-8h]

  v3 = (char *)this[59];
  if ( v3 )
  {
    v4 = (double)sub_1022A800(a2, v3, -1);
    if ( v4 >= 0.0 )
    {
      v5 = v4 * 0.0099999998;
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 768))(this, LODWORD(v5));
    }
  }
}
