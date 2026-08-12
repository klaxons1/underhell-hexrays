void *__thiscall sub_10220180(int this, _DWORD *a2, const char *a3, int *a4, int a5)
{
  const char *v6; // ebx
  signed int v7; // edi
  void *result; // eax
  int v9; // esi

  v6 = (const char *)sub_1021CF10(a2, *a4);
  if ( !v6 )
  {
    Warning("Invalid function pointer in entity!\n");
    v6 = "BADFUNCTIONPOINTER";
  }
  v7 = strlen(v6) + 1;
  result = (void *)sub_1021ED50((_DWORD **)this, a3, v7);
  v9 = *(_DWORD *)(this + 24);
  if ( v9 )
  {
    if ( v7 <= *(_DWORD *)(v9 + 12) - *(_DWORD *)(v9 + 8) )
    {
      result = memcpy_0(*(void **)(v9 + 4), v6, v7);
      *(_DWORD *)(v9 + 4) += v7;
      *(_DWORD *)(v9 + 8) += v7;
    }
    else
    {
      *(_DWORD *)(v9 + 8) = *(_DWORD *)(v9 + 12);
      return (void *)Warning("Save/Restore overflow!\n");
    }
  }
  return result;
}
