void __thiscall sub_103B5370(int this, int *a2)
{
  char **v3; // ecx
  char *v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int *v8; // [esp+14h] [ebp+8h]

  v3 = (char **)(a2 + 2);
  if ( a2[6] == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
      v4 = (char *)String;
  }
  else
  {
    v4 = (char *)sub_1010D460((int)v3);
  }
  v8 = sub_1012BF20(&dword_1069E3E0, 0, v4, 0, *a2, a2[1], 0);
  if ( this )
    v5 = this + 3620;
  else
    v5 = 0;
  v6 = *(_DWORD *)(this + 3640);
  if ( *(_DWORD *)(v6 + 28) == -1 || off_1061BE18[4 * (*(_DWORD *)(v6 + 28) & 0xFFF) + 2] != *(_DWORD *)(v6 + 28) >> 12 )
    v7 = 0;
  else
    v7 = off_1061BE18[4 * (*(_DWORD *)(v6 + 28) & 0xFFF) + 1];
  sub_103B1710(v6, v5, v7, 0.0);
  sub_103B4C90(*(_BYTE **)(this + 3640), this + 3620, v8, *(float *)(this + 3664));
  *(float *)(this + 3664) = 0.0;
}
