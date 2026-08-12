int sub_100D8360()
{
  int v0; // esi
  int result; // eax

  v0 = *(_DWORD *)(dword_1069739C + 48);
  for ( result = sub_1012BC10(0); result; result = sub_1012BC10(result) )
  {
    if ( v0 == 1 )
    {
      if ( !*(_BYTE *)(result + 361) || (*(_BYTE *)(result + 356) & 4) != 0 )
      {
LABEL_8:
        *(_DWORD *)(result + 236) &= ~0x80u;
        continue;
      }
      *(_DWORD *)(result + 236) |= 0x80u;
    }
    else
    {
      if ( v0 != 2 )
        goto LABEL_8;
      *(_DWORD *)(result + 236) |= 0x80u;
    }
  }
  return result;
}
