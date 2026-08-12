int __thiscall sub_10185CD0(_DWORD *this)
{
  _BYTE *v1; // eax
  const char *v3; // eax

  v1 = (_BYTE *)this[233];
  if ( v1 && *v1 )
    return sub_10260680(v1, 0);
  v3 = (const char *)this[65];
  if ( !v3 )
    v3 = String;
  return Warning("npc_maker %s has no specified NPC-to-spawn classname.\n", v3);
}
