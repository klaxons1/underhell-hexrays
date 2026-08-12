void sub_101097C0(int a1, int a2, char *Format, ...)
{
  int v3; // eax
  __int16 v4; // di
  const char *v5; // ebx
  char Buffer[4096]; // [esp+4h] [ebp-1000h] BYREF
  va_list va; // [esp+1018h] [ebp+14h] BYREF

  va_start(va, Format);
  if ( *(_BYTE *)(a1 + 37) && *(_DWORD *)(a1 + 48) )
  {
    v3 = *(_DWORD *)(a1 + 24);
    v4 = 0;
    v5 = "empty";
    if ( v3 )
    {
      v4 = *(_WORD *)(v3 + 18);
      v5 = *(const char **)(v3 + 4);
      if ( !v5 )
        v5 = "NULL";
    }
    sub_102283C0(Buffer, 0x1000u, Format, va);
    (*(void (__cdecl **)(_DWORD, const char *, char *, int, bool, bool, bool, char *))(a1 + 48))(
      *(_DWORD *)(a1 + 28),
      v5,
      off_103E2C38[**(_DWORD **)(a1 + 24)],
      HIBYTE(v4) & 1,
      (v4 & 0x400) != 0,
      a2 != 1,
      a2 == 2,
      Buffer);
    *(_BYTE *)(a1 + 37) = 0;
  }
}
