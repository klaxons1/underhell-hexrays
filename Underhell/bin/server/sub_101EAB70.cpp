char __userpurge sub_101EAB70@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4)
{
  int **v5; // eax
  int v6; // eax
  int v7; // eax
  _DWORD *v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // ecx
  int v17; // ebx
  int *v18; // ecx
  int v19; // eax
  int v20; // ecx

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1568))(a1) )
  {
    v5 = (int **)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1568))(a1);
    sub_1016BC00(v5);
  }
  (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_106B3CDC + 300))(dword_106B3CDC, a1, a4, a3, a2);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)off_10627F88 + 76))(off_10627F88, a1, a4);
  sub_101E3110((void *)a1, 0, 0, 0);
  sub_101E99A0((_DWORD *)a1);
  v6 = sub_1023CA80(*(_DWORD *)(a1 + 24));
  v7 = sub_1023C740(v6);
  if ( v7 )
    sub_1023C7A0(v7);
  v8 = (_DWORD *)(a1 + 220);
  if ( *(int *)(a1 + 220) < -99 && *v8 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 464))(a1, a1 + 220);
    *v8 = 0;
  }
  if ( sub_100CF460((_DWORD *)a1) )
  {
    v9 = sub_100CF460((_DWORD *)a1);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 996))(v9, 0);
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 1300))(a1, 4);
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
  sub_100DC4E0((float *)a1, (float *)(v10 + 96));
  if ( *(_BYTE *)(a1 + 224) != 1 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 472))(a1, a1 + 224);
    *(_BYTE *)(a1 + 224) = 1;
  }
  if ( *(_BYTE *)(a1 + 3244) != 1 )
  {
    (**(void (__thiscall ***)(int, int))(a1 + 3240))(a1 + 3240, a1 + 3244);
    *(_BYTE *)(a1 + 3244) = 1;
  }
  sub_101129A0((unsigned __int16 *)(a1 + 320), *(_WORD *)(a1 + 356) | 4);
  v12 = *(_DWORD *)(a1 + 424);
  if ( v12 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 108))(v12);
  sub_100E0970(a1, v11, 5, 0);
  sub_101C73D0((unsigned int *)a1, 0);
  if ( *(_BYTE *)(a1 + 2329)
    && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 132))(dword_106B3CDC) )
  {
    *(_DWORD *)(a1 + 3672) = 0;
    *(_DWORD *)(a1 + 3676) = 0;
    *(_DWORD *)(a1 + 3680) = 0;
    *(_DWORD *)(a1 + 3684) = 0;
  }
  sub_100F8040(a1, a1, 0, 0.0, 0);
  v13 = *(_DWORD *)(a1 + 4028);
  if ( v13 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 4028) & 0xFFF) + 2] != v13 >> 12 )
    v14 = 0;
  else
    v14 = off_1061BE18[4 * (*(_DWORD *)(a1 + 4028) & 0xFFF) + 1];
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 860))(v14, 32);
  v15 = *(_DWORD *)(a1 + 4032);
  if ( v15 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 4032) & 0xFFF) + 2] != v15 >> 12 )
    v16 = 0;
  else
    v16 = off_1061BE18[4 * (*(_DWORD *)(a1 + 4032) & 0xFFF) + 1];
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v16 + 860))(v16, 32);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1264))(a1) )
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1272))(a1);
  v17 = dword_106B31C8;
  if ( *(_DWORD *)(a1 + 3472) != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v18 = *(int **)(a1 + 24);
      if ( v18 )
        sub_100194B0(v18, 3472);
    }
    *(float *)(a1 + 3472) = *(float *)(v17 + 12);
  }
  if ( *(_DWORD *)(a1 + 4404) )
  {
    v19 = sub_100D8840((_DWORD *)a1) % 2;
    --*(_BYTE *)(v19 + v20 + 489);
    *(_DWORD *)(a1 + 4404) = 0;
  }
  return sub_100CCC00((float *)a1, a4);
}
