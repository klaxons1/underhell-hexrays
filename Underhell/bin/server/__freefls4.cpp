void __stdcall _freefls(int a1)
{
  void *v1; // edi
  volatile LONG *v2; // edi
  int savedregs; // [esp+28h] [ebp+0h]

  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 36) )
      sub_10184660(*(_DWORD *)(a1 + 36));
    if ( *(_DWORD *)(a1 + 44) )
      sub_10184660(*(_DWORD *)(a1 + 44));
    if ( *(_DWORD *)(a1 + 52) )
      sub_10184660(*(_DWORD *)(a1 + 52));
    if ( *(_DWORD *)(a1 + 60) )
      sub_10184660(*(_DWORD *)(a1 + 60));
    if ( *(_DWORD *)(a1 + 64) )
      sub_10184660(*(_DWORD *)(a1 + 64));
    if ( *(_DWORD *)(a1 + 68) )
      sub_10184660(*(_DWORD *)(a1 + 68));
    if ( *(_DWORD *)(a1 + 72) )
      sub_10184660(*(_DWORD *)(a1 + 72));
    if ( *(_UNKNOWN **)(a1 + 92) != &unk_105D0D90 )
      sub_10184660(*(_DWORD *)(a1 + 92));
    _lock(13);
    v1 = *(void **)(a1 + 104);
    if ( v1 && !InterlockedDecrement(*(volatile LONG **)(a1 + 104)) && v1 != &unk_1068EA68 )
      sub_10184660((int)v1);
    _unlock(13);
    _lock(12);
    v2 = *(volatile LONG **)(a1 + 108);
    if ( v2 )
    {
      __removelocaleref(*(volatile LONG **)(a1 + 108));
      if ( v2 != off_1068F1D0 && v2 != (volatile LONG *)&unk_1068F0F8 && !*v2 )
        __freetlocinfo(v2);
    }
    savedregs = 272867890;
    _unlock(12);
    sub_10184660(a1);
  }
}
