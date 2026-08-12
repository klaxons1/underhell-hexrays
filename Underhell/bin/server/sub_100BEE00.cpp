int *__stdcall sub_100BEE00(int *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // esi
  _DWORD *v9; // eax
  bool v10; // zf
  char *v11; // esi
  int *result; // eax
  int v13; // edi
  int v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  _BYTE *v18; // edx
  _BYTE v19[48]; // [esp+Ch] [ebp-64h] BYREF
  _BYTE v20[48]; // [esp+3Ch] [ebp-34h] BYREF
  int v21; // [esp+6Ch] [ebp-4h]

  v8 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(a7 + 1100) && sub_100D7240(a7) )
    sub_100BD750((volatile signed __int32 *)a7);
  v9 = *(_DWORD **)(a7 + 1100);
  if ( !v9 || (v10 = *v9 == 0, v21 = *(_DWORD *)(a7 + 1100), v10) )
    v21 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 104))(v8);
  v11 = (char *)(*a1 + *(_DWORD *)(*a1 + 160));
  sub_10425040(a2, a3, v19);
  result = (int *)*a1;
  v13 = 0;
  if ( *(int *)(*a1 + 156) > 0 )
  {
    v14 = a6;
    do
    {
      v15 = sub_10100DC0(v21, &v11[*(_DWORD *)v11]);
      if ( v15 >= 0 && (v16 = sub_10101170(v15)) != 0 )
      {
        sub_10421CC0(v16, v14);
      }
      else
      {
        sub_10425290(a5, a4, v20);
        v17 = *((_DWORD *)v11 + 1);
        if ( v17 == -1 )
          v18 = v19;
        else
          v18 = (_BYTE *)(a6 + 48 * v17);
        sub_10421E30(v18, v20, v14);
      }
      result = a1;
      a4 += 12;
      a5 += 16;
      ++v13;
      v14 += 48;
      v11 += 216;
    }
    while ( v13 < *(_DWORD *)(*a1 + 156) );
  }
  return result;
}
