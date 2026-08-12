int __thiscall sub_1011E890(void *this, char *a2)
{
  void *v2; // ebx
  int result; // eax
  int v4; // esi
  int v5; // edi
  int v6; // eax
  int v7; // edi
  void *v8; // eax
  int v9; // ebx
  int v10; // ecx
  int *v11; // ebx
  int v12; // eax
  const char *v13; // edi
  char *v14; // eax
  int j; // esi
  const char *v16; // eax
  int v17; // eax
  int v18; // eax
  const char *v19; // eax
  const char *v20; // eax
  const char *v21; // [esp+0h] [ebp-50h]
  int v22; // [esp+10h] [ebp-40h] BYREF
  int v23; // [esp+14h] [ebp-3Ch] BYREF
  int v24; // [esp+18h] [ebp-38h]
  int v25; // [esp+1Ch] [ebp-34h]
  int v26; // [esp+20h] [ebp-30h]
  int v27; // [esp+24h] [ebp-2Ch]
  __int16 v28; // [esp+28h] [ebp-28h] BYREF
  int v29; // [esp+2Ch] [ebp-24h]
  float v30; // [esp+30h] [ebp-20h]
  char *v31; // [esp+34h] [ebp-1Ch] BYREF
  int v32; // [esp+38h] [ebp-18h]
  int v33; // [esp+3Ch] [ebp-14h]
  void *v34; // [esp+40h] [ebp-10h]
  int v35; // [esp+44h] [ebp-Ch]
  int i; // [esp+48h] [ebp-8h]
  int var2; // [esp+4Eh] [ebp-2h] BYREF

  v2 = this;
  v34 = this;
  result = sub_1042A310(32);
  v4 = 0;
  if ( result )
  {
    result = sub_1042A330(a2);
    v5 = result;
    v35 = result;
    if ( result )
    {
      v33 = 0;
      if ( dword_106B31D8 )
        v6 = dword_106B31D8 + 4;
      else
        v6 = 0;
      if ( !(unsigned __int8)sub_1042A380(v6, a2, 0) )
      {
        Msg("CDecalEmitterSystem::LoadDecalsFromScript:  Unable to load '%s'\n", a2);
        goto LABEL_31;
      }
      for ( i = v5; ; v5 = i )
      {
        if ( sub_1042A2F0(v5) )
        {
          v31 = (char *)sub_1042A070(v5);
          if ( !_stricmp(v31, "TranslationData") )
          {
            v33 = v5;
          }
          else
          {
            v23 = 0;
            v24 = 0;
            v25 = 0;
            v26 = 0;
            v27 = 0;
            v7 = sub_1042A2F0(v5);
            if ( v7 )
            {
              do
              {
                v29 = -1;
                v8 = (void *)sub_1042A070(v7);
                v28 = *(_WORD *)sub_1042F910((int)&var2, v8);
                sub_1042AE90(0, 0.0);
                v30 = 0.0;
                v32 = sub_1011DBB0((int *)v2 + 4, *((_DWORD *)v2 + 7), (int)&v28);
                v9 = v4;
                if ( v4 + 1 > v24 )
                {
                  sub_102ABFC0(v4 - v24 + 1);
                  v4 = v26;
                }
                v10 = v23;
                v26 = ++v4;
                v27 = v23;
                if ( v4 - v9 - 1 > 0 )
                {
                  memcpy((void *)(v23 + 4 * v9 + 4), (const void *)(v23 + 4 * v9), 4 * (v4 - v9 - 1));
                  v10 = v23;
                }
                v11 = (int *)(v10 + 4 * v9);
                if ( v11 )
                  *v11 = v32;
                v12 = sub_1042A300(v7);
                v2 = v34;
                v7 = v12;
              }
              while ( v12 );
            }
            v13 = v31;
            if ( v31
              && (v14 = (char *)(*(int (__thiscall **)(_DWORD, unsigned int))(*g_pMemAlloc + 4))(
                                  g_pMemAlloc,
                                  strlen(v31) + 1)) != 0 )
            {
              strcpy(v14, v13);
            }
            else
            {
              v14 = 0;
            }
            v31 = v14;
            sub_1011E7A0((int)v2 + 36, (int *)&v31, &v23);
            if ( v25 >= 0 && v23 )
              (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v23);
            v5 = i;
            v4 = 0;
          }
        }
        i = sub_1042A300(v5);
        if ( !i )
          break;
      }
      if ( !v33 )
      {
        v5 = v35;
LABEL_31:
        Msg("CDecalEmitterSystem::LoadDecalsFromScript:  Script '%s' missing section '%s'\n", a2, "TranslationData");
        return sub_1042B1A0(v5);
      }
      for ( j = sub_1042A2F0(v33); j; j = sub_1042A300(j) )
      {
        v16 = (const char *)sub_1042B460(0, (int)String);
        if ( _stricmp(v16, String) )
        {
          v17 = sub_1042B460(0, (int)String);
          if ( v17 )
          {
            v22 = v17;
            v23 = 0;
            v24 = 0;
            v25 = 0;
            v26 = 0;
            v27 = 0;
            a2 = (char *)sub_1011DC30((unsigned __int8 (__cdecl **)(int, int))v2 + 9, (int)&v22);
            sub_102375F0(&v23);
            v18 = (int)a2;
          }
          else
          {
            v18 = -1;
          }
          a2 = (char *)v18;
          if ( v18 == -1 )
          {
            v21 = (const char *)sub_1042B460(0, (int)String);
            v20 = (const char *)sub_1042A070(j);
            Msg(
              "CDecalEmitterSystem::LoadDecalsFromScript:  Translation for game material type '%s' references unknown decal '%s'\n",
              v20,
              v21);
          }
          else
          {
            v19 = (const char *)sub_1042A070(j);
            sub_100BC380((int)v2 + 128, v19, &a2);
          }
        }
      }
      return sub_1042B1A0(v35);
    }
  }
  return result;
}
