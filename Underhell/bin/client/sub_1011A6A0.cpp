int __stdcall sub_1011A6A0(int a1, int a2)
{
  _DWORD *v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // edi
  int v7; // esi
  int v8; // esi
  _DWORD *v10; // [esp+10h] [ebp-8h]
  int v11; // [esp+14h] [ebp-4h]
  int v12; // [esp+14h] [ebp-4h]
  int v13; // [esp+20h] [ebp+8h]
  int v14; // [esp+20h] [ebp+8h]

  v3 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 148))(a1);
  v10 = v3;
  v13 = 0;
  if ( (int)v3[343] > 0 )
  {
    v11 = 0;
    do
    {
      v4 = v11 + v3[344];
      v5 = sub_1007A6A0(off_103DCD78, *(_DWORD *)(v4 + 12));
      if ( v5 )
        *(_DWORD *)(v4 + 16) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
      else
        *(_DWORD *)(v4 + 16) = -1;
      v11 += 56;
      ++v13;
    }
    while ( v13 < v3[343] );
  }
  v14 = 0;
  if ( (int)v3[343] > 0 )
  {
    v12 = 0;
    do
    {
      v6 = v12 + v3[344];
      if ( *(int *)(v6 + 12) < 0 )
      {
        if ( v3[321] || !*(_DWORD *)(v6 + 32) )
          goto LABEL_16;
        v8 = sub_10034E30(*(const char **)(v6 + 32));
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v8 + 324))(v8, 0, 7);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 4))(a1, *(_DWORD *)(v6 + 20));
        sub_1011A110(v8, a1);
        *(_DWORD *)(v6 + 16) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8);
        sub_100761D0(v8);
        v3 = v10;
      }
      else
      {
        v7 = sub_1007A6A0(off_103DCD78, *(_DWORD *)(v6 + 12));
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 4))(a1, *(_DWORD *)(v6 + 20));
        if ( !v7 )
        {
          v3 = v10;
LABEL_16:
          *(_DWORD *)(v6 + 16) = -1;
          *(_DWORD *)(v6 + 12) = -1;
          goto LABEL_17;
        }
        sub_1011A110(v7, a1);
        sub_100761D0(v7);
        v3 = v10;
      }
LABEL_17:
      v12 += 56;
      ++v14;
    }
    while ( v14 < v3[343] );
  }
  sub_100D3270();
  return sub_100B3A00();
}
