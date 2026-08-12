bool __thiscall sub_1004FDB0(int this)
{
  int v3; // esi

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 1268))(*(_DWORD *)(this + 4))
    || *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 28) )
  {
    return 0;
  }
  v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4));
  return v3
      && *(_DWORD *)(dword_10691FAC + 48)
      && (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1080))(*(_DWORD *)(this + 4), v3) == 2
      && (*(char **)(v3 + 92) == "npc_hunter" || (unsigned __int8)sub_100D6240("npc_hunter"));
}
