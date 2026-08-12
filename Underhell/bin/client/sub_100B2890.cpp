int sub_100B2890()
{
  int result; // eax
  int v1; // esi
  _DWORD *v2; // eax
  int v3; // esi

  result = *((_DWORD *)off_103DCD78 + 16385);
  if ( result )
  {
    result = (result - (int)off_103DCD78 - 4) >> 4;
    v1 = result | (*((_DWORD *)off_103DCD78 + 4 * result + 2) << 12);
    if ( v1 != -1 )
    {
      do
      {
        v2 = (_DWORD *)sub_10036460(v1);
        if ( v2 )
          sub_1003D500(v2);
        v3 = *((_DWORD *)off_103DCD78 + 4 * (v1 & 0xFFF) + 4);
        if ( v3 )
          result = ((v3 - (int)off_103DCD78 - 4) >> 4)
                 | (*((_DWORD *)off_103DCD78 + 4 * ((v3 - (int)off_103DCD78 - 4) >> 4) + 2) << 12);
        else
          result = -1;
        v1 = result;
      }
      while ( result != -1 );
    }
  }
  return result;
}
