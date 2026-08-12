int __thiscall sub_1010DEE0(_DWORD *this)
{
  int v1; // esi
  int (*v2)(const char *, ...); // edi
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  const char *v6; // ebx
  unsigned int v7; // ecx
  int *v8; // eax
  unsigned int v9; // ecx
  const char *v10; // edi
  const char **v11; // ecx
  const char *v12; // eax
  const char *v13; // edx
  const char *v14; // ecx
  const char *v16; // [esp+14h] [ebp-18h]
  int v17; // [esp+28h] [ebp-4h]

  v1 = this[12];
  v2 = Msg;
  Msg("Dumping event queue. Current time is: %.2f\n", *(float *)(dword_106B31C8 + 12));
  if ( v1 )
  {
    do
    {
      v3 = *(_DWORD *)(v1 + 16);
      v17 = *(_DWORD *)(v1 + 48);
      if ( v3 != -1
        && (v4 = &off_1061BE18[4 * (*(_DWORD *)(v1 + 16) & 0xFFF) + 1],
            v5 = v3 >> 12,
            off_1061BE18[4 * (*(_DWORD *)(v1 + 16) & 0xFFF) + 2] == v5)
        && *v4 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(v1 + 16) & 0xFFF) + 2] == v5 )
          v6 = sub_100D6390((_DWORD *)*v4);
        else
          v6 = sub_100D6390(0);
      }
      else
      {
        v6 = "None";
      }
      v7 = *(_DWORD *)(v1 + 12);
      if ( v7 != -1
        && (v8 = &off_1061BE18[4 * (*(_DWORD *)(v1 + 12) & 0xFFF) + 1],
            v9 = v7 >> 12,
            off_1061BE18[4 * (*(_DWORD *)(v1 + 12) & 0xFFF) + 2] == v9)
        && *v8 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(v1 + 12) & 0xFFF) + 2] == v9 )
          v10 = sub_100D6390((_DWORD *)*v8);
        else
          v10 = sub_100D6390(0);
      }
      else
      {
        v10 = "None";
      }
      v11 = (const char **)(v1 + 28);
      if ( *(_DWORD *)(v1 + 44) == 2 )
      {
        v12 = *v11;
        if ( !*v11 )
          v12 = String;
      }
      else
      {
        v12 = sub_1010D460((int)v11);
      }
      v13 = *(const char **)(v1 + 8);
      if ( !v13 )
        v13 = String;
      v14 = *(const char **)(v1 + 4);
      if ( !v14 )
        v14 = String;
      v16 = v10;
      v2 = Msg;
      Msg(
        "   (%.2f) Target: '%s', Input: '%s', Parameter '%s'. Activator: '%s', Caller '%s'.  \n",
        *(float *)v1,
        v14,
        v13,
        v12,
        v16,
        v6);
      v1 = v17;
    }
    while ( v17 );
  }
  return v2("Finished dump.\n");
}
