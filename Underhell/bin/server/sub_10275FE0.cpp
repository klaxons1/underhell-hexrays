void __cdecl sub_10275FE0(int a1, int a2)
{
  int v2; // edi
  int v3; // eax
  int v4; // esi
  const char *v5; // eax
  int v6; // eax
  const char *v7; // eax
  char Destination[512]; // [esp+0h] [ebp-208h] BYREF
  int v9; // [esp+200h] [ebp-8h] BYREF
  int v10; // [esp+204h] [ebp-4h]

  if ( !word_106567CA )
  {
    if ( sub_1042A310(32) )
    {
      v2 = sub_1042A330("weaponscripts");
      v10 = v2;
    }
    else
    {
      v10 = 0;
      v2 = 0;
    }
    if ( a1 )
      v3 = a1 + 4;
    else
      v3 = 0;
    if ( (unsigned __int8)sub_1042A380(v3, "scripts/weapon_manifest.txt", "GAME") )
    {
      v4 = sub_1042A2F0(v2);
      if ( v4 )
      {
        do
        {
          v5 = (const char *)sub_1042A070(v4);
          if ( !_stricmp(v5, "file") )
          {
            v6 = sub_1042B460(0, (int)String);
            sub_10429AA0(v6, Destination, 0x200u);
            sub_10275EF0(a1, Destination, (unsigned __int16 *)&v9, a2);
          }
          else
          {
            v7 = (const char *)sub_1042A070(v4);
            Error("Expecting 'file', got %s\n", v7);
          }
          v4 = sub_1042A300(v4);
        }
        while ( v4 );
        v2 = v10;
      }
    }
    sub_1042B1A0(v2);
  }
}
