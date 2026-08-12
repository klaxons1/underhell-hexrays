char __cdecl sub_1012CEC0(int a1, int a2, char *Source)
{
  char *v3; // eax
  int v4; // ebx
  char *i; // esi
  int v6; // ebx
  char String[128]; // [esp+Ch] [ebp-80h] BYREF

  sub_102282F0(String, Source, 0x80u);
  v3 = String;
  v4 = 0;
  for ( i = String; v4 < a2; v3 = i )
  {
    *(_DWORD *)(a1 + 4 * v4) = atoi(v3);
    LOBYTE(v3) = *i;
    if ( !*i )
      break;
    while ( (_BYTE)v3 != 32 )
    {
      LOBYTE(v3) = *++i;
      if ( !(_BYTE)v3 )
        goto LABEL_8;
    }
    if ( !*i )
      break;
    ++i;
    ++v4;
  }
LABEL_8:
  v6 = v4 + 1;
  if ( v6 < a2 )
  {
    LOBYTE(v3) = 0;
    memset((void *)(a1 + 4 * v6), 0, 4 * (a2 - v6));
  }
  return (char)v3;
}
