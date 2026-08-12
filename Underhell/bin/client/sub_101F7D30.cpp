char __thiscall sub_101F7D30(_DWORD *this, int a2)
{
  int v3; // esi

  if ( this[10] && *((_BYTE *)this + a2) )
    return 1;
  v3 = this[1502];
  if ( !v3 )
    return 0;
  while ( !(unsigned __int8)sub_101F7D30(a2) )
  {
    v3 = *(_DWORD *)(v3 + 5980);
    if ( !v3 )
      return 0;
  }
  return 1;
}
