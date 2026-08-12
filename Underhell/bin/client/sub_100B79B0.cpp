void __userpurge sub_100B79B0(_DWORD *a1@<ecx>, int a2@<ebx>, int *a3, _DWORD *a4, int a5, _DWORD *a6)
{
  _DWORD *v6; // esi
  _DWORD *v7; // edi
  int *v8; // edi
  int (*v9)(void); // ecx
  const char *v10; // eax
  const char *v11; // ebx
  char i; // al
  int v13; // eax
  char **v14; // esi
  int v15; // ebx
  char v16; // al
  bool v17; // zf
  int v18; // [esp-4h] [ebp-324h]
  char Buffer[512]; // [esp+8h] [ebp-318h] BYREF
  char Destination[256]; // [esp+208h] [ebp-118h] BYREF
  int v21; // [esp+308h] [ebp-18h] BYREF
  int v22; // [esp+30Ch] [ebp-14h]
  int *v23; // [esp+310h] [ebp-10h]
  int v24; // [esp+314h] [ebp-Ch]
  _DWORD *v25; // [esp+318h] [ebp-8h]
  int v26; // [esp+31Ch] [ebp-4h] BYREF

  v6 = a6;
  v7 = a1;
  v25 = a1;
  if ( a6 )
  {
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, a1[63], a2);
    while ( 1 )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 72))(
        dword_1047CA6C,
        *(_DWORD *)((char *)v7 + 265));
      v8 = a3;
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, *a3, *a4);
      v9 = (int (*)(void))v6[6];
      v10 = Locale;
      if ( v9 )
        v10 = (const char *)v9();
      v11 = v10;
      for ( i = *v10; i; ++v11 )
      {
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA6C + 92))(
          dword_1047CA6C,
          (unsigned __int16)i,
          0);
        i = v11[1];
      }
      v18 = v25[63];
      *a4 += (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C) + 1;
      *a3 += 10;
      v13 = v6[3];
      if ( v13 > 0 )
      {
        v24 = 0;
        v22 = v13;
        do
        {
          v14 = (char **)(v24 + *v6);
          v15 = 0;
          v26 = 0;
          v23 = 0;
          if ( sub_10229D00(32) )
            v15 = sub_10229D20(*v14);
          if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)a5 + 44))(a5, v15) )
          {
            if ( sub_1022A6A0(*v14, 0) && sub_1022AEE0(0) == 6 )
            {
              v26 = *(_DWORD *)sub_1022AA10((int)&v21, 0);
              sub_10228370(Destination, 0x100u, "%i, %i, %i, %i", v26);
              v8 = a3;
              v23 = &v26;
            }
            else
            {
              v16 = sub_1022B4C0(0, (int)Locale);
              sub_10228370(Destination, 0x100u, "%s", v16);
              v8 = a3;
            }
          }
          else
          {
            sub_102282F0(Destination, "???", 0x100u);
          }
          sub_10228370(Buffer, 0x200u, "%-30s %-20s (%s)", (char)*v14);
          sub_1022AF00(v15);
          sub_100B7840(v25, v8, a4, (int)Buffer, v23);
          v24 += 24;
          v17 = v22-- == 1;
          v6 = a6;
        }
        while ( !v17 );
      }
      *v8 -= 10;
      v6 = (_DWORD *)v6[5];
      if ( !v6 )
        break;
      a6 = v6;
      v7 = v25;
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, v25[63], v18);
    }
  }
}
