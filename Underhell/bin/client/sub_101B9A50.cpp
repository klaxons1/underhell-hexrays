int sub_101B9A50()
{
  int v0; // esi

  v0 = sub_100DDA40(3592);
  if ( !v0 )
    return 0;
  *(_BYTE *)(v0 + 3588) = 0;
  *(_DWORD *)v0 = 0;
  memset((void *)(v0 + 4), 0, 0x600u);
  memset((void *)(v0 + 1540), 0, 0x800u);
  *(_BYTE *)(v0 + 3588) = 1;
  return v0;
}
