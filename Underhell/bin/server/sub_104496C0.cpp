BOOL __cdecl sub_104496C0(_BYTE *a1, char *String1, size_t Count, _DWORD *a4, char *a5, int a6, _DWORD *a7)
{
  char v7; // bl
  char v8; // al
  const char *v9; // eax
  int v10; // eax
  char v11; // bl
  char v13; // [esp+10h] [ebp-B0h]
  char v14; // [esp+14h] [ebp-ACh]
  char Buffer[168]; // [esp+18h] [ebp-A8h] BYREF

  v7 = a1[21] & 1;
  v13 = v7;
  v8 = v7 && (a1[21] & 4) != 0;
  v14 = v8;
  if ( !v7 || v8 )
    v8 = 1;
  sub_1042D120(a1, 1, v8);
  if ( !sub_1042E740((int)a1, "<!-- dmx", "-->", Buffer, 168)
    || sscanf_s(Buffer, "encoding %s %d format %s %d\n", String1, Count, a4, a5) != 4 )
  {
    goto LABEL_13;
  }
  v9 = "keyvalues2";
  if ( !v7 )
    v9 = "binary";
  v10 = _stricmp(String1, v9);
  v11 = v10 == 0;
  if ( v10 )
  {
LABEL_13:
    sub_1042D280((int)a1, 0, 0);
    v11 = sub_1042E740((int)a1, "<!-- DMXVersion", "-->", a5, 4);
    if ( v11 )
    {
      *a4 = 0;
      *a7 = 0;
      if ( !_stricmp(a5, "binary_v1") || !_stricmp(a5, "binary_v2") )
      {
        v11 = v13 == 0;
        sub_104299C0(String1, "binary", Count);
      }
      else if ( !_stricmp(a5, "keyvalues2_v1") || !_stricmp(a5, "keyvalues2_flat_v1") )
      {
        v11 = v13;
        sub_104299C0(String1, "keyvalues2", Count);
      }
      else
      {
        v11 = 0;
      }
    }
  }
  sub_1042D120(a1, v13, v14);
  return v11 && !a1[20];
}
