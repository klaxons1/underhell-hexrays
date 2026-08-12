char __thiscall sub_10028530(_DWORD *this, int a2, void *a3)
{
  if ( a2 < 1 || a2 > this[479] || !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*(this - 1) + 736))(this - 1) )
    return 0;
  qmemcpy(a3, (const void *)(this[476] + 76 * a2 - 76), 0x30u);
  return 1;
}
