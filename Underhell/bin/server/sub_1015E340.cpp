int sub_1015E340()
{
  int result; // eax
  _DWORD *v1; // ecx

  result = dword_106B3CD8;
  if ( dword_106B3CD8 )
  {
    if ( *(_BYTE *)(dword_106B3CD8 + 84) )
    {
      *(_BYTE *)(dword_106B3CD8 + 88) |= 1u;
    }
    else
    {
      v1 = *(_DWORD **)(dword_106B3CD8 + 24);
      if ( v1 )
      {
        *v1 |= 0x101u;
        result = sub_10153460(v1);
        *(_WORD *)(result + 2) = 0;
      }
    }
  }
  return result;
}
