int __initstdio()
{
  int v0; // eax
  char *v1; // eax
  int v3; // edx
  _UNKNOWN **v4; // ecx
  int v5; // edx
  _DWORD *v6; // ecx
  int v7; // eax

  v0 = dword_1048ABC0;
  if ( !dword_1048ABC0 )
  {
    v0 = 512;
LABEL_5:
    dword_1048ABC0 = v0;
    goto LABEL_6;
  }
  if ( dword_1048ABC0 < 20 )
  {
    v0 = 20;
    goto LABEL_5;
  }
LABEL_6:
  v1 = (char *)sub_100DD9C0(v0, 4);
  dword_10489BA4 = (int)v1;
  if ( !v1 )
  {
    dword_1048ABC0 = 20;
    v1 = (char *)sub_100DD9C0(20, 4);
    dword_10489BA4 = (int)v1;
    if ( !v1 )
      return 26;
  }
  v3 = 0;
  v4 = &off_103FE760;
  while ( 1 )
  {
    *(_DWORD *)&v1[v3] = v4;
    v4 += 8;
    v3 += 4;
    if ( (int)v4 >= (int)&off_103FE9E0 )
      break;
    v1 = (char *)dword_10489BA4;
  }
  v5 = 0;
  v6 = &unk_103FE770;
  do
  {
    v7 = *(_DWORD *)(((v5 & 0x1F) << 6) + dword_1048ABE0[v5 >> 5]);
    if ( v7 == -1 || v7 == -2 || !v7 )
      *v6 = -2;
    v6 += 8;
    ++v5;
  }
  while ( (int)v6 < (int)dword_103FE7D0 );
  return 0;
}
