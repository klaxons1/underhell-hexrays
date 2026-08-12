void __thiscall sub_1021E960(_DWORD *this, int a2, int a3)
{
  const char *v3; // ebx
  signed int v4; // edi
  int v5; // esi
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < a3; ++i )
  {
    v3 = *(const char **)(a2 + 4 * i);
    if ( !v3 )
      v3 = String;
    v4 = strlen(v3) + 1;
    v5 = this[6];
    if ( v5 )
    {
      if ( v4 <= *(_DWORD *)(v5 + 12) - *(_DWORD *)(v5 + 8) )
      {
        memcpy_0(*(void **)(v5 + 4), v3, v4);
        *(_DWORD *)(v5 + 4) += v4;
        *(_DWORD *)(v5 + 8) += v4;
      }
      else
      {
        *(_DWORD *)(v5 + 8) = *(_DWORD *)(v5 + 12);
        Warning("Save/Restore overflow!\n");
      }
    }
  }
}
