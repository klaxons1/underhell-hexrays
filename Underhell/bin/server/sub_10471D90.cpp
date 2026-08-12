void __cdecl sub_10471D90()
{
  _DWORD *v0; // esi
  _DWORD *v1; // [esp-4h] [ebp-8h]

  sub_10170AB0(&dword_10629750);
  v0 = (_DWORD *)dword_10629750;
  if ( dword_10629750 )
  {
    do
    {
      v1 = v0;
      v0 = (_DWORD *)*v0;
      (*(void (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v1);
    }
    while ( v0 );
    dword_10629750 = 0;
    dword_10629754 = 0;
  }
}
