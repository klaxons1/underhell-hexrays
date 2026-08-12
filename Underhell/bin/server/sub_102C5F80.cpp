int __thiscall sub_102C5F80(_DWORD *this, char *String1)
{
  const char *v4; // esi
  unsigned __int8 (__cdecl **v5)(int, int); // ecx
  int v6; // eax
  _DWORD v7[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( !this[23] )
    return 0;
  v4 = String1;
  if ( !_stricmp(String1, "npc_ministrider") )
    v4 = "npc_hunter";
  if ( sub_104292D0(v4, "npc_", 4) )
    return 0;
  v5 = (unsigned __int8 (__cdecl **)(int, int))(this[23] + 104);
  if ( !v4 || (v7[1] = 0, v7[2] = 0, v7[0] = v4, v6 = sub_102C1F00(v5, (int)v7), v6 == -1) )
    v6 = sub_102C58D0((void *)(this[23] + 104), v4);
  return *(_DWORD *)(this[23] + 108) + 28 * v6 + 20;
}
