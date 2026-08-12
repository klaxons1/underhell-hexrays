void sub_10109720(int a1, char *Format, ...)
{
  int v2; // eax
  const char *v3; // edi
  char Buffer[4096]; // [esp+8h] [ebp-1000h] BYREF
  va_list va; // [esp+1018h] [ebp+10h] BYREF

  va_start(va, Format);
  ++*(_DWORD *)(a1 + 40);
  if ( *(_BYTE *)(a1 + 36) && (!*(_BYTE *)(a1 + 22) || !*(_DWORD *)(a1 + 48)) )
  {
    v2 = *(_DWORD *)(a1 + 24);
    v3 = "empty";
    if ( v2 )
    {
      v3 = *(const char **)(v2 + 4);
      if ( !v3 )
        v3 = "NULL";
    }
    sub_102283C0(Buffer, 0x1000u, Format, va);
    if ( *(_DWORD *)(a1 + 40) == 1 )
      Msg("\n");
    Msg("%03i %s::%s - %s", *(_DWORD *)(a1 + 40), *(const char **)(a1 + 28), v3, Buffer);
    *(_BYTE *)(a1 + 36) = 0;
  }
}
