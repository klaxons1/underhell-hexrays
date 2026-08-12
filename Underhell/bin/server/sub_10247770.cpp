void __thiscall sub_10247770(_DWORD *this, int a2)
{
  int i; // esi
  const char *v4; // eax
  char *v5; // eax
  const char *v6; // eax
  const char *v7; // eax
  _BYTE *v8; // eax

  if ( a2 )
  {
    this[13] = 0;
    this[12] = 100;
    for ( i = sub_1042A2F0(a2); i; i = sub_1042A300(i) )
    {
      v4 = (const char *)sub_1042A070(i);
      if ( !_stricmp(v4, "weapons") )
      {
        v5 = (char *)sub_1042B460(0, (int)String);
        sub_10429FB0(v5, (int)";", (int)(this + 7));
      }
      else
      {
        v6 = (const char *)sub_1042A070(i);
        if ( !_stricmp(v6, "spawnhealth") )
        {
          if ( sub_1042A260(0) )
            this[12] = sub_1042AE10(0, 100);
          else
            this[12] = 100;
        }
        else
        {
          v7 = (const char *)sub_1042A070(i);
          if ( !_stricmp(v7, "allowedpickups") )
          {
            v8 = (_BYTE *)sub_1042B460(0, (int)String);
            if ( !v8 || !*v8 )
              v8 = 0;
            this[13] = v8;
          }
        }
      }
    }
  }
}
