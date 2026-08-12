int __thiscall sub_1040F220(_DWORD *this, int *a2)
{
  unsigned int v2; // eax
  int v4; // ecx

  v2 = a2[10];
  if ( v2 == -1 || off_1061BE18[4 * (a2[10] & 0xFFF) + 2] != v2 >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (a2[10] & 0xFFF) + 1];
  if ( *(char **)(v4 + 92) == "grenade_homer" || sub_100D6240((_DWORD *)v4, "grenade_homer") )
    return 0;
  else
    return sub_100C7DC0(this, (int)a2, a2);
}
