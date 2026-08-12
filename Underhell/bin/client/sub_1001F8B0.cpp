int __cdecl sub_1001F8B0(_DWORD *a1, int a2, int a3, int a4, float a5, int a6)
{
  int result; // eax
  int v8; // esi
  int v9; // ecx
  float *v10; // edi
  int v11; // eax
  float v12; // [esp+14h] [ebp-Ch]
  int v13; // [esp+18h] [ebp-8h]
  int v14; // [esp+1Ch] [ebp-4h]
  int v15; // [esp+28h] [ebp+8h]

  v14 = sub_10127960(a4);
  result = a1[1];
  v15 = 0;
  if ( result )
    v15 = *(_DWORD *)(result + 88) + 144 * *(_DWORD *)(*(_DWORD *)(result + 8) + 16 * a4 + 8);
  v8 = 0;
  if ( *(int *)(*a1 + 156) > 0 )
  {
    v9 = a2;
    v13 = a2;
    v10 = (float *)(a3 + 8);
    do
    {
      if ( (a6 & *(_DWORD *)(a1[11] + 4 * v8)) != 0 )
      {
        if ( v15 )
          v11 = *(_DWORD *)(*(_DWORD *)(v15 + 4) + 4 * v8);
        else
          v11 = v8;
        if ( v11 >= 0 && *(float *)(*(_DWORD *)(v14 + 156) + 4 * v11 + v14) > 0.0 )
        {
          v12 = 1.0 - a5;
          sub_101F0EA0(v9, v12, v9);
          v9 = v13;
          *(v10 - 2) = *(v10 - 2) * a5;
          *(v10 - 1) = a5 * *(v10 - 1);
          *v10 = a5 * *v10;
        }
      }
      result = *a1;
      ++v8;
      v9 += 16;
      v10 += 3;
      v13 = v9;
    }
    while ( v8 < *(_DWORD *)(*a1 + 156) );
  }
  return result;
}
