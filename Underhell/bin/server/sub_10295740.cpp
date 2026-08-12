int __thiscall sub_10295740(int this)
{
  int v2; // edi
  int v4; // esi
  int v5; // esi
  int v6; // esi
  int v7[19]; // [esp+10h] [ebp-4Ch] BYREF

  if ( *(int *)(dword_106B31C8 + 20) > 1 )
    return 0;
  v2 = sub_10261B20();
  if ( !v2 )
    return 0;
  sub_10072560(v7);
  v4 = 16;
  if ( *(_BYTE *)(this + 27) )
    v4 = 17;
  if ( *(_DWORD *)(dword_106DB0DC + 48) == 3 && (*(_DWORD *)(*(_DWORD *)(this + 4) + 236) & 0x1000) != 0 )
    v4 |= 0x80u;
  if ( *(_BYTE *)(this + 25) )
    v5 = v4 | 2;
  else
    v5 = v4 | 4;
  sub_10072690(v7, 12);
  sub_1042C170(v5 | 0x2000);
  if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
    sub_100DAE60(v2);
  sub_10072770(v7, (float *)(v2 + 580), 720.0);
  v6 = sub_10072EE0(*(_DWORD *)(this + 4), v7);
  sub_100725D0(v7);
  return v6;
}
