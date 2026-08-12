int sub_1012A140()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 256);
  memset(v0, 0, 0x100u);
  if ( v0 )
    return sub_10129EA0((int)v0, (int)"CHudTrain");
  else
    return 0;
}
