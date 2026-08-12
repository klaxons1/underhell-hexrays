char __thiscall sub_10365520(float *this, int a2)
{
  int v5; // esi
  int v6; // eax
  char v7; // [esp+13h] [ebp+Bh]

  if ( *(float *)(dword_106B31C8 + 12) < (double)this[943]
    && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
  {
    return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2);
  }
  v7 = sub_10365200((int)this, a2);
  if ( !v7 )
    return v7;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
    return v7;
  v5 = 0;
  if ( dword_106E7F14 <= 0 )
    return v7;
  v6 = dword_106E7F08;
  while ( *(float **)(v6 + 4 * v5) == this )
  {
LABEL_11:
    if ( ++v5 >= dword_106E7F14 )
      return v7;
  }
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v6 + 4 * v5) + 368))(*(_DWORD *)(v6 + 4 * v5)) != a2 )
  {
    v6 = dword_106E7F08;
    goto LABEL_11;
  }
  return 0;
}
