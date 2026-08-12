bool __thiscall sub_1040B2F0(_DWORD *this)
{
  unsigned int v1; // eax
  int *v2; // ecx
  int v3; // ecx
  bool result; // al

  v1 = this[103];
  result = 0;
  if ( v1 != -1 )
  {
    v2 = &off_1061BE18[4 * (this[103] & 0xFFF) + 1];
    if ( v2[1] == v1 >> 12 )
    {
      v3 = *v2;
      if ( v3 )
      {
        if ( *(char **)(v3 + 92) == "npc_strider" || sub_100D6240((_DWORD *)v3, "npc_strider") )
          return 1;
      }
    }
  }
  return result;
}
