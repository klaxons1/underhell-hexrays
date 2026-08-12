int __cdecl sub_10095E80(int a1, int a2, unsigned __int8 (__cdecl *a3)(_DWORD *, _DWORD *))
{
  int v4; // ecx
  int result; // eax
  int v6; // esi
  int i; // edx
  int v8; // ebx
  int v9; // eax
  int v10; // esi
  int v11; // edx
  int v12; // ebx
  bool v13; // zf
  _DWORD v14[2]; // [esp+4h] [ebp-10h] BYREF
  int v15; // [esp+Ch] [ebp-8h]
  int v16; // [esp+10h] [ebp-4h]
  int v17; // [esp+1Ch] [ebp+8h]
  int v18; // [esp+20h] [ebp+Ch]

  v4 = (a2 - a1) >> 3;
  result = v4 / 2;
  v18 = v4;
  if ( v4 / 2 > 0 )
  {
    v6 = 2 * result + 2;
    for ( i = a1 + 8 * result; ; i = v16 )
    {
      v8 = *(_DWORD *)(i - 8);
      v9 = result - 1;
      v10 = v6 - 2;
      v16 = i - 8;
      v11 = *(_DWORD *)(i - 8 + 4);
      v14[0] = v8;
      v17 = v9;
      v15 = v10;
      v14[1] = v11;
      v12 = v9;
      v13 = v10 == v4;
      if ( v10 < v4 )
      {
        do
        {
          if ( a3((_DWORD *)(a1 + 8 * v10), (_DWORD *)(a1 + 8 * v10 - 8)) )
            --v10;
          *(_DWORD *)(a1 + 8 * v12) = *(_DWORD *)(a1 + 8 * v10);
          *(_DWORD *)(a1 + 8 * v12 + 4) = *(_DWORD *)(a1 + 8 * v10 + 4);
          v12 = v10;
          v10 = 2 * v10 + 2;
        }
        while ( v10 < v18 );
        v4 = v18;
        v9 = v17;
        v13 = v10 == v18;
      }
      if ( v13 )
      {
        *(_DWORD *)(a1 + 8 * v12) = *(_DWORD *)(a1 + 8 * v4 - 8);
        *(_DWORD *)(a1 + 8 * v12 + 4) = *(_DWORD *)(a1 + 8 * v4 - 4);
        v12 = v4 - 1;
      }
      result = sub_10094BD0(a1, v12, v9, v14, a3);
      if ( v17 <= 0 )
        break;
      result = v17;
      v4 = v18;
      v6 = v15;
    }
  }
  return result;
}
