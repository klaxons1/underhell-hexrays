void __thiscall sub_1026E9C0(int *this, int a2)
{
  _DWORD *v3; // eax
  int v4; // edi
  _BYTE *v5; // eax
  int v6; // eax
  int *v7; // ebx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  void (*v11)(const char *, ...); // edi
  bool v12; // cc
  int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // edi
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v20; // [esp+8h] [ebp-10h]
  int v21; // [esp+Ch] [ebp-Ch] BYREF
  int v22; // [esp+10h] [ebp-8h]
  char *String2; // [esp+14h] [ebp-4h] BYREF
  int v24; // [esp+20h] [ebp+8h]
  int i; // [esp+20h] [ebp+8h]
  int j; // [esp+20h] [ebp+8h]

  if ( a2 )
  {
    v3 = (_DWORD *)__RTDynamicCast(
                     this[11],
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                     (int)&CBaseAnimating `RTTI Type Descriptor',
                     0);
    if ( v3 )
    {
      if ( sub_10001430(v3) )
      {
        v4 = sub_1042A2F0(a2);
        v24 = v4;
        while ( v4 )
        {
          v5 = (_BYTE *)sub_1042A070(v4);
          sub_10162BE0(&String2, v5);
          v6 = sub_1026E8C0(this, String2, &v21);
          if ( v6 )
          {
            v7 = (int *)(v6 + 4);
            v8 = sub_1026E560((int *)(v6 + 4), *(_DWORD *)(v6 + 16));
            v9 = *v7;
            v22 = v8;
            v20 = 48 * v8;
            sub_1026DDF0(this, v4, (_DWORD *)(48 * v8 + v9));
            v10 = 20 * sub_1026CA40(this + 1, this[4]);
            *(_DWORD *)(v10 + this[1] + 16) = -1;
            *(_DWORD *)(v10 + this[1] + 4) = v22;
            *(_DWORD *)(v10 + this[1]) = v21;
            *(_DWORD *)(v10 + this[1] + 8) = String2;
            *(_DWORD *)(v10 + this[1] + 12) = *(_DWORD *)(v20 + *v7);
            v24 = sub_1042A300(v24);
            v4 = v24;
          }
        }
        if ( *(_DWORD *)(dword_106CEFF4 + 48) )
        {
          v11 = (void (*)(const char *, ...))Msg;
          Msg("Passenger Roles Parsed:\t%d\n\n", this[9]);
          v12 = this[9] <= 0;
          v22 = 0;
          if ( !v12 )
          {
            v13 = 0;
            do
            {
              v11(
                "\tPassenger Role:\t%s (%d seats)\n",
                *(const char **)(this[6] + v13),
                *(_DWORD *)(this[6] + v13 + 16));
              v14 = this[6];
              v12 = *(_DWORD *)(v14 + v13 + 16) <= 0;
              String2 = 0;
              if ( !v12 )
              {
                v15 = *(_DWORD *)(v14 + v13 + 4);
                v16 = 0;
                do
                {
                  Msg("\t\tAttachment: %d\n", *(_DWORD *)(v15 + v16 + 4));
                  Msg("\t\tEntries:\t%d\n", *(_DWORD *)(*(_DWORD *)(this[6] + v13 + 4) + v16 + 20));
                  Msg("\t\t=====================\n");
                  for ( i = 0; i < *(_DWORD *)(*(_DWORD *)(this[6] + v13 + 4) + v16 + 20); ++i )
                  {
                    v17 = *(_DWORD *)(*(_DWORD *)(this[6] + v13 + 4) + v16 + 8);
                    Msg(
                      "\t\t\tAnimation:\t%s\t(Priority %d)\n",
                      *(const char **)(v17 + 8 * i),
                      *(_DWORD *)(v17 + 8 * i + 4));
                  }
                  Msg("\n");
                  Msg("\t\tExits:\t%d\n", *(_DWORD *)(*(_DWORD *)(this[6] + v13 + 4) + v16 + 40));
                  Msg("\t\t=====================\n");
                  v15 = *(_DWORD *)(this[6] + v13 + 4);
                  for ( j = 0; j < *(_DWORD *)(v15 + v16 + 40); ++j )
                  {
                    v18 = *(_DWORD *)(*(_DWORD *)(this[6] + v13 + 4) + v16 + 28);
                    Msg(
                      "\t\t\tAnimation:\t%s\t(Priority %d)\n",
                      *(const char **)(v18 + 8 * j),
                      *(_DWORD *)(v18 + 8 * j + 4));
                    v15 = *(_DWORD *)(this[6] + v13 + 4);
                  }
                  v19 = this[6];
                  v16 += 48;
                  ++String2;
                }
                while ( (int)String2 < *(_DWORD *)(v19 + v13 + 16) );
                v11 = (void (*)(const char *, ...))Msg;
              }
              v11("\n");
              v13 += 24;
              ++v22;
            }
            while ( v22 < this[9] );
          }
        }
      }
    }
  }
}
