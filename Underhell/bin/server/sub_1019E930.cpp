int sub_1019E930()
{
  int result; // eax
  int v1; // ecx
  int v2; // eax

  result = dword_10632630;
  if ( dword_10632630 != -1 )
  {
    v1 = dword_10632624;
    do
    {
      v2 = 12 * result;
      *(_WORD *)(*(_DWORD *)(v2 + v1) + 489) = 0;
      v1 = dword_10632624;
      result = *(_DWORD *)(v2 + dword_10632624 + 8);
    }
    while ( result != -1 );
  }
  return result;
}
