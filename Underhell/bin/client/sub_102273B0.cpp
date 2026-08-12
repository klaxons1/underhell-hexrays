int __cdecl sub_102273B0(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned __int8 (__cdecl *a8)(_DWORD *, int *))
{
  int v8; // ebx
  int v9; // edi
  _DWORD *v10; // esi
  _DWORD *v11; // eax
  bool v12; // cc
  int result; // eax
  int v14; // ecx
  _DWORD *v15; // ebx
  int v16; // edx

  v8 = a2;
  v9 = (a2 - 1) / 2;
  if ( a3 < a2 )
  {
    do
    {
      v10 = (_DWORD *)(16 * v9 + a1);
      if ( !a8(v10, &a4) )
        break;
      v11 = (_DWORD *)(a1 + 16 * v8);
      *v11 = *v10;
      v11[1] = v10[1];
      v11[2] = v10[2];
      v11[3] = v10[3];
      v8 = v9;
      v12 = a3 < v9;
      v9 = (v9 - 1) / 2;
    }
    while ( v12 );
  }
  result = a5;
  v14 = a6;
  v15 = (_DWORD *)(a1 + 16 * v8);
  *v15 = a4;
  v16 = a7;
  v15[1] = result;
  v15[2] = v14;
  v15[3] = v16;
  return result;
}
