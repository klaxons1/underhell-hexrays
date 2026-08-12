void __thiscall sub_10180C50(unsigned int *this)
{
  unsigned int *v1; // ebx
  bool v2; // zf
  int v3; // edi
  void (__thiscall *v4)(int); // edx
  _BYTE *v5; // eax
  _DWORD *v6; // eax
  float *v7; // esi
  int v8; // eax
  unsigned int v9; // eax
  int v10; // edi
  int v11; // edi
  _BYTE *v12; // eax
  int v13; // eax
  int v14; // eax
  _BYTE *v15; // eax
  int v16; // ecx
  int v17; // edi
  char *v18; // ebx
  unsigned int v19; // eax
  int v20; // ecx
  _DWORD *v21; // edi
  char *v22; // eax
  char *v23; // esi
  int v24; // eax
  int v25; // eax
  unsigned int v26; // edi
  signed int v27; // eax
  unsigned int v28; // ecx
  int v29; // eax
  unsigned int **v30; // eax
  unsigned int *v31; // [esp+18h] [ebp-Ch] BYREF
  _DWORD *v32; // [esp+1Ch] [ebp-8h]
  int v33; // [esp+20h] [ebp-4h]

  v1 = this;
  v2 = this[70] == 0;
  v31 = this;
  if ( v2 )
    return;
  v3 = dword_1047CA8C;
  v4 = *(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100);
  v33 = dword_1047CA8C;
  v4(dword_1047CA8C);
  (*(void (__thiscall **)(unsigned int *))(*v1 + 868))(v1);
  v5 = (_BYTE *)(*(int (__thiscall **)(unsigned int *))(*v1 + 904))(v1);
  v32 = v5;
  if ( !v5 || !*v5 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
    return;
  }
  v6 = sub_10034900(0xBC8u);
  if ( !v6 )
    goto LABEL_8;
  v7 = (float *)sub_1017E900(v6);
  if ( !v7 )
    goto LABEL_8;
  if ( !(*(unsigned __int8 (__thiscall **)(float *, _DWORD *, int))(*(_DWORD *)v7 + 324))(v7, v32, 7) )
  {
    sub_10038340(v7);
LABEL_8:
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
    return;
  }
  sub_1000F020(v1 + 71, (int)v7);
  sub_10035350(v7);
  sub_1000DF30(v7, 32);
  v8 = *(_DWORD *)(v1[70] + 8);
  if ( v8 >= 0 )
    *((_DWORD *)v7 + 299) = v8;
  v9 = v1[70];
  if ( *(int *)(v9 + 76) > 0 )
  {
    v10 = v1[79];
    v32 = (_DWORD *)(v9 + 64);
    if ( sub_1017EB00((_DWORD *)(v9 + 64), v10) )
    {
      v11 = *(_DWORD *)(*v32 + 4 * v10);
      v12 = *(_BYTE **)(v11 + 8);
      if ( v12 && *v12 )
      {
        v13 = sub_10002040(*(_DWORD *)(v11 + 8));
        v14 = sub_10029CF0(v7, v13);
        goto LABEL_20;
      }
      v15 = *(_BYTE **)(v11 + 4);
      if ( v15 && *v15 )
      {
        v14 = sub_10029D40(v7, *(char **)(v11 + 4));
LABEL_20:
        if ( v14 != -1 )
        {
          sub_10029860((int)v7, v14);
          sub_10029AE0((int)v7);
          sub_10025680(v7, 0.0);
          v16 = *(_DWORD *)(v11 + 12);
          if ( v16 )
          {
            v17 = sub_10229C90(v16);
            if ( v17 )
            {
              do
              {
                v18 = (char *)sub_10229A00(v17);
                sub_1022A940(0, 0.0);
                sub_1017F350((int)v7, v18, 0.0);
                v17 = sub_1021F0F0(v17);
              }
              while ( v17 );
              v1 = v31;
            }
          }
          v7[24] = *((float *)off_103DC81C + 3);
        }
      }
    }
    v3 = v33;
  }
  v19 = v1[70];
  v20 = 0;
  v32 = 0;
  if ( *(int *)(v19 + 96) > 0 )
  {
    do
    {
      v21 = *(_DWORD **)(*(_DWORD *)(v19 + 84) + 4 * v20);
      v22 = (char *)sub_10034900(0x7A8u);
      if ( v22 )
      {
        v23 = sub_1002F0F0(v22);
        if ( v23 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(char *, _DWORD, int))(*(_DWORD *)v23 + 324))(v23, *v21, 7) )
          {
            sub_10035350(v23);
            sub_1000DF30(v23, 32);
            v24 = sub_1006BE10(v1 + 71);
            sub_1000FBC0((int)v23, v24, 1);
            v25 = v21[1];
            if ( v25 >= 0 )
              *((_DWORD *)v23 + 299) = v25;
            *((float *)v23 + 24) = *((float *)off_103DC81C + 3);
            sub_10115750(&v31, (int)v23);
            v26 = v1[75];
            v27 = v1[73];
            if ( (int)(v26 + 1) > v27 )
              sub_1010AFF0(v1 + 72, v26 - v27 + 1);
            ++v1[75];
            v28 = v1[72];
            v29 = v1[75] - v26 - 1;
            v1[76] = v28;
            if ( v29 > 0 )
              memcpy((void *)(v28 + 4 * v26 + 4), (const void *)(v28 + 4 * v26), 4 * v29);
            v30 = (unsigned int **)(v1[72] + 4 * v26);
            if ( v30 )
              *v30 = v31;
          }
          else
          {
            sub_10038340(v23);
          }
        }
      }
      v19 = v1[70];
      v20 = (int)v32 + 1;
      v32 = (_DWORD *)v20;
    }
    while ( v20 < *(_DWORD *)(v19 + 96) );
    v3 = v33;
  }
  sub_1017F630((int)v1);
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
}
