char __thiscall sub_10328FE0(_DWORD *this, int a2)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // esi

  v2 = this[605];
  if ( v2 == -1 )
    return 0;
  v3 = &off_1061BE18[4 * (this[605] & 0xFFF) + 1];
  if ( v3[1] != v2 >> 12 )
    return 0;
  v4 = *v3;
  if ( !*v3
    || *(char **)(v4 + 92) != "info_hint_air"
    && !sub_100D6240((_DWORD *)v4, "info_hint_air")
    && *(char **)(v4 + 92) != "info_target"
    && !sub_100D6240((_DWORD *)v4, "info_target") )
  {
    return 0;
  }
  if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
    sub_100DAE60(v4);
  sub_10422220(v4 + 704, a2);
  return 1;
}
