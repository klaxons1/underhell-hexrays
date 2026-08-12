bool __thiscall sub_10109400(_DWORD *this, float a2, _DWORD *a3, int a4, int a5)
{
  _DWORD *v5; // esi
  int v6; // edi
  unsigned int v7; // eax
  int v9; // eax
  int v10; // edi
  int v11; // ebx
  int v12; // esi
  _BYTE *v13; // eax
  int v14; // esi
  bool v15; // cc
  int v17; // [esp+1Ch] [ebp-14h]
  int v18; // [esp+20h] [ebp-10h]
  float v19; // [esp+24h] [ebp-Ch]
  _DWORD *v20; // [esp+24h] [ebp-Ch]
  int v21; // [esp+28h] [ebp-8h]
  int v23; // [esp+38h] [ebp+8h]
  int v24; // [esp+40h] [ebp+10h]

  v5 = this;
  v21 = dword_1047CA8C;
  (*(void (**)(void))(*(_DWORD *)dword_1047CA8C + 100))();
  *((_BYTE *)v5 + 8) = 1;
  v6 = sub_100F7AF0(a3);
  while ( v6 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v6 + 8) + 36))(v6 + 8) <= 0 )
      break;
    sub_10035F90(v6, 0);
    v7 = *(_DWORD *)(v6 + 324);
    if ( v7 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v6 + 324) & 0xFFF) + 2) != v7 >> 12 )
      v6 = 0;
    else
      v6 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v6 + 324) & 0xFFF) + 1);
  }
  v9 = sub_101086F0(v5, a2, a4, a5);
  v10 = v9 + a4;
  v24 = v9;
  if ( v10 <= a5 )
  {
    v23 = v10;
    v17 = -1 - a4;
    do
    {
      if ( v24 >= 90 )
        break;
      v11 = (*(int (__thiscall **)(int *, int))(*off_103ED0D8 + 56))(off_103ED0D8, v10);
      if ( !v11 )
        break;
      *((_BYTE *)v5 + 9) = *(_BYTE *)(v11 + 60) == 0;
      v19 = (double)(int)a3[1064] * *((float *)off_103DC81C + 7);
      sub_10109270(v5, v10, v19, v11, (int)a3);
      *((float *)off_103DC81C + 3) = v19;
      *((float *)off_103DC81C + 4) = *((float *)off_103DC81C + 7);
      v12 = 0;
      v18 = ((int (__thiscall *)(int (__stdcall ***)(int)))(*off_103D89CC)[1])(off_103D89CC);
      if ( v18 > 0 )
      {
        do
        {
          v13 = (_BYTE *)((int (__thiscall *)(int (__stdcall ***)(int), int))**off_103D89CC)(off_103D89CC, v12);
          v20 = v13;
          if ( v13 && (unsigned __int8)sub_100F7090(v13) )
            sub_100F8700(v20);
          ++v12;
        }
        while ( v12 < v18 );
      }
      v14 = v23;
      sub_10108EB0(v23 + v17);
      this[4] = v24;
      if ( v10 == a5 )
        a3[1065] = a3[1064];
      ++v24;
      ++v23;
      v10 = v14 + 1;
      v15 = v14 + 1 <= a5;
      v5 = this;
      *(_BYTE *)(v11 + 60) = 1;
    }
    while ( v15 );
  }
  *((_BYTE *)v5 + 8) = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v21 + 104))(v21);
  return v24 <= 90;
}
