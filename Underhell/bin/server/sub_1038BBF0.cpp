void __thiscall sub_1038BBF0(int this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // ecx

  v3 = *(_DWORD *)(this + 4420);
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 4420) & 0xFFF) + 1], v4[1] != v3 >> 12) )
    v5 = 0;
  else
    v5 = *v4;
  if ( a2 == v5 )
  {
    sub_100AC410(this + 5160, "METROPOLICE_MANHACK_KILLED", 0, 1);
    DevMsg("My manhack died!\n");
    *(_DWORD *)(this + 4420) = -1;
  }
  else if ( *(char **)(a2 + 92) != "npc_manhack" && !sub_100D6240((_DWORD *)a2, "npc_manhack") )
  {
    if ( !*(_DWORD *)(this + 4336) )
      *(_DWORD *)(this + 4336) = 1;
    v6 = sub_100B16F0(*(int **)(this + 2796), 1);
    v7 = this + 5160;
    if ( v6 >= 2 )
      sub_100AC410(v7, "METROPOLICE_MAN_DOWN", 1, 2);
    else
      sub_100AC410(v7, "METROPOLICE_LAST_OF_SQUAD", 1, 1);
  }
}
