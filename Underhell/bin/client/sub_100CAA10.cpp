_BYTE *sub_100CAA10()
{
  _BYTE *v0; // esi
  _BYTE *v1; // eax

  v0 = (_BYTE *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 452);
  memset(v0, 0, 0x1C4u);
  if ( v0 && (v1 = sub_100CA090(v0, (int)"CHudHintKeyDisplay")) != 0 )
    return v1 + 204;
  else
    return 0;
}
