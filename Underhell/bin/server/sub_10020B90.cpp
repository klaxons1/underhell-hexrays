char *__thiscall sub_10020B90(int *this, char *Source, int a3)
{
  char *result; // eax
  char *v5; // edi
  char *v6; // eax
  const char *v7; // esi
  char *v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // esi
  int v13; // edi
  int v14; // eax
  char String[1000]; // [esp+8h] [ebp-3F0h] BYREF
  int v16; // [esp+3F0h] [ebp-8h]
  int v17; // [esp+3F4h] [ebp-4h]

  sub_104299C0(String, Source, 0x3E8u);
  result = strtok(String, " ");
  v5 = result;
  if ( result )
  {
    while ( 1 )
    {
      v6 = strtok(0, " ");
      v7 = v6;
      if ( !v6 )
        break;
      if ( !_stricmp(v6, "D_HT") )
      {
        v17 = 1;
      }
      else if ( !_stricmp(v7, "D_FR") )
      {
        v17 = 2;
      }
      else if ( !_stricmp(v7, "D_LI") )
      {
        v17 = 3;
      }
      else
      {
        if ( _stricmp(v7, "D_NU") )
          return (char *)Warning("***ERROR***\nBad relationship type (%s) to unknown entity (%s)!\n", v7, v5);
        v17 = 4;
      }
      v8 = strtok(0, " ");
      if ( v8 )
        v16 = atoi(v8);
      else
        v16 = 0x80000000;
      v9 = sub_1012BF20(0, v5, 0, 0, 0, 0);
      if ( v9 )
      {
        do
        {
          (*(void (__thiscall **)(int *, int, int, int))(*this + 1120))(this, v9, v17, v16);
          v9 = sub_1012BF20(v9, v5, 0, 0, 0, 0);
        }
        while ( v9 );
      }
      else if ( !_stricmp("player", v5) || !_stricmp("!player", v5) )
      {
        (*(void (__thiscall **)(int *, int, int, int))(*this + 1128))(this, 1, v17, v16);
      }
      else if ( sub_10264CF0()
             && (v10 = sub_10264CF0(), (*(int (__thiscall **)(int, char *))(*(_DWORD *)v10 + 12))(v10, v5))
             && (v11 = sub_101811E0(v5, -1), (v12 = v11) != 0) )
      {
        v13 = *this;
        v14 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v11 + 220))(v11, v17, v16);
        (*(void (__thiscall **)(int *, int))(v13 + 1128))(this, v14);
        sub_1025FAE0(v12);
      }
      else
      {
        DevWarning("Couldn't set relationship to unknown entity or class (%s)!\n", v5);
      }
      result = strtok(0, " ");
      v5 = result;
      if ( !result )
        return result;
    }
    return (char *)Warning(
                     "Can't parse relationship info (%s) - Expecting 'name [D_HT, D_FR, D_LI, D_NU] [1-99]'\n",
                     Source);
  }
  return result;
}
