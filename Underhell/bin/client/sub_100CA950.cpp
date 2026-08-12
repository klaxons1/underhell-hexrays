_BYTE *sub_100CA950()
{
  _BYTE *v0; // esi
  _BYTE *v1; // eax

  v0 = (_BYTE *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 324);
  memset(v0, 0, 0x144u);
  if ( v0 && (v1 = sub_100C99D0(v0, (int)"CHudHintDisplay")) != 0 )
    return v1 + 204;
  else
    return 0;
}
