bool __thiscall sub_103EBB20(_DWORD *this, int a2)
{
  char *v2; // esi
  int v3; // eax
  int v5; // eax

  v2 = (char *)(this - 371);
  if ( (*(int (__thiscall **)(_DWORD *))(*(this - 371) + 340))(this - 371) )
  {
    v3 = (*(int (__thiscall **)(char *))(*(_DWORD *)v2 + 340))(v2);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 60))(v3) )
      return 0;
  }
  v5 = *(_DWORD *)(a2 + 64);
  return (v5 & 0x10) != 0 || (v5 & 0x40040) == 0;
}
