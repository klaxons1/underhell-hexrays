_BYTE *sub_101B9600()
{
  _BYTE *v0; // esi
  _BYTE *v1; // eax

  v0 = (_BYTE *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 292);
  memset(v0, 0, 0x124u);
  if ( v0 && (v1 = sub_101B9420(v0, (int)"CHudZoom")) != 0 )
    return v1 + 204;
  else
    return 0;
}
