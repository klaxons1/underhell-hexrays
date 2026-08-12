int __cdecl sub_102277F0(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned __int8 (__cdecl *a8)(_DWORD *, int *))
{
  int v8; // edi
  int v9; // esi
  bool i; // zf
  _DWORD *v11; // eax
  _DWORD *v12; // ecx
  _DWORD *v13; // eax
  _DWORD *v14; // edi

  v8 = a2;
  v9 = 2 * a2 + 2;
  for ( i = v9 == a3; v9 < a3; v12[3] = v11[3] )
  {
    if ( a8((_DWORD *)(a1 + 16 * v9), (int *)(a1 + 16 * v9 - 16)) )
      --v9;
    v11 = (_DWORD *)(a1 + 16 * v9);
    v12 = (_DWORD *)(a1 + 16 * v8);
    *v12 = *v11;
    v12[1] = v11[1];
    v12[2] = v11[2];
    v8 = v9;
    v9 = 2 * v9 + 2;
    i = v9 == a3;
  }
  if ( i )
  {
    v13 = (_DWORD *)(16 * a3 + a1 - 16);
    v14 = (_DWORD *)(a1 + 16 * v8);
    *v14 = *v13;
    v14[1] = v13[1];
    v14[2] = v13[2];
    v14[3] = v13[3];
    v8 = a3 - 1;
  }
  return sub_102273B0(a1, v8, a2, a4, a5, a6, a7, a8);
}
