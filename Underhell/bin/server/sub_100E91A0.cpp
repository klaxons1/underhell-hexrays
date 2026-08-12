int __thiscall sub_100E91A0(_DWORD *this, int a2)
{
  int v3; // ebx
  int i; // edi
  const char *v5; // eax

  v3 = 0;
  if ( (int)this[39] <= 0 )
    return -1;
  for ( i = 0; ; i += 16 )
  {
    v5 = *(const char **)(i + this[36] + 4);
    if ( !v5 )
      v5 = String;
    if ( !sub_104291C0(v5, a2, 32) )
      break;
    if ( ++v3 >= this[39] )
      return -1;
  }
  return v3;
}
