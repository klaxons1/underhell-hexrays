char *sub_10195950()
{
  const char *v0; // eax
  int v1; // eax

  v0 = *(const char **)(dword_106B31C8 + 60);
  if ( !v0 )
    v0 = String;
  sub_10429A00(byte_106B7C78, 0x100u, "maps\\%s.bsp", (char)v0);
  v1 = strlen(byte_106B7C78);
  if ( v1 < 3 )
    return 0;
  *(__int16 *)((char *)&word_106B7C75 + v1) = 29538;
  byte_106B7C77[v1] = 112;
  return byte_106B7C78;
}
