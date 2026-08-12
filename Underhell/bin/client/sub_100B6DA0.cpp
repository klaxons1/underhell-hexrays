int __cdecl sub_100B6DA0(int a1, char ArgList, int a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // edi
  char *v6; // eax
  char *v7; // esi
  char *v8; // eax
  char *v9; // eax
  char *v10; // eax
  int v12; // [esp+4h] [ebp-8h]
  char *v13; // [esp+8h] [ebp-4h] BYREF

  v3 = sub_1014D9F0(dword_10413188, ArgList, a3);
  v12 = v3;
  if ( v3 )
  {
    v4 = sub_1022A6A0("TextureData", 0);
    if ( v4 )
    {
      v5 = sub_10229C90(v4);
      if ( v5 )
      {
        do
        {
          v6 = (char *)sub_100DDA40(172);
          if ( v6 )
            v7 = sub_100B3A90(v6);
          else
            v7 = 0;
          v13 = v7;
          v8 = (char *)sub_10229A00(v5);
          sub_102282F0(v7, v8, 0x40u);
          if ( sub_1022B4C0("font", 0) )
          {
            v7[128] = 1;
            v7[130] = *(_BYTE *)sub_1022B4C0("character", (int)Locale);
            v9 = (char *)sub_1022B4C0("font", (int)Locale);
            sub_102282F0(v7 + 64, v9, 0x40u);
          }
          else
          {
            v7[128] = 0;
            v10 = (char *)sub_1022B4C0("file", (int)Locale);
            sub_102282F0(v7 + 64, v10, 0x40u);
            *((_DWORD *)v7 + 39) = sub_1022A800("x", 0);
            *((_DWORD *)v7 + 41) = sub_1022A800("y", 0);
            *((_DWORD *)v7 + 40) = *((_DWORD *)v7 + 39) + sub_1022A800("width", 0);
            *((_DWORD *)v7 + 42) = *((_DWORD *)v7 + 41) + sub_1022A800("height", 0);
          }
          sub_100B6CF0(a1, v7, &v13);
          v5 = sub_1021F0F0(v5);
        }
        while ( v5 );
        v3 = v12;
      }
    }
  }
  return sub_1022AF00(v3);
}
