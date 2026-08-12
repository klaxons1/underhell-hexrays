int __userpurge sub_100C0810@<eax>(int a1@<ecx>, int a2@<esi>, int a3)
{
  int v3; // edi
  int result; // eax
  _DWORD *v5; // ebx
  char *v6; // eax
  int v7; // esi
  int v8; // esi
  char *v9; // eax
  int v10; // edi
  int (__thiscall *v11)(int, char *, const char *, _DWORD); // edx
  int v12; // esi
  size_t v13; // ecx
  int i; // esi
  char *v15; // edi
  int j; // esi
  char *v17; // edi
  size_t v18; // [esp-10h] [ebp-D40h]
  _BYTE v20[2048]; // [esp+4h] [ebp-D2Ch] BYREF
  char v21[1024]; // [esp+804h] [ebp-52Ch] BYREF
  char String[256]; // [esp+C04h] [ebp-12Ch] BYREF
  _DWORD v23[3]; // [esp+D04h] [ebp-2Ch] BYREF
  int v24; // [esp+D10h] [ebp-20h]
  int v25; // [esp+D14h] [ebp-1Ch]
  int v26; // [esp+D18h] [ebp-18h]
  int v27; // [esp+D1Ch] [ebp-14h]
  int v28; // [esp+D20h] [ebp-10h]
  int v29; // [esp+D24h] [ebp-Ch]
  char *v30; // [esp+D28h] [ebp-8h]
  int v31; // [esp+D2Ch] [ebp-4h]

  v3 = a1;
  result = 0;
  v24 = a1;
  v26 = 0;
  if ( *(int *)(a1 + 444) > 0 )
  {
    v28 = 0;
    do
    {
      v5 = (_DWORD *)(v28 + *(_DWORD *)(v3 + 432));
      v6 = (char *)sub_100DDA40(v5[17]);
      v18 = v5[17];
      v7 = (int)v6;
      v30 = v6;
      v25 = -1;
      memset(v6, 0, v18);
      v27 = 0;
      if ( (int)v5[10] > 0 )
      {
        v31 = 0;
        do
        {
          v8 = *(_DWORD *)(v31 + v5[7] + 4);
          v29 = v31 + v5[7];
          v9 = (char *)sub_10231190(v5 + 20);
          sub_102282F0(String, v9, 0x100u);
          sub_10228240(String, 92);
          _strlwr(String);
          v10 = v5[19] + v8 * v5[17];
          if ( v8 != v25 )
          {
            v11 = *(int (__thiscall **)(int, char *, const char *, _DWORD))(*(_DWORD *)(dword_10413188 + 4) + 8);
            v25 = v8;
            v12 = v11(dword_10413188 + 4, String, "rb", 0);
            (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)(dword_10413188 + 4) + 16))(
              dword_10413188 + 4,
              v12,
              v10,
              1);
            (**(void (__thiscall ***)(int, void *, _DWORD, int))(dword_10413188 + 4))(
              dword_10413188 + 4,
              v30,
              v5[17],
              v12);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)(dword_10413188 + 4) + 12))(dword_10413188 + 4, v12);
          }
          v13 = *(unsigned __int16 *)(v29 + 10);
          if ( (unsigned __int16)v13 >= 0x800u )
            v13 = 2048;
          memcpy_0(v20, &v30[*(unsigned __int16 *)(v29 + 8)], v13);
          (*(void (__thiscall **)(int, _BYTE *, char *, int))(*(_DWORD *)dword_1047CA78 + 16))(
            dword_1047CA78,
            v20,
            v21,
            1024);
          v21[1023] = 0;
          if ( sub_10227FA0(v21, a3) )
          {
            Msg("found '%s' in %s\n", v21, String);
            for ( i = (*(int (__thiscall **)(int))(*(_DWORD *)dword_104131AC + 76))(dword_104131AC);
                  i != (*(int (__thiscall **)(int))(*(_DWORD *)dword_104131AC + 84))(dword_104131AC);
                  i = (*(int (__thiscall **)(int))(*(_DWORD *)dword_104131AC + 80))(dword_104131AC) )
            {
              v15 = (char *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_104131AC + 40))(
                              dword_104131AC,
                              i,
                              a2);
              sub_100C0170(v23, v15);
              if ( v23[0] == *(_DWORD *)v29 )
                Msg("    '%s' matches\n", v15);
              a2 = i;
            }
            for ( j = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA78 + 44))(dword_1047CA78);
                  j != -1;
                  j = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA78 + 48))(dword_1047CA78) )
            {
              v17 = (char *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA78 + 36))(
                              dword_1047CA78,
                              j,
                              a2);
              sub_100C0170(v23, v17);
              if ( v23[0] == *(_DWORD *)v29 )
                Msg("    '%s' localization matches\n", v17);
              a2 = j;
            }
          }
          v31 += 12;
          ++v27;
        }
        while ( v27 < v5[10] );
        v7 = (int)v30;
        v3 = v24;
      }
      sub_10034930(v7);
      v28 += 84;
      result = v26 + 1;
      v26 = result;
    }
    while ( result < *(_DWORD *)(v3 + 444) );
  }
  return result;
}
