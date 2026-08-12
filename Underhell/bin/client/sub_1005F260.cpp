void sub_1005F260()
{
  int v0; // eax

  dword_1040D914 = 0;
  if ( dword_1040D910 < 0 )
  {
    dword_1040D918 = dword_1040D908;
  }
  else
  {
    v0 = dword_1040D908;
    if ( dword_1040D908 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_1040D908);
      v0 = 0;
      dword_1040D908 = 0;
    }
    dword_1040D90C = 0;
    dword_1040D918 = v0;
  }
}
