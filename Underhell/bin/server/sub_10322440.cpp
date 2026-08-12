bool __cdecl sub_10322440(int a1)
{
  return a1
      && (*(char **)(a1 + 92) == "npc_headcrab_poison"
       || sub_100D6240((_DWORD *)a1, "npc_headcrab_poison")
       || *(char **)(a1 + 92) == "npc_headcrab_black"
       || sub_100D6240((_DWORD *)a1, "npc_headcrab_black")
       || (*(char **)(a1 + 92) == "npc_antlion" || sub_100D6240((_DWORD *)a1, "npc_antlion"))
       && (*(_DWORD *)(a1 + 248) & 0x40000) != 0);
}
