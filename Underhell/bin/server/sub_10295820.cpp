int __thiscall sub_10295820(int *this)
{
  int v2; // edi
  int v4; // esi
  int v5; // esi
  int v6[19]; // [esp+10h] [ebp-4Ch] BYREF

  if ( *(int *)(dword_106B31C8 + 20) > 1 )
    return 0;
  v2 = sub_10261B20();
  if ( !v2 )
    return 0;
  sub_10072560(v6);
  v4 = 16;
  if ( *(_DWORD *)(dword_106DB0DC + 48) == 3 && (*(_DWORD *)(this[1] + 236) & 0x1000) != 0 )
    v4 = 144;
  sub_10072690(v6, 12);
  sub_1042C170(v4 | 0x44);
  if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
    sub_100DAE60(v2);
  sub_10072770(v6, (float *)(v2 + 580), 792.0);
  v5 = sub_10072EE0(this[1], v6);
  sub_100725D0(v6);
  return v5;
}
