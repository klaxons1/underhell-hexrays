char __cdecl sub_1012CE00(int a1, int a2, char *Source)
{
  char *v3; // eax
  int v4; // ebx
  char *i; // esi
  double v6; // st7
  int v7; // ebx
  char String[128]; // [esp+Ch] [ebp-80h] BYREF

  sub_102282F0(String, Source, 0x80u);
  v3 = String;
  v4 = 0;
  for ( i = String; v4 < a2; v3 = i )
  {
    v6 = atof(v3);
    LOBYTE(v3) = *i;
    *(float *)(a1 + 4 * v4) = v6;
    if ( !(_BYTE)v3 )
      break;
    while ( (char)v3 <= 32 )
    {
      LOBYTE(v3) = *++i;
      if ( !(_BYTE)v3 )
        goto LABEL_12;
    }
    LOBYTE(v3) = *i;
    if ( !*i )
      break;
    while ( (char)v3 > 32 )
    {
      LOBYTE(v3) = *++i;
      if ( !(_BYTE)v3 )
        goto LABEL_12;
    }
    if ( !*i )
      break;
    ++i;
    ++v4;
  }
LABEL_12:
  v7 = v4 + 1;
  if ( v7 < a2 )
  {
    LOBYTE(v3) = 0;
    memset((void *)(a1 + 4 * v7), 0, 4 * (a2 - v7));
  }
  return (char)v3;
}
