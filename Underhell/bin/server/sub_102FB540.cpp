char *__thiscall sub_102FB540(_DWORD *this)
{
  int v2; // eax
  int i; // edi
  int v4; // eax

  v2 = sub_101679A0((int)"antlion_allied");
  if ( sub_10167A00(v2) == 1 )
  {
    for ( i = 1; i <= *(_DWORD *)(dword_106B31C8 + 20); ++i )
    {
      v4 = sub_1025FB50(i);
      if ( v4 )
        (*(void (__thiscall **)(_DWORD *, int, int, int))(*this + 1120))(this, v4, 3, 99);
    }
  }
  return sub_100422B0(this);
}
