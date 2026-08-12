int __thiscall sub_10069C20(_DWORD *this)
{
  int v1; // ebx
  int v2; // eax
  int v3; // edi
  __int16 **i; // esi
  int result; // eax
  int v6; // edx
  int v7; // [esp+Ch] [ebp-8h]

  v1 = this[203];
  if ( v1 < 0 )
    return 0;
  if ( v1 >= *(_DWORD *)(dword_106935D8 + 4) )
    return 0;
  v2 = *(_DWORD *)(*(_DWORD *)(dword_106935D8 + 8) + 4 * v1);
  if ( !v2 )
    return 0;
  v3 = 0;
  v7 = *(_DWORD *)(v2 + 84);
  if ( v7 <= 0 )
    return 0;
  for ( i = *(__int16 ***)(v2 + 72); ; ++i )
  {
    result = (int)*i;
    v6 = **i;
    if ( v6 == v1 )
    {
      if ( *(__int16 *)(result + 2) == this[204] )
        return result;
      v1 = this[203];
    }
    if ( v6 == this[204] && *(__int16 *)(result + 2) == v1 )
      break;
    if ( ++v3 >= v7 )
      return 0;
  }
  return result;
}
