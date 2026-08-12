void __stdcall sub_10349010(int a1, float a2, float a3)
{
  void (__noreturn ***v3)(); // esi
  long double v4; // st7
  float v5; // [esp+8h] [ebp-Ch]

  if ( a1 )
  {
    v3 = sub_1023DBA0();
    v4 = a2 - ((double (__thiscall *)(void (__noreturn ***)(), int))(*v3)[15])(v3, a1);
    if ( 0.0 != v4 )
    {
      v5 = fabs(v4) * a3;
      ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))(*v3)[12])(v3, a1, LODWORD(a2), LODWORD(v5));
    }
  }
}
