bool __thiscall sub_1040BBB0(_DWORD *this, int a2)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx
  bool result; // al

  v2 = this[103];
  result = 0;
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (this[103] & 0xFFF) + 1];
    if ( v3[1] == v2 >> 12 )
    {
      v4 = *v3;
      if ( v4 )
      {
        if ( *(char **)(v4 + 92) == "npc_strider" || sub_100D6240((_DWORD *)v4, "npc_strider") )
          return 1;
      }
    }
  }
  return result;
}
