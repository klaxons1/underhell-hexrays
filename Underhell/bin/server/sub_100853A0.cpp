int __cdecl sub_100853A0(int a1, int a2, int a3)
{
  double v3; // st7
  int v4; // ebx
  int v5; // edx
  int v6; // ecx
  int v7; // ebx
  int v8; // esi
  float *v9; // edi
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v14; // [esp+Ch] [ebp-4h]

  v3 = 3.4028235e38;
  v4 = a3;
  v5 = 0;
  v14 = -1;
  v6 = 1;
  if ( a3 >= 4 )
  {
    v7 = *(_DWORD *)(a1 + 8);
    v8 = 2;
    v9 = (float *)(a2 + 8);
    do
    {
      if ( (v6 & *(_DWORD *)(v7 + 4 * (v5 >> 5))) != 0 && v3 > *(v9 - 2) )
      {
        v14 = v5;
        v3 = *(v9 - 2);
      }
      v10 = __ROL4__(v6, 1);
      if ( (v10 & *(_DWORD *)(v7 + 4 * ((v8 - 1) >> 5))) != 0 && v3 > *(v9 - 1) )
      {
        v3 = *(v9 - 1);
        v14 = v8 - 1;
      }
      v11 = __ROL4__(v10, 1);
      if ( (v11 & *(_DWORD *)(v7 + 4 * (v8 >> 5))) != 0 && v3 > *v9 )
      {
        v14 = v8;
        v3 = *v9;
      }
      v12 = __ROL4__(v11, 1);
      if ( (v12 & *(_DWORD *)(v7 + 4 * ((v8 + 1) >> 5))) != 0 && v3 > v9[1] )
      {
        v3 = v9[1];
        v14 = v8 + 1;
      }
      v5 += 4;
      v6 = __ROL4__(v12, 1);
      v9 += 4;
      v8 += 4;
    }
    while ( v5 < a3 - 3 );
    v4 = a3;
  }
  for ( ; v5 < v4; v6 = __ROL4__(v6, 1) )
  {
    if ( (v6 & *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * (v5 >> 5))) != 0 && v3 > *(float *)(a2 + 4 * v5) )
    {
      v14 = v5;
      v3 = *(float *)(a2 + 4 * v5);
    }
    ++v5;
  }
  return v14;
}
