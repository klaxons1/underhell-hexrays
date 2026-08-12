int sub_100D27E0()
{
  void *v0; // esi

  v0 = (void *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 300);
  memset(v0, 0, 0x12Cu);
  if ( v0 )
    return sub_100D24D0((int)v0, (int)"CPDumpPanel");
  else
    return 0;
}
