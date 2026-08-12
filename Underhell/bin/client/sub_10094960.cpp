void __thiscall sub_10094960(char *this)
{
  char *v1; // esi
  bool v2; // sf

  v1 = this - 4;
  sub_10230D40(this + 68);
  sub_10094490((_DWORD *)v1 + 9);
  v2 = *((int *)v1 + 6) < 0;
  *((_DWORD *)v1 + 7) = 0;
  if ( !v2 )
  {
    if ( *((_DWORD *)v1 + 4) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *((_DWORD *)v1 + 4));
      *((_DWORD *)v1 + 4) = 0;
    }
    *((_DWORD *)v1 + 5) = 0;
  }
  *((_DWORD *)v1 + 8) = *((_DWORD *)v1 + 4);
  sub_10009F80((_DWORD *)v1 + 32);
}
