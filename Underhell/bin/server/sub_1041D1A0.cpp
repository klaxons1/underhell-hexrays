char __thiscall sub_1041D1A0(_DWORD *this, char *Destination, size_t Count)
{
  int v4; // esi
  unsigned __int8 *v5; // edi
  char *v7; // eax

  v4 = 0;
  if ( (int)this[4] <= 0 )
    return 0;
  while ( 1 )
  {
    v5 = *(unsigned __int8 **)(this[1] + 4 * v4);
    if ( sub_10418360(v5) == 5 && sub_10418750(v5) )
      break;
    if ( ++v4 >= this[4] )
      return 0;
  }
  v7 = (char *)sub_104183D0((char *)v5);
  sub_104299C0(Destination, v7, Count);
  return 1;
}
