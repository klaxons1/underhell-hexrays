void __thiscall sub_1011ED10(char *this)
{
  char *v1; // esi
  bool v2; // sf

  v1 = this - 4;
  sub_1042F730(this + 68);
  sub_1011E840((_DWORD *)v1 + 9);
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
  sub_100BC330((_DWORD *)v1 + 32);
}
