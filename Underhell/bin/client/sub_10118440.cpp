void __thiscall sub_10118440(_DWORD *this, int a2, int a3)
{
  int v3; // esi
  signed int v4; // edi
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < a3; ++i )
  {
    v3 = this[6];
    v4 = strlen(*(const char **)(a2 + 4 * i)) + 1;
    if ( v3 )
    {
      if ( v4 <= *(_DWORD *)(v3 + 12) - *(_DWORD *)(v3 + 8) )
      {
        memcpy_0(*(void **)(v3 + 4), *(const void **)(a2 + 4 * i), v4);
        *(_DWORD *)(v3 + 4) += v4;
        *(_DWORD *)(v3 + 8) += v4;
      }
      else
      {
        *(_DWORD *)(v3 + 8) = *(_DWORD *)(v3 + 12);
        Warning("Save/Restore overflow!\n");
      }
    }
  }
}
