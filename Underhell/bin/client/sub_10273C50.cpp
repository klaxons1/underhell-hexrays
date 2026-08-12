int __thiscall sub_10273C50(_DWORD *this, int a2)
{
  int v4; // ebp
  int v5; // esi
  int v6; // [esp+4h] [ebp-4h]

  if ( !*(_DWORD *)(this[67] + 268) )
    return this[58] - 1;
  v4 = this[58] - 1;
  v6 = 0;
  if ( v4 < 0 )
    return v4;
  while ( 1 )
  {
    v5 = (v6 + v4) >> 1;
    if ( !(*(unsigned __int8 (__cdecl **)(_DWORD, _DWORD))(this[67] + 268))(
            *(_DWORD *)(*(_DWORD *)(4 * v5 + this[55]) + 216),
            *(_DWORD *)(a2 + 216)) )
      break;
    v6 = v5 + 1;
LABEL_8:
    if ( v6 > v4 )
      return v4;
  }
  if ( (*(unsigned __int8 (__cdecl **)(_DWORD, _DWORD))(this[67] + 268))(
         *(_DWORD *)(a2 + 216),
         *(_DWORD *)(*(_DWORD *)(this[55] + 4 * v5) + 216)) )
  {
    v4 = v5 - 1;
    goto LABEL_8;
  }
  return (v6 + v4) >> 1;
}
