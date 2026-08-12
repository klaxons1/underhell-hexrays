int __thiscall sub_103020B0(char *this)
{
  int v2; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this = &CAntlionRepellant::`vftable';
  v4 = *(_DWORD *)sub_100380E0(this);
  v2 = sub_10319100(&v4);
  if ( v2 != -1 )
  {
    if ( dword_106E2DA0 - v2 - 1 > 0 )
      memcpy(
        (void *)(dword_106E2D94 + 4 * v2),
        (const void *)(dword_106E2D94 + 4 * v2 + 4),
        4 * (dword_106E2DA0 - v2 - 1));
    --dword_106E2DA0;
  }
  return sub_100DF1D0(this);
}
