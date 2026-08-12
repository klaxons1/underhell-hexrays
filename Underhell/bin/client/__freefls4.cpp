void __stdcall _freefls(int a1)
{
  void *v1; // edi
  int *v2; // edi
  int savedregs; // [esp+28h] [ebp+0h]

  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 36) )
      sub_10034930(*(_DWORD *)(a1 + 36));
    if ( *(_DWORD *)(a1 + 44) )
      sub_10034930(*(_DWORD *)(a1 + 44));
    if ( *(_DWORD *)(a1 + 52) )
      sub_10034930(*(_DWORD *)(a1 + 52));
    if ( *(_DWORD *)(a1 + 60) )
      sub_10034930(*(_DWORD *)(a1 + 60));
    if ( *(_DWORD *)(a1 + 64) )
      sub_10034930(*(_DWORD *)(a1 + 64));
    if ( *(_DWORD *)(a1 + 68) )
      sub_10034930(*(_DWORD *)(a1 + 68));
    if ( *(_DWORD *)(a1 + 72) )
      sub_10034930(*(_DWORD *)(a1 + 72));
    if ( *(_UNKNOWN **)(a1 + 92) != &unk_103B3958 )
      sub_10034930(*(_DWORD *)(a1 + 92));
    _lock(13);
    v1 = *(void **)(a1 + 104);
    if ( v1 && !InterlockedDecrement(*(volatile LONG **)(a1 + 104)) && v1 != &unk_103FDB80 )
      sub_10034930((int)v1);
    _unlock(13);
    _lock(12);
    v2 = *(int **)(a1 + 108);
    if ( v2 )
    {
      __removelocaleref(*(volatile LONG **)(a1 + 108));
      if ( v2 != off_103FE2E8 && v2 != (int *)&unk_103FE210 && !*v2 )
        __freetlocinfo(v2);
    }
    savedregs = 271122489;
    _unlock(12);
    sub_10034930(a1);
  }
}
