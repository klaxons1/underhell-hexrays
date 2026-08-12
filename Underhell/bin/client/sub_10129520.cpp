int __thiscall sub_10129520(int this, int a2)
{
  const void *v2; // edx

  if ( *(_DWORD *)(this + 1184) == -1
    || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1184) & 0xFFF) + 2) != *(_DWORD *)(this + 1184) >> 12 )
  {
    v2 = 0;
  }
  else
  {
    v2 = (const void *)*((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1184) & 0xFFF) + 1);
  }
  return Msg("m_bSendHandle: %d, m_Handle.Get: 0x%p\n", *(unsigned __int8 *)(this + 1188), v2);
}
