char __thiscall sub_102F3810(int *this, _DWORD *a2, int a3)
{
  int v4; // eax
  char result; // al

  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 508))(dword_106B3CDC) )
    return sub_103940B0(a2, a3);
  v4 = sub_1025FB50(1);
  if ( v4 )
  {
    if ( a2 != (_DWORD *)v4
      && (*(unsigned __int8 (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v4 + 1276))(v4, a2, 0) )
    {
      return sub_103940B0(a2, a3);
    }
  }
  result = sub_102EBE50(this, this, a2);
  if ( result )
    return sub_103940B0(a2, a3);
  return result;
}
