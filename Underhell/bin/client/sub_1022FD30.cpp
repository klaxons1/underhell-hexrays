int __thiscall sub_1022FD30(_DWORD *this)
{
  int v2; // eax

  v2 = this[8];
  if ( v2 > 0 && dword_1047B7F8 )
    dword_1047B7F8("Memory leak: mempool blocks left in memory: %d\n", v2);
  return sub_1022FCD0((int)this);
}
