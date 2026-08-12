bool __thiscall sub_102811C0(int *this, int a2, int a3)
{
  int v3; // edi
  int v5; // esi

  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E0 + 12))(dword_106B31E0, a2) )
    v3 = 0;
  else
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 20))(a2);
  if ( (*(_DWORD *)(v3 + 192) & 0x20) != 0 )
    return 0;
  v5 = 0;
  while ( *(char **)(v3 + 92) != off_10659F44[v5] && !sub_100D6240((_DWORD *)v3, off_10659F44[v5]) )
  {
    if ( (unsigned int)++v5 >= 7 )
      return sub_10265590(this, a2, a3);
  }
  return 0;
}
