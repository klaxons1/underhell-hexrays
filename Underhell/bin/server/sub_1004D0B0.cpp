char __stdcall sub_1004D0B0(_DWORD *a1)
{
  char result; // al
  _DWORD *v2; // esi
  _DWORD *v3; // ecx

  result = sub_1004BEB0(a1, (int *)&a1);
  if ( result )
  {
    if ( (v2 = a1,
          v3 = a1,
          a1[7] = 0,
          *((_WORD *)v3 + 18) = 0,
          result = sub_1004CBB0((void **)v3),
          *(char **)(v2[1] + 92) != "npc_monk")
      && (result = sub_100D6240("npc_monk")) == 0
      || *(_DWORD *)(v2[1] + 2324) != 4 )
    {
      result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v2[1] + 1088))(v2[1]);
      if ( !result )
        return (unsigned __int8)sub_10044510(v2[1], (int)"Assault goal disabled");
    }
  }
  return result;
}
