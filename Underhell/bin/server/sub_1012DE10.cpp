int sub_1012DE10()
{
  int v0; // eax
  void *v1; // eax

  sub_1012D950(&dword_1069E3E0, (int)&off_1061DE5C);
  sub_1012D950(&dword_1069E3E0, (int)&off_1061DE74);
  v0 = dword_1061DE78;
  dword_1061DE84 = 0;
  if ( dword_1061DE80 >= 0 )
  {
    if ( dword_1061DE78 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_1061DE78);
      v0 = 0;
      dword_1061DE78 = 0;
    }
    dword_1061DE7C = 0;
  }
  dword_1061DE88 = v0;
  sub_1012D950(&dword_1069E3E0, (int)&off_1061BE24);
  v1 = Src;
  dword_1061BE34 = 0;
  if ( dword_1061BE30 >= 0 )
  {
    if ( Src )
    {
      (*(void (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, Src);
      v1 = 0;
      Src = 0;
    }
    dword_1061BE2C = 0;
  }
  dword_1061BE38 = (int)v1;
  sub_1012D950(&dword_1069E3E0, (int)&off_1061BE40);
  return sub_1039B3A0(&off_106775D8);
}
