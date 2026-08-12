void __userpurge sub_1004E640(_DWORD **a1@<ecx>, float *a2@<edi>, int *a3)
{
  int v3; // eax
  _DWORD **v4; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  int *v7; // edx
  int v8; // ecx
  int *v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  _DWORD *v14; // ecx
  _DWORD *v15; // edi
  int v16; // [esp-14h] [ebp-70h]
  int v17; // [esp-10h] [ebp-6Ch]
  int v18; // [esp-10h] [ebp-6Ch]
  int v19; // [esp-10h] [ebp-6Ch]
  int v20; // [esp-Ch] [ebp-68h]
  int v21; // [esp-8h] [ebp-64h]
  float v22; // [esp+4h] [ebp-58h]
  int v23[3]; // [esp+14h] [ebp-48h] BYREF
  int v24[3]; // [esp+20h] [ebp-3Ch] BYREF
  float v25[3]; // [esp+2Ch] [ebp-30h] BYREF
  float v26[3]; // [esp+38h] [ebp-24h] BYREF
  int v27[3]; // [esp+44h] [ebp-18h] BYREF
  int v28[3]; // [esp+50h] [ebp-Ch] BYREF
  int savedregs; // [esp+5Ch] [ebp+0h] BYREF

  v3 = *a3;
  v4 = a1;
  if ( *a3 > 100001 )
  {
    switch ( v3 )
    {
      case 100003:
        goto LABEL_36;
      case 100006:
        if ( (unsigned __int8)sub_102DC130(a1 + 6) )
        {
          (*(void (__thiscall **)(_DWORD *, const char *))(*v4[1] + 1312))(v4[1], "No rally point.");
        }
        else
        {
          if ( sub_1004C4B0((int)v4) )
            ((void (__thiscall *)(_DWORD **, _DWORD))(*v4)[3])(v4, 0);
          if ( !sub_1004CA30((int)v4)
            && (*(int (__thiscall **)(_DWORD *))(*v4[1] + 368))(v4[1])
            && !*(_DWORD *)(sub_1026A890(v4 + 6) + 804)
            && !sub_1004C220(v4, 13) )
          {
            sub_1004BD70((int)v4, 66, 0.0);
          }
        }
        break;
      case 100007:
      case 100009:
        if ( sub_1026A890(a1 + 5)
          && (*(_BYTE *)(sub_1026A890(v4 + 5) + 854) || *(_BYTE *)(sub_1026A890(v4 + 5) + 836) && sub_1004C220(v4, 10)) )
        {
          ((void (__thiscall *)(_DWORD **, _DWORD))(*v4)[3])(v4, 0);
        }
        if ( sub_10022810((float *)v4[1]) && (*a3 == 100009 || !*(_BYTE *)(sub_1026A890(v4 + 5) + 844)) )
          goto LABEL_39;
        break;
      default:
        goto LABEL_24;
    }
  }
  else
  {
    if ( *a3 != 100001 )
    {
      if ( v3 != 129 )
      {
LABEL_24:
        sub_1004B450(a1, (int)a3);
        return;
      }
      if ( *(_DWORD *)(dword_10691EDC + 48) )
      {
        if ( (unsigned __int8)sub_1004B510(a1, 100003, 1) )
        {
          v17 = sub_1007DD50(v4[1][647]);
          v5 = sub_1004BCA0(v4, v24);
          sub_1011BC50((int)v5, v17, 255, 0, 0, 1, 0.1);
          v6 = v4[1];
          *(float *)v28 = 10.0;
          *(float *)&v28[1] = 10.0;
          *(float *)&v28[2] = 10.0;
          v7 = v28;
          *(float *)v27 = -10.0;
          *(float *)&v27[1] = -10.0;
          *(float *)&v27[2] = -10.0;
          v8 = v6[647];
          v9 = v27;
          v22 = 0.1;
          v21 = 0;
          v20 = 255;
        }
        else
        {
          if ( !(unsigned __int8)sub_1004B510(v4, 100000, 1) )
            goto LABEL_10;
          v18 = sub_1007DD50(v4[1][647]);
          v10 = sub_1004BCA0(v4, v23);
          sub_1011BC50((int)v10, v18, 0, 255, 0, 1, 0.1);
          v11 = v4[1];
          v26[0] = 10.0;
          v26[1] = 10.0;
          v26[2] = 10.0;
          v7 = (int *)v26;
          v25[0] = -10.0;
          v25[1] = -10.0;
          v25[2] = -10.0;
          v8 = v11[647];
          v9 = (int *)v25;
          v22 = 0.1;
          v21 = 255;
          v20 = 0;
        }
        v19 = (int)v7;
        v16 = (int)v9;
        v12 = sub_1007DD50(v8);
        sub_1011BB20(v12, v16, v19, v20, v21, 0, 8, v22);
      }
LABEL_10:
      v13 = (unsigned int)v4[5];
      if ( v13 != -1
        && off_1061BE18[4 * ((unsigned int)v4[5] & 0xFFF) + 2] == v13 >> 12
        && off_1061BE18[4 * ((unsigned int)v4[5] & 0xFFF) + 1]
        && (*(_BYTE *)(sub_1026A890(v4 + 5) + 854) || *(_BYTE *)(sub_1026A890(v4 + 5) + 836) && sub_1004C220(v4, 10)) )
      {
        DevMsg("Assault Cleared due to Contact or Input!\n");
        sub_1004DD00((int)v4, (int)&savedregs, a2);
        ((void (__thiscall *)(_DWORD **, _DWORD))(*v4)[3])(v4, 0);
        return;
      }
      v14 = v4[1];
      if ( *((_BYTE *)v14 + 2322) && *(float *)(dword_106B31C8 + 12) - *((float *)v14 + 604) > 1.0
        || !(*(int (__thiscall **)(_DWORD *))(*v14 + 368))(v14) )
      {
        v15 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v4[1] + 1480))(v4[1]);
        if ( v15 )
        {
          if ( v15 != (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v4[1] + 368))(v4[1]) )
          {
            sub_100285C0(v4[1], v15, 1);
            sub_1002B660((int)v4[1], 3);
          }
        }
      }
      a1 = v4;
      goto LABEL_24;
    }
LABEL_36:
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)a1[1][651] + 76))(a1[1][651], -1);
    if ( sub_10023D10(v4[1], 21) )
      ((void (__thiscall *)(_DWORD **, _DWORD))(*v4)[3])(v4, 0);
    if ( sub_10021530(v4[1]) )
LABEL_39:
      ((void (__thiscall *)(_DWORD **, _DWORD))(*v4)[3])(v4, 0);
  }
}
