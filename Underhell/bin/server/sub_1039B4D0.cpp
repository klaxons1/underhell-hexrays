int __thiscall sub_1039B4D0(int *this)
{
  int v1; // ebx
  int v3; // edi
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // esi
  const char *v8; // edi
  const char *v9; // esi
  int v10; // esi
  int result; // eax
  int v12; // [esp+8h] [ebp-3Ch] BYREF
  int v13; // [esp+Ch] [ebp-38h]
  int v14; // [esp+10h] [ebp-34h]
  int v15; // [esp+14h] [ebp-30h]
  int v16; // [esp+18h] [ebp-2Ch]
  __int16 v17; // [esp+1Ch] [ebp-28h]
  char v18; // [esp+1Eh] [ebp-26h]
  int v19; // [esp+20h] [ebp-24h] BYREF
  int v20; // [esp+24h] [ebp-20h]
  int v21; // [esp+28h] [ebp-1Ch]
  int v22; // [esp+2Ch] [ebp-18h]
  int v23; // [esp+30h] [ebp-14h]
  int *v24; // [esp+34h] [ebp-10h]
  int v25; // [esp+38h] [ebp-Ch]
  int v26; // [esp+3Ch] [ebp-8h]
  int v27; // [esp+40h] [ebp-4h]

  v1 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  sub_10008D20("scripts/actremap.txt", (int)"npc_playercompanion", &v19);
  v26 = 0;
  if ( v22 > 0 )
  {
    v3 = 0;
    v24 = this + 1107;
    v25 = 0;
    do
    {
      v4 = *(_DWORD *)(v3 + v19);
      v5 = *(_DWORD *)(v3 + v19 + 4);
      v6 = *(_DWORD *)(v3 + v19 + 8);
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v12 = v4;
      v13 = v5;
      v14 = v6;
      if ( v6 )
      {
        v7 = sub_1042A2F0(v6);
        v27 = v7;
        if ( v7 )
        {
          while ( 1 )
          {
            v8 = (const char *)sub_1042A070(v7);
            v9 = (const char *)sub_1042B460(0, (int)String);
            if ( !_stricmp(v8, "readiness") )
            {
              v1 |= 1u;
              if ( !_stricmp(v9, "AIRL_PANIC") )
              {
                v16 = -2;
              }
              else if ( !_stricmp(v9, "AIRL_STEALTH") )
              {
                v16 = -1;
              }
              else if ( !_stricmp(v9, "AIRL_RELAXED") )
              {
                v16 = 0;
              }
              else if ( !_stricmp(v9, "AIRL_STIMULATED") )
              {
                v16 = 1;
              }
              else if ( !_stricmp(v9, "AIRL_AGITATED") )
              {
                v16 = 2;
              }
            }
            else if ( !_stricmp(v8, "aiming") )
            {
              v1 |= 2u;
              if ( !_stricmp(v9, "TRS_NONE") )
              {
                v1 &= ~2u;
              }
              else if ( !_stricmp(v9, "TRS_FALSE") || !_stricmp(v9, "FALSE") )
              {
                LOBYTE(v17) = 0;
              }
              else if ( !_stricmp(v9, "TRS_TRUE") || !_stricmp(v9, "TRUE") )
              {
                LOBYTE(v17) = 1;
              }
            }
            else if ( !_stricmp(v8, "weaponrequired") )
            {
              v1 |= 4u;
              if ( !_stricmp(v9, "TRUE") )
              {
                HIBYTE(v17) = 1;
              }
              else if ( !_stricmp(v9, "FALSE") )
              {
                HIBYTE(v17) = 0;
              }
            }
            else if ( !_stricmp(v8, "invehicle") )
            {
              v1 |= 8u;
              if ( !_stricmp(v9, "TRUE") )
              {
                v18 = 1;
              }
              else if ( !_stricmp(v9, "FALSE") )
              {
                v18 = 0;
              }
            }
            v27 = sub_1042A300(v27);
            if ( !v27 )
              break;
            v7 = v27;
          }
          v3 = v25;
          v15 = v1;
          v1 = 0;
        }
      }
      v10 = sub_10002060(v13);
      if ( sub_10008FB0(v10) == -1 )
        sub_10008F60(v10, v13);
      sub_1039A340(v24, v24[3], &v12);
      v3 += 12;
      ++v26;
      v25 = v3;
    }
    while ( v26 < v22 );
  }
  result = v19;
  v22 = 0;
  if ( v21 >= 0 )
  {
    if ( v19 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v19);
      result = 0;
      v19 = 0;
    }
    v20 = 0;
  }
  v23 = result;
  if ( v21 >= 0 )
  {
    if ( result )
      return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
  }
  return result;
}
