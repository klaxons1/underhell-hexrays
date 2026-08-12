void __thiscall sub_1004C500(int this, _CoreCrtNonSecureSearchSortCompareFunction CompareFunction)
{
  signed int v3; // ebx
  int v4; // ebx
  int j; // esi
  int v6; // ecx
  int v7; // edx
  _DWORD *v8; // eax
  int i; // [esp+8h] [ebp-4h]

  v3 = *(_DWORD *)(this + 12);
  if ( v3 > 1 )
  {
    if ( *(_DWORD *)this )
    {
      qsort(*(void **)this, v3, 8u, CompareFunction);
    }
    else
    {
      v4 = v3 - 1;
      for ( i = v4; v4 >= 0; i = v4 )
      {
        for ( j = 1; j <= v4; ++j )
        {
          if ( CompareFunction((const void *)(*(_DWORD *)this + 8 * j - 8), (const void *)(*(_DWORD *)this + 8 * j)) < 0 )
          {
            v6 = *(_DWORD *)(*(_DWORD *)this + 8 * j - 8);
            v7 = *(_DWORD *)(*(_DWORD *)this + 8 * j - 4);
            v8 = (_DWORD *)(*(_DWORD *)this + 8 * j);
            *(v8 - 2) = *v8;
            *(v8 - 1) = v8[1];
            v4 = i;
            *v8 = v6;
            v8[1] = v7;
          }
        }
        --v4;
      }
    }
  }
}
