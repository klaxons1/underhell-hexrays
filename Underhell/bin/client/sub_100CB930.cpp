int __cdecl sub_100CB930(_DWORD *a1, char *String2)
{
  _DWORD *v2; // edi
  int v3; // ebx
  const char *v4; // eax
  int v5; // esi
  int v7; // [esp+14h] [ebp+8h]

  v2 = a1;
  if ( !a1 )
    return 0;
  while ( 1 )
  {
    v7 = 0;
    if ( (int)v2[1] > 0 )
      break;
LABEL_7:
    v2 = (_DWORD *)v2[3];
    if ( !v2 )
      return 0;
  }
  v3 = 0;
  while ( 1 )
  {
    v4 = *(const char **)(*v2 + v3 + 4);
    v5 = v3 + *v2;
    if ( v4 )
    {
      if ( !_stricmp(v4, String2) )
        return v5;
    }
    v3 += 52;
    if ( ++v7 >= v2[1] )
      goto LABEL_7;
  }
}
