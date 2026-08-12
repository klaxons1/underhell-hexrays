int __cdecl sub_1007CEE0(int a1, int a2, __int16 a3, int a4, __int16 a5, unsigned __int8 a6)
{
  int v6; // esi
  int result; // eax

  v6 = *(_DWORD *)(a1 + 4 * a4 + 688136);
  if ( v6 >= 4096 )
    return (*(int (**)(int, int, const char *, ...))(*(_DWORD *)dword_1041315C + 116))(
             dword_1041315C,
             10,
             "Warning: overflowed CClientRenderablesList group %d",
             a4);
  result = a1 + 12 * (v6 + (a4 << 12)) + 8;
  *(_DWORD *)result = a2;
  *(_WORD *)(result + 4) = a3;
  *(_WORD *)(result + 6) = a6;
  *(_WORD *)(result + 8) = a5;
  ++*(_DWORD *)(a1 + 4 * a4 + 688136);
  return result;
}
