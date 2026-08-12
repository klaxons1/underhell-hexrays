char __thiscall sub_1041D200(int this)
{
  int v2; // edi
  unsigned __int8 *v3; // ebx

  v2 = 0;
  if ( *(int *)(this + 16) <= 0 )
    return 0;
  while ( 1 )
  {
    v3 = *(unsigned __int8 **)(*(_DWORD *)(this + 4) + 4 * v2);
    if ( sub_10418360(v3) == 5 && sub_10418510((float *)v3) > *(float *)(this + 124) )
      break;
    if ( ++v2 >= *(_DWORD *)(this + 16) )
      return 0;
  }
  return 1;
}
