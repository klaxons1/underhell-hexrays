bool __stdcall sub_103D2B70(int a1)
{
  unsigned int v2; // eax
  int v3; // eax

  if ( !(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a1 + 24)) )
    return 0;
  if ( *(_BYTE *)(a1 + 306) != 7 )
    return 1;
  v2 = *(_DWORD *)(a1 + 412);
  if ( v2 != -1 && off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 2] == v2 >> 12 )
  {
    if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 1] )
    {
      v3 = sub_10019B00((_DWORD *)a1);
      if ( *(char **)(v3 + 92) == "npc_strider" || sub_100D6240((_DWORD *)v3, "npc_strider") )
        return 1;
    }
  }
  return *(_BYTE *)(a1 + 225) == 2;
}
