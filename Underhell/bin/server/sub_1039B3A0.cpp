int __thiscall sub_1039B3A0(int this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)(this + 32) = *sub_10162BE0(&v3, "env_fire");
  *(_DWORD *)(this + 36) = *sub_10162BE0(&v3, "combine_mine");
  *(_DWORD *)(this + 40) = *sub_10162BE0(&v3, "npc_turret_floor");
  *(_DWORD *)(this + 44) = *sub_10162BE0(&v3, "entityflame");
  sub_1012D950(&dword_1069E3E0, this);
  sub_10215D00((_WORD *)(this + 4));
  if ( *(int *)(this + 12) >= 0 )
  {
    if ( *(_DWORD *)(this + 4) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 4));
      *(_DWORD *)(this + 4) = 0;
    }
    *(_DWORD *)(this + 8) = 0;
  }
  result = *(_DWORD *)(this + 4);
  *(_WORD *)(this + 20) = -1;
  *(_WORD *)(this + 24) = -1;
  *(_DWORD *)(this + 28) = result;
  return result;
}
