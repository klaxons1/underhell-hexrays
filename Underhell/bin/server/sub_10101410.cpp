float *__cdecl sub_10101410(int a1, float a2, int a3, int a4, unsigned __int8 *a5, float *a6)
{
  int v6; // ecx
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v15[3]; // [esp+1Ch] [ebp-18h] BYREF
  int v16[3]; // [esp+28h] [ebp-Ch] BYREF

  if ( !a4 )
    return sub_10101270(a1, a2, (float *)(a3 + 32), a3 + 72, (int)a5, a6);
  v6 = *a5;
  v7 = *(_DWORD *)(a4 + 28) + 12 * v6;
  v16[0] = *(_DWORD *)(v7 + a4);
  v8 = *(_DWORD *)(v7 + a4 + 4);
  v16[2] = *(_DWORD *)(v7 + a4 + 8);
  v9 = *(_DWORD *)(a4 + 12) + 12 * v6;
  v10 = *(_DWORD *)(v9 + a4);
  v11 = a4 + v9;
  v12 = *(_DWORD *)(v11 + 4);
  v13 = *(_DWORD *)(v11 + 8);
  v15[0] = v10;
  v15[1] = v12;
  v15[2] = v13;
  v16[1] = v8;
  return sub_10101270(a1, a2, (float *)v15, (int)v16, (int)a5, a6);
}
