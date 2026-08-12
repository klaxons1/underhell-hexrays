int __stdcall sub_10153EB0(char *Buffer, size_t BufferCount, float a3, float a4, char a5)
{
  char *v5; // ebx
  int v6; // esi
  int i; // ecx
  char v8; // al
  char Destination[64]; // [esp+8h] [ebp-40h] BYREF

  v5 = *(char **)(dword_106B31C8 + 60);
  if ( !v5 )
    v5 = (char *)String;
  v6 = 0;
  while ( sub_104292D0(v5, off_10627B18[2 * v6], strlen(off_10627B18[2 * v6])) )
  {
    if ( (unsigned int)++v6 >= 0x39 )
      goto LABEL_14;
  }
  sub_104299C0(Destination, (&off_10627B1C)[2 * v6], 0x40u);
  v5 = Destination;
  for ( i = 0; i < 64; v8 == 10 || v8 == 13 ? (Destination[i] = 0) : ++i )
  {
    v8 = Destination[i];
    if ( !v8 )
      break;
  }
LABEL_14:
  if ( a5 )
    return sub_10429A00(Buffer, BufferCount, "%-64.64s", (char)v5);
  else
    return sub_10429A00(Buffer, BufferCount, "%-64.64s %03d:%02d", (char)v5);
}
