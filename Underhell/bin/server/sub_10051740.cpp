int __stdcall sub_10051740(_DWORD *a1)
{
  int v2; // edi
  int result; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // ebx
  int v7; // eax
  int v8; // [esp+8h] [ebp-Ch]
  int v9; // [esp+10h] [ebp-4h]
  int v10; // [esp+1Ch] [ebp+8h]

  v2 = *(_DWORD *)(*a1 + 8);
  v8 = *a1;
  result = -1;
  v4 = 0;
  v9 = -1;
  v10 = -1;
  v5 = 1;
  if ( v2 > 0 )
  {
    v6 = 0;
    do
    {
      if ( (v5 & *(_DWORD *)(a1[14] + 4 * (v4 >> 5))) == 0 )
      {
        v7 = *(_DWORD *)(v8 + 40);
        if ( *(_DWORD *)(v6 + v7) > v10 )
        {
          v10 = *(_DWORD *)(v6 + v7);
          v9 = v4;
        }
      }
      ++v4;
      v6 += 36;
      v5 = __ROL4__(v5, 1);
    }
    while ( v4 < v2 );
    return v9;
  }
  return result;
}
