int sub_10132A00(int a1, float a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, char *Format, ...)
{
  int v10; // eax
  char Buffer[1024]; // [esp+28h] [ebp-400h] BYREF
  int ArgList; // [esp+458h] [ebp+30h] BYREF
  va_list ArgLista; // [esp+458h] [ebp+30h]
  va_list va1; // [esp+45Ch] [ebp+34h] BYREF

  va_start(va1, Format);
  va_start(ArgLista, Format);
  ArgList = va_arg(va1, _DWORD);
  sub_102283C0(Buffer, 0x400u, Format, ArgLista);
  v10 = *(_DWORD *)(a1 + 4);
  Buffer[1023] = 0;
  if ( v10 )
    return (*(int (__cdecl **)(int, _DWORD, int, int, int, int, int, int, int, char *, int))(*(_DWORD *)v10 + 768))(
             v10,
             LODWORD(a2),
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             Buffer,
             ArgList);
  else
    return a4;
}
