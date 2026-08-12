int sub_10224160()
{
  int v0; // edi
  const char *v1; // esi
  float v3; // [esp+1Ch] [ebp-C94h] BYREF
  char v4; // [esp+20h] [ebp-C90h] BYREF

  v0 = sub_10224000(&v3);
  Msg("Recent NPC speech:\n");
  if ( v0 > 0 )
  {
    v1 = &v4;
    do
    {
      Msg("   time: %6.3f   sound name: %s   scene: %s\n", *((float *)v1 - 1), v1, v1 + 512);
      v1 += 644;
      --v0;
    }
    while ( v0 );
  }
  return Msg("Current time: %6.3f\n", *(float *)(dword_106B31C8 + 12));
}
