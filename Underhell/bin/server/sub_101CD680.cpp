volatile __int32 *__thiscall sub_101CD680(int this, int a2, int a3)
{
  int *v4; // ebx
  void (*v6)(void); // eax
  int v7; // esi
  _DWORD *v8; // eax
  bool v9; // zf
  int v10; // esi
  _DWORD *v11; // edi
  int v12; // esi
  int v13; // ebx
  int v14; // edi
  _BYTE v15[128]; // [esp+8h] [ebp-CCh] BYREF
  _BYTE v16[48]; // [esp+88h] [ebp-4Ch] BYREF
  _DWORD v17[4]; // [esp+B8h] [ebp-1Ch] BYREF
  int v18; // [esp+C8h] [ebp-Ch]
  _DWORD *v19; // [esp+CCh] [ebp-8h]
  _DWORD *v20; // [esp+D0h] [ebp-4h]

  v4 = (int *)(this + 1132);
  if ( !*(_DWORD *)(this + 1132) )
    return sub_100C3C50(this, a2, a3);
  sub_100C1B60();
  v6 = *(void (**)(void))(*(_DWORD *)dword_10700AC8 + 100);
  v18 = dword_10700AC8;
  v6();
  v7 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v8 = *(_DWORD **)(this + 1100);
  if ( !v8 || (v9 = *v8 == 0, v20 = *(_DWORD **)(this + 1100), v9) )
    v20 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 104))(v7);
  v10 = 0;
  memset(v15, 0, *(_DWORD *)(*v20 + 156));
  v17[0] = 0;
  v17[1] = a2;
  if ( *v4 > 0 )
  {
    v19 = (_DWORD *)(this + 1720);
    v11 = (_DWORD *)(this + 1156);
    do
    {
      if ( *v11 && (unsigned __int8)sub_10218080(v4, v17, v10) )
        v15[*v19] = 1;
      ++v19;
      ++v10;
      v11 += 6;
    }
    while ( v10 < *v4 );
  }
  v12 = 0;
  if ( *(int *)(*v20 + 156) > 0 )
  {
    v13 = a2;
    v14 = *v20 + *(_DWORD *)(*v20 + 160) + 60;
    do
    {
      if ( !v15[v12] && (a3 & *(_DWORD *)(v20[11] + 4 * v12)) != 0 )
      {
        sub_104256B0(v14, v14 - 28, v16);
        sub_10421E30(a2 + 48 * *(_DWORD *)(v14 - 56), v16, v13);
      }
      ++v12;
      v13 += 48;
      v14 += 216;
    }
    while ( v12 < *(_DWORD *)(*v20 + 156) );
  }
  return (volatile __int32 *)(*(int (__thiscall **)(int))(*(_DWORD *)v18 + 104))(v18);
}
