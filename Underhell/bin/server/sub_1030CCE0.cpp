void __userpurge sub_1030CCE0(int a1@<ecx>, int a2@<ebx>, int a3)
{
  _DWORD *i; // esi
  unsigned int v5; // eax
  int *v6; // ecx
  float v7; // [esp+4h] [ebp-18h]

  sub_10035690(a1, a2, a1, a3);
  if ( *(_DWORD *)(a1 + 3636) )
  {
    for ( i = sub_1012BC90(&dword_1069E3E0, 0, "npc_antlion"); i; i = sub_1012BC90(
                                                                        &dword_1069E3E0,
                                                                        (int)i,
                                                                        "npc_antlion") )
    {
      v5 = i[103];
      if ( (v5 == -1 || off_1061BE18[4 * (i[103] & 0xFFF) + 2] != v5 >> 12 || !off_1061BE18[4 * (i[103] & 0xFFF) + 1])
        && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*i + 264))(i) )
      {
        v7 = RandomFloat(0.1, 2.0);
        sub_1010C7F0((float *)dword_10614CA8, (int)i, "BurrowAway", v7, a1, a1, 0);
      }
    }
  }
  if ( *(_DWORD *)(a1 + 3812) )
  {
    sub_1025FAC0(*(_DWORD *)(a1 + 3812));
    *(_DWORD *)(a1 + 3812) = 0;
  }
  if ( *(_DWORD *)(a1 + 3816) )
  {
    sub_1025FAC0(*(_DWORD *)(a1 + 3816));
    *(_DWORD *)(a1 + 3816) = 0;
  }
  if ( *(_BYTE *)(a1 + 3820) )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
      *(_BYTE *)(a1 + 3820) = 0;
    }
    else
    {
      v6 = *(int **)(a1 + 24);
      if ( v6 )
        sub_100194B0(v6, 3820);
      *(_BYTE *)(a1 + 3820) = 0;
    }
  }
}
