char __thiscall sub_1011CDC0(char *this, char *a2)
{
  char *v5; // eax
  char v6; // cl
  void *v7; // eax
  int v8; // esi
  int v9; // edi
  _DWORD *v10; // eax
  _DWORD *v11; // ecx
  int v12; // eax
  int v13; // [esp+14h] [ebp+8h]

  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 4))(this);
  v13 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_10413178 + 156))(dword_10413178, a2);
  if ( !v13 )
    return 0;
  v5 = a2;
  do
  {
    v6 = *v5;
    v5[this - a2 + 20] = *v5;
    ++v5;
  }
  while ( v6 );
  v7 = sub_10034900(0xBC8u);
  if ( v7 )
    v8 = sub_100408E0((int)v7);
  else
    v8 = 0;
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v8 + 324))(v8, 0, 7);
  v9 = dword_1047CA8C;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
  sub_10039390((_WORD *)v8, v13);
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 120))(v8);
  sub_10037CA0(v8, &flt_1045924C);
  sub_10037BA0(v8, &flt_10459240);
  sub_1000DF30((_DWORD *)v8, 40);
  *(_WORD *)(v8 + 86) |= 2u;
  sub_10036200((unsigned __int16 *)v8);
  v10 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8);
  sub_1009C130(off_103DCD78, *v10);
  sub_1008E480((unsigned __int16 *)(v8 + 352));
  if ( !*(_DWORD *)(v8 + 1940) && (*(int (__thiscall **)(int))(*(_DWORD *)(v8 + 4) + 36))(v8 + 4) )
    sub_10026520(v8);
  v11 = *(_DWORD **)(v8 + 1940);
  if ( v11 && *v11 )
    v12 = sub_10126D90(v11);
  else
    v12 = 0;
  *((_DWORD *)this + 70) = v12;
  *((_DWORD *)this + 4) = v8;
  (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 104))(v9);
  return 1;
}
