void __cdecl sub_10247D80(int a1, char *Buffer, size_t BufferCount)
{
  char *v3; // ebx
  signed int v4; // esi
  int v5; // eax
  int i; // edi
  int v7; // eax

  v3 = Buffer;
  v4 = BufferCount;
  if ( !a1 )
  {
    v5 = sub_10429A00(Buffer, BufferCount, "%s", (char)"GENERIC");
    v4 = BufferCount - v5;
    v3 = &Buffer[v5];
  }
  for ( i = 0; v4 > 0; ++i )
  {
    if ( i >= 30 )
      break;
    if ( ((1 << i) & a1) != 0 )
    {
      v7 = sub_10429A00(v3, v4, "%s ", *(_DWORD *)&off_1051FE6C[4 * i]);
      v4 -= v7;
      v3 += v7;
    }
  }
}
