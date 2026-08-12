void sub_1019E970()
{
  int v0; // esi
  int v1; // ebx
  int v2; // esi
  int v3; // edi
  unsigned __int8 v4; // dl
  unsigned __int8 v5; // al
  char *v6; // eax
  char Buffer[260]; // [esp+10h] [ebp-104h] BYREF

  v0 = dword_10632630;
  Buffer[0] = 0;
  if ( dword_10632630 != -1 )
  {
    v1 = dword_10632624;
    do
    {
      v2 = 12 * v0;
      v3 = *(_DWORD *)(v2 + v1);
      v4 = *(_BYTE *)(v3 + 489);
      v5 = v4 + *(_BYTE *)(v3 + 490);
      if ( v5 )
      {
        v6 = sub_1001E280(Buffer, "%d (%d/%d)", v5, *(unsigned __int8 *)(v3 + 490), v4);
        sub_1011CF30((float *)(v3 + 28), (int)v6, 0, 0.1);
        v1 = dword_10632624;
      }
      v0 = *(_DWORD *)(v2 + v1 + 8);
    }
    while ( v0 != -1 );
  }
}
