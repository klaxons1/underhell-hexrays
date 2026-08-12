char __thiscall sub_100DBB60(char **this, char *Destination, char *a3)
{
  char *v4; // esi
  char *v5; // eax
  bool v6; // zf
  unsigned int v8; // eax
  char *v9; // eax
  char *v10; // eax
  char Source[2048]; // [esp+8h] [ebp-800h] BYREF

  v4 = this[2];
  v5 = sub_100DBA50(v4, Source);
  v6 = Source[0] == 125;
  this[2] = v5;
  if ( v6 )
  {
    this[2] = v4;
    return 0;
  }
  else
  {
    if ( !v5 )
      goto LABEL_4;
    sub_102282F0(Destination, Source, 0x800u);
    v8 = strlen(Destination);
    if ( v8 )
    {
      v9 = &Destination[v8 - 1];
      do
      {
        if ( *v9 != 32 )
          break;
        *v9-- = 0;
      }
      while ( &v9[1 - (_DWORD)Destination] );
    }
    v10 = sub_100DBA50(this[2], Source);
    this[2] = v10;
    if ( v10 )
    {
      if ( Source[0] == 125 )
      {
        Warning("CEntityMapData::GetNextKey: closing brace without data\n");
        return 0;
      }
      else
      {
        sub_102282F0(a3, Source, 0x800u);
        return 1;
      }
    }
    else
    {
LABEL_4:
      Warning("CEntityMapData::GetNextKey: EOF without closing brace\n");
      return 0;
    }
  }
}
