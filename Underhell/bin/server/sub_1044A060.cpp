char __cdecl sub_1044A060(_BYTE *a1, _DWORD *a2, const char *a3)
{
  char result; // al
  const char *v4; // eax
  const char *v5; // eax
  char v6; // [esp+Bh] [ebp-89h] BYREF
  int v7; // [esp+Ch] [ebp-88h] BYREF
  int v8; // [esp+10h] [ebp-84h] BYREF
  char v9[64]; // [esp+14h] [ebp-80h] BYREF
  char String1[64]; // [esp+54h] [ebp-40h] BYREF

  *a2 = 0;
  result = sub_104496C0(a1, String1, 0x40u, &v7, v9, 64, &v8);
  if ( result )
  {
    if ( !v8 )
    {
      v4 = a3;
      if ( !a3 )
        v4 = "<no file>";
      Warning("reading file '%s' of legacy format '%s' - dmxconvert this file to a newer format!\n", v4, v9);
    }
    if ( (a1[21] & 1) != 0 )
    {
      v5 = a3;
      if ( !a3 )
        v5 = "<no file>";
      return sub_1044E7D0(v5, a1, a2);
    }
    else
    {
      return sub_10449DD0(&v6, (int)a1, v7, a2);
    }
  }
  return result;
}
