void __cdecl sub_102CD740()
{
  _DWORD *v0; // esi
  _DWORD *v1; // [esp-4h] [ebp-8h]

  sub_10192CC0(&dword_103EADC0);
  v0 = (_DWORD *)dword_103EADC0;
  if ( dword_103EADC0 )
  {
    do
    {
      v1 = v0;
      v0 = (_DWORD *)*v0;
      (*(void (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v1);
    }
    while ( v0 );
    dword_103EADC0 = 0;
    dword_103EADC4 = 0;
  }
}
