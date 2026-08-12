int __thiscall sub_103AE8F0(void *this, int a2, int a3, int a4)
{
  if ( a3 == 1 && (*(char **)(a2 + 92) == "npc_bullseye" || sub_100D6240((_DWORD *)a2, "npc_bullseye")) )
  {
    if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
      sub_100DAE60(a2);
    (*(void (__thiscall **)(void *, int, int, _DWORD))(*(_DWORD *)this + 1876))(this, a2, a2 + 580, 0);
  }
  return sub_10020DD0(a2, a3, a4);
}
