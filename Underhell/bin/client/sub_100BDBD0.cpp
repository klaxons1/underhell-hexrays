int sub_100BDBD0()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 412);
  memset(v0, 0, 0x19Cu);
  if ( v0 )
    return sub_100BD9C0((int)v0, (int)"CHudUHHermitCards");
  else
    return 0;
}
