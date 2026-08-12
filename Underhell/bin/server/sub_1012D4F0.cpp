int sub_1012D4F0()
{
  int v0; // eax
  void *v1; // eax
  int v2; // eax
  int result; // eax
  int i; // esi
  int (__stdcall ***v5)(int); // [esp+8h] [ebp-4h] BYREF

  v5 = &off_1061DE74;
  sub_1023E0F0(&v5);
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
  v5 = &off_1061BE24;
  sub_1023E0F0(&v5);
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
  v2 = dword_1069E3CC;
  dword_1069E3D8 = 0;
  if ( dword_1069E3D4 >= 0 )
  {
    if ( dword_1069E3CC )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_1069E3CC);
      v2 = 0;
      dword_1069E3CC = 0;
    }
    dword_1069E3D0 = 0;
  }
  dword_1069E3DC = v2;
  v5 = &off_1061BE40;
  sub_1023E0F0(&v5);
  sub_1012D260(&off_1061BE40);
  result = sub_1039B460();
  for ( i = dword_1069E3B4; i; i = *(_DWORD *)(i + 4) )
    result = (**(int (__thiscall ***)(int))i)(i);
  return result;
}
