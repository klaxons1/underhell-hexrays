int __thiscall sub_101198C0(float *this)
{
  float *v1; // ebx
  void (__thiscall *v2)(int, int (__cdecl *)(int, char *, int)); // edx
  int result; // eax
  const char *v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // esi
  const char *v8; // edi
  int v9; // eax
  int *v10; // eax
  char *v11; // ebx
  float *v12; // esi
  int v13; // ecx
  int v14; // edi
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  _DWORD *v18; // edi
  int v19; // eax
  int i; // esi
  unsigned int v21; // eax
  int v22; // ecx
  int v23; // [esp-8h] [ebp-21Ch]
  char Buffer[512]; // [esp+4h] [ebp-210h] BYREF
  int v25; // [esp+204h] [ebp-10h]
  int v26; // [esp+208h] [ebp-Ch]
  float *v27; // [esp+20Ch] [ebp-8h]
  int v28; // [esp+210h] [ebp-4h]

  v1 = this;
  v2 = *(void (__thiscall **)(int, int (__cdecl *)(int, char *, int)))(*(_DWORD *)cvar + 72);
  v27 = this;
  v2(cvar, sub_10119260);
  v1[8] = 0.0;
  v1[9] = 0.0;
  v1[22] = NAN;
  result = sub_1012BF20(0, "commentary_semaphore", 0, 0, 0, 0);
  if ( !result )
  {
    *(_DWORD *)(sub_101811E0("info_target", -1) + 260) = "commentary_semaphore";
    LOBYTE(v25) = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 212))(dword_106B31D0, 0);
    v4 = *(const char **)(dword_106B31C8 + 60);
    if ( !v4 )
      v4 = String;
    sub_10429A00(Buffer, 0x200u, "maps/%s_commentary.txt", (char)v4);
    if ( sub_1042A310(32) )
      v5 = sub_1042A330("Commentary");
    else
      v5 = 0;
    if ( dword_106B31D8 )
      v6 = dword_106B31D8 + 4;
    else
      v6 = 0;
    if ( (unsigned __int8)sub_1042A380(v6, Buffer, "MOD") )
    {
      Msg("Commentary: Loading commentary data from %s. \n", Buffer);
      v7 = sub_1042A2F0(v5);
      v28 = v7;
      if ( v7 )
      {
        while ( 1 )
        {
          v8 = (const char *)sub_1042A070(v7);
          if ( sub_104291C0(v8, "trackinfo", 9) )
          {
            if ( sub_1042ACB0("classname", 0) )
              v8 = (const char *)sub_1042B460(0, (int)String);
            v10 = (int *)sub_101811E0(v8, -1);
            v11 = (char *)v10;
            if ( v10 )
            {
              v23 = v7;
              v12 = v27;
              sub_10117320(v27, v10, v23);
              sub_10260750(v11);
              v13 = *(_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)v11 + 8))(v11);
              v14 = *((_DWORD *)v12 + 18);
              v15 = *((_DWORD *)v12 + 16);
              v26 = v13;
              if ( v14 + 1 > v15 )
                sub_102ABFC0(v14 - v15 + 1);
              ++*((_DWORD *)v12 + 18);
              v16 = *((_DWORD *)v12 + 15);
              v17 = *((_DWORD *)v12 + 18) - v14 - 1;
              *((_DWORD *)v12 + 19) = v16;
              if ( v17 > 0 )
                memcpy((void *)(v16 + 4 * v14 + 4), (const void *)(v16 + 4 * v14), 4 * v17);
              v18 = (_DWORD *)(*((_DWORD *)v12 + 15) + 4 * v14);
              if ( v18 )
                *v18 = v26;
              v19 = __RTDynamicCast(
                      (int)v11,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                      (int)&CPointCommentaryNode `RTTI Type Descriptor',
                      0);
              if ( v19 )
                sub_10118980(v19, ++*((_DWORD *)v12 + 4));
              v7 = v28;
            }
            else
            {
              Warning("Commentary: Failed to spawn commentary entity, type: '%s'\n", v8);
            }
            v9 = sub_1042A300(v7);
            v1 = v27;
          }
          else
          {
            v9 = sub_1042A300(v7);
          }
          v28 = v9;
          if ( !v9 )
            break;
          v7 = v28;
        }
      }
      for ( i = 0; i < *((_DWORD *)v1 + 18); ++i )
      {
        v21 = *(_DWORD *)(*((_DWORD *)v1 + 15) + 4 * i);
        if ( v21 == -1 || off_1061BE18[4 * (v21 & 0xFFF) + 2] != v21 >> 12 )
          v22 = 0;
        else
          v22 = off_1061BE18[4 * (*(_DWORD *)(*((_DWORD *)v1 + 15) + 4 * i) & 0xFFF) + 1];
        (*(void (__thiscall **)(int))(*(_DWORD *)v22 + 136))(v22);
      }
    }
    else
    {
      Msg("Commentary: Could not find commentary data file '%s'. \n", Buffer);
    }
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 212))(dword_106B31D0, v25);
  }
  return result;
}
