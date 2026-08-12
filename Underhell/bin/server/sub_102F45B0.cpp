int __thiscall sub_102F45B0(void *this, int a2)
{
  int v3; // eax
  int v4; // esi
  int result; // eax
  int v6; // eax

  if ( *(int *)(dword_106B31C8 + 20) > 1 )
    return sub_10396960((int)this, a2);
  v3 = sub_10261B20();
  v4 = v3;
  if ( !v3 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 1088))(v3) )
    return sub_10396960((int)this, a2);
  result = sub_103948B0(this);
  if ( (_BYTE)result )
  {
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 1096))(v4);
    return sub_10394910(v6, 1);
  }
  return result;
}
