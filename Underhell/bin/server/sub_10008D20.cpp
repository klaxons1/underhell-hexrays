int __cdecl sub_10008D20(char *a1, int a2, int *a3)
{
  const char *v3; // edi
  int v4; // esi
  int result; // eax
  int v6; // esi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // eax
  int *v11; // eax
  int v12; // edi
  int v13; // ebx
  const char *v14; // esi
  int v15; // edi
  int v16; // eax
  int *v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  char *v21; // [esp+Ch] [ebp-28h] BYREF
  int v22; // [esp+10h] [ebp-24h] BYREF
  int v23; // [esp+14h] [ebp-20h]
  int v24; // [esp+18h] [ebp-1Ch]
  int v25; // [esp+1Ch] [ebp-18h]
  int v26; // [esp+20h] [ebp-14h]
  int v27; // [esp+24h] [ebp-10h] BYREF
  int v28; // [esp+28h] [ebp-Ch]
  int v29; // [esp+2Ch] [ebp-8h]
  int v30; // [esp+30h] [ebp-4h]

  v3 = a1;
  if ( a1 )
  {
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v21 = a1;
    v4 = sub_100028F0((unsigned __int8 (__cdecl **)(int, int))&off_105FD4D0, (int)&v21);
    sub_102375F0(&v22);
    if ( v4 != -1 )
      return sub_100088A0(a3, (int *)(dword_105FD4D4 + 40 * v4 + 20));
  }
  if ( sub_1042A310(32) )
    v6 = sub_1042A330(a2);
  else
    v6 = 0;
  if ( dword_106B31D8 )
    v7 = dword_106B31D8 + 4;
  else
    v7 = 0;
  result = sub_1042A380(v7, a1, 0);
  if ( (_BYTE)result )
  {
    v8 = sub_1042A2F0(v6);
    v30 = v8;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    if ( !v8 )
      goto LABEL_36;
LABEL_14:
    v9 = sub_1042A070(v8);
    v10 = sub_10244B60(v9);
    if ( v10 < 0 )
      goto LABEL_34;
    v11 = (int *)(dword_10690148 + 8 * v10);
    if ( !v11 )
      goto LABEL_34;
    v12 = *v11;
    if ( *v11 == -1 )
      goto LABEL_34;
    v13 = sub_1042A2F0(v8);
    v29 = 0;
    v27 = v12;
    if ( !v13 )
      goto LABEL_33;
    while ( 1 )
    {
      v14 = (const char *)sub_1042A070(v13);
      v15 = sub_1042B460(0, (int)String);
      if ( _stricmp(v14, "remapactivity") )
      {
        if ( !_stricmp(v14, "extra") )
          v29 = sub_1042AFF0(v13);
        goto LABEL_31;
      }
      v16 = sub_10244B60(v15);
      if ( v16 >= 0 )
      {
        v17 = (int *)(dword_10690148 + 8 * v16);
        if ( v17 )
        {
          v18 = *v17;
          if ( v18 != -1 )
            goto LABEL_28;
        }
      }
      v19 = sub_10244B60(v15);
      if ( v19 < 0 )
        break;
      v20 = dword_10690148 + 8 * v19;
      if ( !v20 )
        break;
      if ( *(_WORD *)(v20 + 6) )
        goto LABEL_27;
      Warning("***\nShared<->Private Activity collision!\n***\n");
      v28 = -1;
LABEL_31:
      v13 = sub_1042A300(v13);
      if ( !v13 )
      {
        v8 = v30;
LABEL_33:
        sub_1013A0E0(a3[3], &v27);
LABEL_34:
        v30 = sub_1042A300(v8);
        if ( v30 )
        {
          v8 = v30;
          goto LABEL_14;
        }
        v3 = a1;
LABEL_36:
        sub_100088A0(&v22, a3);
        sub_10008C60(&off_105FD4D0, v3, &v22);
        return sub_102375F0(&v22);
      }
    }
    v20 = sub_100031B0(v15, dword_10690144 + 1, 1u);
LABEL_27:
    v18 = *(_DWORD *)v20;
LABEL_28:
    v28 = v18;
    goto LABEL_31;
  }
  return result;
}
