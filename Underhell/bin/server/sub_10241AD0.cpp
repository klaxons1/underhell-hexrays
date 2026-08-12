int __thiscall sub_10241AD0(_DWORD *this, const char *a2)
{
  int v4; // edi
  const char *v5; // eax
  int v6; // eax
  const char *v7; // eax
  int v8; // eax
  int v10; // [esp-4h] [ebp-10h]
  int v11; // [esp+14h] [ebp+8h]

  if ( sub_1042A310(32) )
    v11 = sub_1042A330(a2);
  else
    v11 = 0;
  v4 = v11;
  if ( (*(unsigned __int8 (__thiscall **)(int, int, int, const char *, const char *))(*(_DWORD *)dword_106B31D8 + 296))(
         dword_106B31D8,
         v11,
         2,
         a2,
         "GAME")
    && v11 )
  {
    do
    {
      if ( sub_1042A2F0(v4) )
      {
        if ( *(_DWORD *)(*(_DWORD *)(dword_106B2C88 + 28) + 48) )
        {
          v5 = (const char *)sub_1042A070(v4);
          if ( strstr(v5, "{") )
          {
            v6 = this[4];
            if ( v6 <= 0 )
              v7 = "FIRST";
            else
              v7 = (const char *)sub_10244BD0(v6 - 1);
            Msg("Error parsing soundscape file %s after %s\n", a2, v7);
          }
        }
        v10 = this[4];
        v8 = sub_1042A070(v4);
        sub_10244E30(v8, v10);
        ++this[4];
      }
      v4 = sub_1042A300(v4);
    }
    while ( v4 );
  }
  return sub_1042B1A0(v11);
}
