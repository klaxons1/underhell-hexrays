void __thiscall sub_100A5B80(void *this, const char *a2, int a3, int a4)
{
  int v4; // ebx
  int *v5; // edi
  char *v6; // esi
  int v7; // ebx
  int v8; // eax
  char v9[128]; // [esp+Ch] [ebp-114h] BYREF
  char Destination[128]; // [esp+8Ch] [ebp-94h] BYREF
  _DWORD v11[4]; // [esp+10Ch] [ebp-14h] BYREF
  int v12; // [esp+11Ch] [ebp-4h]
  int v13; // [esp+12Ch] [ebp+Ch]

  v4 = (int)this;
  v12 = (int)this;
  sub_10430E10(a2);
  v11[1] = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31D8 + 140))(dword_106B31D8, a2);
  v11[0] = a3;
  v11[2] = a3;
  v5 = (int *)(v4 + 1324);
  v11[3] = 0;
  sub_102A4E30(0, v11);
  if ( *(_DWORD *)(dword_10694224 + 48) )
    DevMsg("Reading: %s\n", a2);
  v6 = (char *)(v4 + 116);
  while ( 1 )
  {
    if ( *(_BYTE *)(v4 + 1320) )
    {
      *(_BYTE *)(v4 + 1320) = 0;
    }
    else if ( *(int *)(v4 + 1336) > 0 )
    {
      v13 = *v5;
      *(_DWORD *)(v13 + 8) = (*(int (__thiscall **)(int, _DWORD, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
                               dword_106B31D0,
                               *(_DWORD *)(*v5 + 8),
                               v6,
                               1204);
      ++*(_DWORD *)(*v5 + 12);
    }
    if ( !*v6 )
      break;
    if ( !_stricmp(v6, "#include") )
    {
      sub_100A0670((void *)v4, a4);
    }
    else if ( !_stricmp(v6, "response") )
    {
      sub_100A5330(v4);
    }
    else if ( !_stricmp(v6, "criterion") || !_stricmp(v6, "criteria") )
    {
      if ( *(_BYTE *)(v4 + 1320) )
      {
        *(_BYTE *)(v4 + 1320) = 0;
      }
      else if ( *(int *)(v4 + 1336) > 0 )
      {
        v7 = *v5;
        *(_DWORD *)(v7 + 8) = (*(int (__thiscall **)(int, _DWORD, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
                                dword_106B31D0,
                                *(_DWORD *)(*v5 + 8),
                                v6,
                                1204);
        ++*(_DWORD *)(*v5 + 12);
        v4 = v12;
      }
      sub_104299C0(Destination, v6, 0x80u);
      sub_100A4600(v4, Destination);
    }
    else if ( !_stricmp(v6, "rule") )
    {
      sub_100A4A20(v4);
    }
    else
    {
      if ( _stricmp(v6, "enumeration") )
      {
        Error(
          "CResponseSystem::LoadFromBuffer:  Unknown entry type '%s', expecting 'response', 'criterion', 'enumeration' or"
          " 'rules' in file %s(offset:%i)\n",
          v6,
          a2,
          *(_DWORD *)(*v5 + 8) - *(_DWORD *)*v5);
        break;
      }
      sub_100A4320(v4);
    }
  }
  if ( *(_DWORD *)(v4 + 1336) == 1 )
  {
    v8 = *v5;
    v9[0] = 0;
    if ( !(*(unsigned __int8 (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D8 + 144))(
            dword_106B31D8,
            v8 + 4,
            v9,
            256) )
      v9[0] = 0;
    DevMsg(
      1,
      "CResponseSystem:  %s (%i rules, %i criteria, and %i responses)\n",
      v9,
      *(__int16 *)(v4 + 78),
      *(__int16 *)(v4 + 50),
      *(__int16 *)(v4 + 22));
    if ( *(_DWORD *)(dword_10694224 + 48) )
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 20))(v4);
  }
  if ( *(int *)(v4 + 1336) > 0 )
  {
    if ( v5[3] - 1 > 0 )
      memcpy((void *)*v5, (const void *)(*v5 + 16), 16 * (v5[3] - 1));
    --v5[3];
  }
}
