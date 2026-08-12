void sub_10045B50()
{
  float *v0; // ebx
  float *v1; // esi
  int v2; // eax
  int v3; // eax
  unsigned int v4; // eax
  char *v5; // ecx
  unsigned int v6; // eax
  int v7; // eax
  unsigned int v8; // ecx
  int *v9; // eax
  unsigned int v10; // ecx
  int v11; // esi
  int v12; // eax
  float *v13; // edi
  int v14; // eax
  int v15; // eax
  unsigned int v16; // eax
  int v17; // ecx
  int v18; // edi
  float *v19; // esi
  double v20; // [esp+10h] [ebp-28h]
  double v21; // [esp+10h] [ebp-28h]
  int v22; // [esp+30h] [ebp-8h]
  int v23; // [esp+30h] [ebp-8h]
  char v24; // [esp+37h] [ebp-1h]

  v0 = (float *)dword_10407394;
  if ( dword_10407394 )
  {
    Msg("Client Soundscape data dump:\n");
    v1 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)v0 + 36))(v0);
    v2 = (*(int (__thiscall **)(float *))(*(_DWORD *)v0 + 36))(v0);
    v3 = (*(int (__thiscall **)(float *, _DWORD, _DWORD))(*(_DWORD *)v0 + 36))(
           v0,
           COERCE_UNSIGNED_INT64(*(float *)(v2 + 8)),
           HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 8))));
    Msg("   Position: %.2f %.2f %.2f\n", *v1, *(float *)(v3 + 4), v20);
    Msg("   soundscape index: %d\n", *((_DWORD *)v0 + 980));
    v4 = *((_DWORD *)v0 + 982);
    if ( v4 != -1
      && (v5 = (char *)off_103DCD74 + 16 * ((_DWORD)v0[982] & 0xFFF) + 4,
          v6 = v4 >> 12,
          *((_DWORD *)off_103DCD74 + 4 * ((_DWORD)v0[982] & 0xFFF) + 2) == v6)
      && *(_DWORD *)v5 )
    {
      if ( *((_DWORD *)off_103DCD74 + 4 * ((_DWORD)v0[982] & 0xFFF) + 2) == v6 )
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)v5 + 8) + 36))(*(_DWORD *)v5 + 8);
      else
        v7 = (*(int (**)(void))(MEMORY[8] + 36))();
    }
    else
    {
      v7 = -1;
    }
    Msg("   entity index: %d\n", v7);
    v8 = *((_DWORD *)v0 + 982);
    if ( v8 != -1 )
    {
      v9 = (int *)((char *)off_103DCD74 + 16 * ((_DWORD)v0[982] & 0xFFF) + 4);
      v10 = v8 >> 12;
      if ( *((_DWORD *)off_103DCD74 + 4 * ((_DWORD)v0[982] & 0xFFF) + 2) == v10 )
      {
        v11 = 0;
        if ( *v9 )
        {
          v22 = *((_DWORD *)off_103DCD74 + 4 * ((_DWORD)v0[982] & 0xFFF) + 2) == v10 ? *v9 : 0;
          if ( *((_DWORD *)off_103DCD74 + 4 * ((_DWORD)v0[982] & 0xFFF) + 2) == v10 )
          {
            v11 = *v9;
            v12 = *v9;
          }
          else
          {
            v12 = 0;
          }
          v13 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 36))(v12);
          v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 36))(v22);
          v15 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v11 + 36))(
                  v11,
                  COERCE_UNSIGNED_INT64(*(float *)(v14 + 8)),
                  HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v14 + 8))));
          Msg("   entity pos: %.2f %.2f %.2f\n", *v13, *(float *)(v15 + 4), v21);
          v16 = *((_DWORD *)v0 + 982);
          if ( v16 == -1 || *((_DWORD *)off_103DCD74 + 4 * ((_DWORD)v0[982] & 0xFFF) + 2) != v16 >> 12 )
            v17 = 0;
          else
            v17 = *((_DWORD *)off_103DCD74 + 4 * ((_DWORD)v0[982] & 0xFFF) + 1);
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(v17 + 8) + 32))(v17 + 8) )
            Msg("     ENTITY IS DORMANT\n");
        }
      }
    }
    v24 = 0;
    v18 = 0;
    v23 = 1;
    v19 = v0 + 956;
    do
    {
      if ( (v23 & (_DWORD)v0[981]) != 0 )
      {
        if ( !v24 )
        {
          Msg("   Sound Positions:\n");
          v24 = 1;
        }
        Msg("   %d: %.2f %.2f %.2f\n", v18, *v19, v19[1], v19[2]);
      }
      ++v18;
      v19 += 3;
      v23 = __ROL4__(v23, 1);
    }
    while ( v18 < 8 );
    Msg("End dump.\n");
  }
}
