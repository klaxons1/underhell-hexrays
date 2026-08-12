int __cdecl sub_100DAB00(int *a1)
{
  int result; // eax
  int v2; // esi
  char *v3; // eax
  int v4; // edi
  int *i; // esi
  int v6; // edi
  int v7; // ecx
  char *v8; // eax
  int *v9; // eax
  int v10; // eax
  const char *v11; // eax
  int v12; // eax
  char *v13; // eax
  double ArgList; // [esp+0h] [ebp-134h]
  char Destination[256]; // [esp+14h] [ebp-120h] BYREF
  char *Source[3]; // [esp+114h] [ebp-20h] BYREF
  unsigned int v17; // [esp+120h] [ebp-14h]
  int v18; // [esp+124h] [ebp-10h]
  int v19; // [esp+128h] [ebp-Ch]
  int v20; // [esp+12Ch] [ebp-8h]
  int v21; // [esp+130h] [ebp-4h]

  result = sub_10153490();
  v2 = result;
  v19 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      if ( *a1 >= 2 )
      {
        v3 = (char *)sub_100634F0(a1, 1);
        v4 = sub_1012BF20(0, v3, 0, 0, 0, 0);
        v21 = v4;
        if ( v4 )
        {
          while ( 1 )
          {
            for ( i = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4); i; i = (int *)i[3] )
            {
              v20 = 0;
              if ( i[1] > 0 )
              {
                v6 = 0;
                do
                {
                  v7 = *i;
                  Source[0] = 0;
                  v17 = -1;
                  v18 = 0;
                  if ( sub_100D6830(v21, v6, *(char **)(v7 + v6 + 20), (int)Source) )
                  {
                    Destination[0] = 0;
                    switch ( v18 )
                    {
                      case 1:
                        if ( v18 == 1 && 0.0 != *(float *)Source )
                        {
                          ArgList = *(float *)Source;
                          sub_10429A00(Destination, 0x100u, "%.2f", SLOBYTE(ArgList));
                        }
                        break;
                      case 2:
                        if ( v18 == 2 )
                        {
                          v8 = Source[0];
                          if ( !Source[0] )
                            v8 = (char *)String;
                        }
                        else
                        {
                          v8 = (char *)sub_1010D460(Source);
                        }
                        sub_104299C0(Destination, v8, 0x100u);
                        break;
                      case 5:
                        if ( v18 == 5 && Source[0] )
                          sub_10429A00(Destination, 0x100u, "%d", (char)Source[0]);
                        break;
                      case 13:
                        if ( v18 == 13 )
                        {
                          if ( v17 != -1 )
                          {
                            v9 = &off_1061BE18[4 * (v17 & 0xFFF) + 1];
                            if ( off_1061BE18[4 * (v17 & 0xFFF) + 2] == v17 >> 12 )
                            {
                              if ( *v9 )
                              {
                                if ( off_1061BE18[4 * (v17 & 0xFFF) + 2] == v17 >> 12 )
                                  v10 = *v9;
                                else
                                  v10 = 0;
                                v11 = *(const char **)(v10 + 260);
                                if ( !v11 )
                                  v11 = String;
                                sub_10429A00(Destination, 0x100u, "%s", (char)v11);
                              }
                            }
                          }
                        }
                        else
                        {
                          if ( (dword_10697954 & 1) == 0 )
                            dword_10697954 |= 1u;
                          dword_10697950 = -1;
                        }
                        break;
                      default:
                        break;
                    }
                    if ( _stricmp("parentname", *(const char **)(*i + v6 + 20))
                      && _stricmp("targetname", *(const char **)(*i + v6 + 20)) )
                    {
                      if ( Destination[0] )
                      {
                        v12 = sub_1025F440("  %s: %s\n", *(_DWORD *)(*i + v6 + 20));
                        sub_102601C0(v19, 2, v12, 0, 0, 0, 0);
                      }
                    }
                  }
                  v6 += 52;
                  ++v20;
                }
                while ( v20 < i[1] );
                v4 = v21;
              }
            }
            v13 = (char *)sub_100634F0(a1, 1);
            result = sub_1012BF20(v4, v13, 0, 0, 0, 0);
            v21 = result;
            if ( !result )
              break;
            v4 = v21;
          }
        }
        else
        {
          return sub_102601C0(v2, 2, "ent_dump: no such entity", 0, 0, 0, 0);
        }
      }
      else
      {
        return sub_102601C0(v2, 2, "Usage:\n   ent_dump <entity name>\n", 0, 0, 0, 0);
      }
    }
  }
  return result;
}
