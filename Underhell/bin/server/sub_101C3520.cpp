_DWORD *__thiscall sub_101C3520(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // edi
  char v9; // al
  int v10; // ebx
  _DWORD *i; // esi
  _DWORD *v12; // ebx

  v3 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  if ( v3 == -1 )
    return 0;
  v4 = &dword_1069E3E4[4 * (v3 & 0xFFF)];
  if ( v4[1] != v3 >> 12 )
    return 0;
  v5 = *v4;
  if ( !v5 )
    return 0;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 20))(v5);
  v7 = (_DWORD *)v6;
  if ( !v6 )
    return 0;
  if ( *(_DWORD *)(v6 + 576) == dword_106BA510 )
    return 0;
  if ( !*(_BYTE *)(v6 + 361) )
    return 0;
  if ( (*(_BYTE *)(v6 + 356) & 4) != 0 )
    return 0;
  v9 = *(_BYTE *)(v6 + 306);
  if ( v9 == 7 || !v9 || v9 == 6 || v9 == 8 )
    return 0;
  v10 = 0;
  if ( (int)this[17] <= 0 )
    return 0;
  for ( i = this + 9;
        !(*(unsigned __int8 (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B3CDC + 112))(
           dword_106B3CDC,
           v7[105],
           *i);
        ++i )
  {
    if ( ++v10 >= this[17] )
      return 0;
  }
  v12 = sub_100E99F0(v7);
  if ( v12 != (_DWORD *)this[2] && (sub_101C3430(this, (int)v7) || sub_101C3480(this, v7)) )
    return v12;
  else
    return 0;
}
