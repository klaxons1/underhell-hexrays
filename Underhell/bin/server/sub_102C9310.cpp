void __thiscall sub_102C9310(int this)
{
  void (__noreturn ***v2)(); // esi
  float v3; // [esp+8h] [ebp-Ch]

  if ( !*(_BYTE *)(this + 1404) )
  {
    v2 = sub_1023DBA0();
    v3 = (1.0 - ((double (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v2)[15])(v2, *(_DWORD *)(this + 1396))) * 0.1;
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v2)[12])(
      v2,
      *(_DWORD *)(this + 1396),
      1.0,
      LODWORD(v3));
    *(_BYTE *)(this + 1404) = 1;
  }
}
