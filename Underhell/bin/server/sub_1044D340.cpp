int __stdcall sub_1044D340(_DWORD *a1)
{
  int v1; // ebx
  int i; // esi
  _BYTE *j; // edi
  _BYTE *v4; // eax
  _BYTE *k; // eax

  v1 = a1[7] - a1[3];
  for ( i = 0; i < v1; ++dword_10701AB4 )
  {
    for ( j = (_BYTE *)sub_1042D240(a1, 1, i); j; j = (_BYTE *)sub_1042D240(a1, 1, i) )
    {
      if ( !isspace((char)*j) )
        break;
      if ( *j == 10 )
        ++dword_10701AB4;
      if ( ++i >= v1 )
        break;
    }
    v4 = (_BYTE *)sub_1042D240(a1, 2, i);
    if ( i >= v1 || !v4 || *v4 != 47 || v4[1] != 47 )
      break;
    i += 2;
    for ( k = (_BYTE *)sub_1042D240(a1, 1, i); k; k = (_BYTE *)sub_1042D240(a1, 1, i) )
    {
      if ( *k == 10 )
        break;
      if ( ++i >= v1 )
        break;
    }
  }
  return sub_1042D280((int)a1, 1, i);
}
