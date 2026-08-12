int sub_101328D0(_DWORD *a1, float a2, int a3, int a4, int a5, char a6, char a7, char a8, char a9, char *Format, ...)
{
  int v10; // esi
  int v11; // ecx
  int v12; // edx
  char *v13; // eax
  double v14; // st7
  int v16; // eax
  char Source[1024]; // [esp+Ch] [ebp-400h] BYREF
  int ArgList; // [esp+43Ch] [ebp+30h] BYREF
  va_list ArgLista; // [esp+43Ch] [ebp+30h]
  va_list va1; // [esp+440h] [ebp+34h] BYREF

  va_start(va1, Format);
  va_start(ArgLista, Format);
  ArgList = va_arg(va1, _DWORD);
  sub_102283C0(Source, 0x400u, Format, ArgLista);
  v10 = a1[8245];
  Source[1023] = 0;
  if ( !v10 )
    return a4;
  v11 = a1[8244];
  a1[8245] = *(_DWORD *)v10;
  *(_DWORD *)v10 = v11;
  a1[8244] = v10;
  *(_DWORD *)(v10 + 4) = 0;
  *(_DWORD *)(v10 + 8) = 0;
  *(_DWORD *)(v10 + 16) = 0;
  *(_DWORD *)(v10 + 20) = 0;
  *(_DWORD *)(v10 + 4) = a4;
  *(_DWORD *)(v10 + 8) = a5;
  *(_BYTE *)(v10 + 13) = a7;
  v12 = ArgList;
  *(_BYTE *)(v10 + 12) = a6;
  *(_BYTE *)(v10 + 14) = a8;
  *(_DWORD *)(v10 + 28) = v12;
  *(_BYTE *)(v10 + 15) = a9;
  v13 = (char *)sub_100DDA40(strlen(Source) + 1);
  *(_DWORD *)(v10 + 16) = v13;
  sub_102282F0(v13, Source, 4u);
  if ( 0.0 == a2 )
    v14 = 0.0;
  else
    v14 = a2 + *((float *)off_103DC81C + 3);
  *(float *)(v10 + 24) = v14;
  (*(void (__thiscall **)(_DWORD *, int))(*a1 + 124))(a1, 1);
  v16 = a3;
  if ( !a3 )
    v16 = a1[51];
  *(_DWORD *)(v10 + 20) = v16;
  return a4
       + (*(int (__cdecl **)(int, _DWORD, char *))(*(_DWORD *)dword_1047CA64 + 548))(
           dword_1047CA64,
           *(_DWORD *)(v10 + 20),
           Source);
}
