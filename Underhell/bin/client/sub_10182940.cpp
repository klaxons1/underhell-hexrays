int __thiscall sub_10182940(int this, int a2)
{
  int v3; // edi

  v3 = 0;
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 272) + 884))(*(_DWORD *)(this + 272)) < 0 )
    return -1;
  while ( 1 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 272) + 880))(*(_DWORD *)(this + 272), v3) )
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 272) + 868))(*(_DWORD *)(this + 272), v3);
      if ( sub_10229C00(*(_DWORD *)(this + 464)) )
      {
        if ( sub_1022A800(0, 0) == a2 )
          break;
      }
    }
    if ( ++v3 > (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 272) + 884))(*(_DWORD *)(this + 272)) )
      return -1;
  }
  return v3;
}
