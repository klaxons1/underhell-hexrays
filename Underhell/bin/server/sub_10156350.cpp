char sub_10156350()
{
  int v0; // eax

  if ( byte_106B3251 )
  {
    DevMsg("BeginRestoreEntities without previous EndRestoreEntities.\n");
    sub_1012CE60();
  }
  v0 = dword_106B3488;
  dword_106B3494 = 0;
  if ( dword_106B3490 >= 0 )
  {
    if ( dword_106B3488 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_106B3488);
      v0 = 0;
      dword_106B3488 = 0;
    }
    dword_106B348C = 0;
  }
  dword_106B3498 = v0;
  byte_106B3251 = 1;
  return sub_100E8660(1);
}
