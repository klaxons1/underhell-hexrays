void __thiscall sub_10047050(char *this, int a2)
{
  int v2; // edi
  char *v3; // esi
  int v4; // esi
  _DWORD *v5; // ebx
  int v6; // eax
  int v7; // eax
  unsigned int v8; // eax
  int v9; // esi
  unsigned int v10; // eax
  int v11; // ecx
  _DWORD *v13; // [esp+Ch] [ebp-4h]

  v2 = (int)this;
  v3 = this - 8;
  if ( (char *)dword_10407394 == this - 8 )
    sub_10034EA0(this - 8, 1);
  sub_1002B830(v2, a2);
  if ( (char *)dword_10407394 == v3 )
  {
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413168 + 140))(dword_10413168, v2 + 3456, v2 + 3488);
    v4 = 0;
    v13 = (_DWORD *)(v2 - 8);
    v5 = (_DWORD *)(v2 + 4344);
    do
    {
      if ( sub_1000A5F0(v13, v4) > *v5 )
      {
        v6 = sub_10150040(v4);
        if ( !v6 || (*(_BYTE *)(v6 + 476) & 0x40) == 0 )
        {
          if ( sub_100B4090("CHudHistoryResource") )
          {
            v7 = sub_1000A5F0(v13, v4);
            sub_100B1C00(1, v4, abs32(v7 - *v5));
          }
          v2 = (int)this;
        }
      }
      ++v4;
      ++v5;
    }
    while ( v4 < 32 );
    sub_1006B5E0(v2 + 3812);
    v8 = *(_DWORD *)(v2 + 3780);
    if ( v8 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v2 + 3780) & 0xFFF) + 2) != v8 >> 12 )
      v9 = 0;
    else
      v9 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v2 + 3780) & 0xFFF) + 1);
    v10 = *(_DWORD *)(v2 + 3416);
    if ( v10 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v2 + 3416) & 0xFFF) + 2) != v10 >> 12 )
      v11 = 0;
    else
      v11 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v2 + 3416) & 0xFFF) + 1);
    if ( v11 != v9 )
      sub_10046DC0((int)v13, a2 == 0);
  }
}
