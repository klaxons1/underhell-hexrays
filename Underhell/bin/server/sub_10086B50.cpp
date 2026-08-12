int __stdcall sub_10086B50(int a1)
{
  int result; // eax
  int v2; // ebx
  int v3; // edi
  int i; // eax
  int v5; // ecx
  int j; // eax
  int v7; // ecx
  int v8; // edx
  _DWORD *v9; // esi
  int v10; // ebx
  __int16 *v11; // eax
  int v12; // ecx
  _DWORD *v13; // eax
  int v14; // [esp+Ch] [ebp-Ch]
  int k; // [esp+14h] [ebp-4h]
  int v16; // [esp+20h] [ebp+8h]

  result = a1;
  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v14 = v2;
  if ( v2 )
  {
    for ( i = 0; i < v2; *(_DWORD *)(v5 + 68) = 0 )
      v5 = *(_DWORD *)(v3 + 4 * i++);
    for ( j = 0; j < v2; ++j )
    {
      v7 = *(_DWORD *)(v3 + 4 * j);
      if ( !*(_DWORD *)(v7 + 84) )
        *(_DWORD *)(v7 + 68) = 1;
    }
    result = 0;
    v8 = 4;
    v16 = 4;
    for ( k = 0; result < v2; k = result )
    {
      v9 = *(_DWORD **)(v3 + 4 * result);
      if ( !v9[17] )
      {
        v10 = 0;
        v9[17] = v8;
        if ( (int)v9[21] > 0 )
        {
          do
          {
            v11 = *(__int16 **)(v9[18] + 4 * v10);
            v12 = v11[1];
            if ( v12 == *v9 )
              v12 = *v11;
            v13 = *(_DWORD **)(v3 + 4 * v12);
            if ( !v13[17] )
            {
              sub_10086AF0(v3, v13, v8);
              v8 = v16;
            }
            ++v10;
          }
          while ( v10 < v9[21] );
          result = k;
        }
        v2 = v14;
        v16 = ++v8;
      }
      ++result;
    }
  }
  return result;
}
