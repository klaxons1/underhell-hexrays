void __thiscall sub_1019E300(int this, _CoreCrtNonSecureSearchSortCompareFunction CompareFunction)
{
  signed int v3; // ebx
  int i; // ebx
  int j; // esi
  int v6; // ecx
  _DWORD *v7; // eax

  v3 = *(_DWORD *)(this + 12);
  if ( v3 > 1 )
  {
    if ( *(_DWORD *)this )
    {
      qsort(*(void **)this, v3, 4u, CompareFunction);
    }
    else
    {
      for ( i = v3 - 1; i >= 0; --i )
      {
        for ( j = 1; j <= i; ++j )
        {
          if ( CompareFunction((const void *)(*(_DWORD *)this + 4 * j - 4), (const void *)(*(_DWORD *)this + 4 * j)) < 0 )
          {
            v6 = *(_DWORD *)(*(_DWORD *)this + 4 * j - 4);
            v7 = (_DWORD *)(*(_DWORD *)this + 4 * j);
            *(v7 - 1) = *v7;
            *v7 = v6;
          }
        }
      }
    }
  }
}
