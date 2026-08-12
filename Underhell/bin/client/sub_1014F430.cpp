void __cdecl sub_1014F430(int a1, int a2)
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

  if ( !word_103E83F2 )
  {
    if ( sub_10229D00(32) )
    {
      v2 = sub_10229D20("weaponscripts");
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
    if ( (unsigned __int8)sub_10229D70(v3, "scripts/weapon_manifest.txt", "GAME") )
    {
      v4 = sub_10229C90(v2);
      if ( v4 )
      {
        do
        {
          v5 = (const char *)sub_10229A00(v4);
          if ( !_stricmp(v5, "file") )
          {
            v6 = sub_1022B4C0(0, (int)Locale);
            sub_102286F0(v6, Destination, 0x200u);
            if ( sub_1014F340(a1, Destination, (unsigned __int16 *)&v9, a2) )
              sub_10150110(v9);
          }
          else
          {
            v7 = (const char *)sub_10229A00(v4);
            Error("Expecting 'file', got %s\n", v7);
          }
          v4 = sub_1021F0F0(v4);
        }
        while ( v4 );
        v2 = v10;
      }
    }
    sub_1022AF00(v2);
  }
}
