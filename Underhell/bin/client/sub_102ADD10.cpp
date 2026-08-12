int sub_102ADD10(int a1, char *Format, ...)
{
  int i; // ebx
  unsigned __int16 v3; // ax
  const char *v5; // [esp-4h] [ebp-1010h]
  const char *v6; // [esp-4h] [ebp-1010h]
  char v7[2048]; // [esp+Ch] [ebp-1000h] BYREF
  char Buffer[2048]; // [esp+80Ch] [ebp-800h] BYREF
  va_list va; // [esp+1018h] [ebp+Ch] BYREF

  va_start(va, Format);
  sub_102283C0(v7, 0x800u, Format, va);
  sub_10228370(Buffer, 0x800u, "%s(%d) : %s\n", *(const char **)(a1 + 128), *(_DWORD *)(a1 + 132), v7);
  Warning(Buffer);
  for ( i = 0; i < *(_DWORD *)(a1 + 140); ++i )
  {
    v3 = *(_WORD *)(a1 + 2 * i);
    if ( v3 != 0xFFFF )
    {
      if ( i >= *(_DWORD *)(a1 + 136) )
      {
        v6 = sub_10230460(dword_10482A28, v3);
        Warning("(*%s*), ", v6);
      }
      else
      {
        v5 = sub_10230460(dword_10482A28, v3);
        Warning("%s, ", v5);
      }
    }
  }
  return Warning("\n");
}
