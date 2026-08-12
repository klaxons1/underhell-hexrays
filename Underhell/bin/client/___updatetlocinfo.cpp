volatile LONG *__updatetlocinfo()
{
  int v0; // esi
  volatile LONG *v1; // esi
  volatile LONG *v3; // [esp+10h] [ebp-1Ch]

  v0 = _getptd();
  if ( (dword_103FE0A0 & *(_DWORD *)(v0 + 112)) != 0 && *(_DWORD *)(v0 + 108) )
  {
    v1 = *(volatile LONG **)(_getptd() + 108);
  }
  else
  {
    _lock(12);
    v3 = _updatetlocinfoEx_nolock((volatile LONG **)(v0 + 108), off_103FE2E8);
    _unlock(12);
    v1 = v3;
  }
  if ( !v1 )
    _amsg_exit(32);
  return v1;
}
