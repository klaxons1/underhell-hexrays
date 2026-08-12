void __userpurge sub_1030C6C0(_BYTE *a1@<ecx>, float *a2@<edi>, _DWORD *a3)
{
  int v3; // esi
  _DWORD *v4; // ecx
  int v5; // ebx
  _DWORD *v6; // eax
  float *v7; // eax
  float *v8; // eax
  double v9; // st7
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  int v12; // eax
  int v13; // edi
  char v14; // al
  int v15; // edi
  float *v16; // eax
  double v17; // st4
  double v18; // rt0
  float v19; // [esp+Ch] [ebp-7Ch]
  float v20; // [esp+10h] [ebp-78h]
  float v21; // [esp+10h] [ebp-78h]
  _DWORD v22[14]; // [esp+20h] [ebp-68h] BYREF
  _BYTE v23[12]; // [esp+58h] [ebp-30h] BYREF
  _BYTE v24[12]; // [esp+64h] [ebp-24h] BYREF
  float v25[3]; // [esp+70h] [ebp-18h] BYREF
  float v26; // [esp+7Ch] [ebp-Ch]
  float v27; // [esp+80h] [ebp-8h]
  float v28; // [esp+84h] [ebp-4h]
  int savedregs; // [esp+88h] [ebp+0h] BYREF
  float v30; // [esp+90h] [ebp+8h]

  v3 = (int)a1;
  switch ( *a3 )
  {
    case 0x81:
      if ( !a1[3675]
        || (((void (*)(void))sub_1030A6A0)(), !sub_10023D10((_DWORD *)v3, 23))
        || (v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 368))(v3)) == 0
        || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v15 + 320))(v15) )
      {
        a1 = (_BYTE *)v3;
        goto LABEL_56;
      }
      sub_1023C380((_DWORD *)v3, (int)"NPC_AntlionGuard.Shove", 0.0, 0);
      if ( !sub_100C4E90((_DWORD *)v3, dword_106E2FF4) )
        sub_100C7570((volatile signed __int32 *)v3, dword_106E2FF4, COERCE_FLOAT(1), 1);
      sub_10309040((void *)v3, v15);
      v16 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v3 + 904))(v3, v23);
      v17 = v16[2];
      v18 = v16[1] * 400.0;
      v25[0] = *v16 * 400.0;
      v25[1] = v18;
      v25[2] = 400.0 * v17 + 200.0;
      sub_100EA150(v15, v25);
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v15 + 264))(v15)
        && (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 368))(v3) == v15 )
      {
        sub_100285C0((_DWORD *)v3, 0, 1);
      }
      v21 = *(float *)(dword_106B31C8 + 12) + 2.0;
      sub_10031BA0(v3, v21);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 1416))(v3, dword_106E2FF8);
      *(_DWORD *)(v3 + 3668) = 0;
      sub_10043050((void *)v3, 0, 0);
      sub_10027CD0((_DWORD *)v3, 0);
      break;
    case 0x96:
      v5 = *((_DWORD *)a1 + 593);
      if ( v5 == dword_106E2FF8 || v5 == dword_106E2FFC )
      {
        v14 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 732))(a1);
        v4 = (_DWORD *)v3;
        if ( v14 )
          goto LABEL_4;
        sub_10043050((void *)v3, 0, 0);
      }
      else
      {
        if ( v5 == dword_106E3008 && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 732))(a1) )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 1416))(v3, dword_106E3000);
        if ( v5 == dword_106E3000 || v5 == dword_106E3008 )
        {
          if ( sub_10023D10((_DWORD *)v3, 26) || sub_10023D10((_DWORD *)v3, 11) || sub_10023D10((_DWORD *)v3, 30) )
          {
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 1416))(v3, dword_106E2FF8);
            return;
          }
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 368))(v3) )
          {
            a2 = (float *)sub_10019640((_DWORD *)v3);
            v6 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 368))(v3);
            v7 = (float *)sub_10019640(v6);
            v26 = *v7 - *a2;
            v27 = v7[1] - a2[1];
            v28 = v7[2] - a2[2];
            off_10689714();
            v8 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v3 + 904))(v3, v24);
            if ( v8[1] * v27 + *v8 * v26 + v8[2] * v28 >= 0.25 )
            {
              *(_BYTE *)(v3 + 3672) = 0;
            }
            else if ( !*(_BYTE *)(v3 + 3672) )
            {
              *(_BYTE *)(v3 + 3672) = 1;
              if ( RandomFloat(0.0, 1.0) > 0.3 )
              {
                ++*(_DWORD *)(v3 + 3668);
                (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 1416))(v3, dword_106E2FF8);
              }
            }
          }
        }
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 368))(v3) )
        {
          a2 = *(float **)v3;
          v10 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 368))(v3);
          v11 = sub_10019640(v10);
          v9 = ((double (__thiscall *)(int, _DWORD *))*((_DWORD *)a2 + 424))(v3, v11);
        }
        else
        {
          v9 = *(float *)(*(_DWORD *)(v3 + 2604) + 20);
        }
        v30 = v9;
        sub_1030A830(v3, (int)&savedregs, (int)a2, v3);
        v19 = v9 + v30;
        sub_10078210(*(float **)(v3 + 2604), v19, -1.0);
        sub_1030A6A0(v3);
        memset(v22, 0, sizeof(v22));
        v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 368))(v3);
        if ( !sub_10043050((void *)v3, v12, (int)v22) )
        {
          if ( sub_1030C4A0((float *)v3, v22[1], v22[2], v22[3], *(float *)&v22[7]) )
          {
            if ( v5 == dword_106E3008 )
            {
              (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v3 + 1312))(
                v3,
                "Unable to make initial movement of charge\n");
            }
            else
            {
              v13 = dword_106E2FF8;
              if ( v5 != dword_106E2FF8 )
              {
                if ( v22[0] == -2 && sub_10018CD0((float *)&v22[4], &flt_106F1CA8) )
                  (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 1416))(v3, v13);
                else
                  (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 1416))(v3, dword_106E2FFC);
              }
            }
          }
          else if ( v22[7] && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v22[7] + 220))(v22[7]) == 4 )
          {
            if ( *(char **)(v22[7] + 92) == "npc_antlionguard" || sub_100D6240((_DWORD *)v22[7], "npc_antlionguard") )
            {
              if ( v5 != dword_106E2FF8 )
                (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 1416))(v3, dword_106E2FF8);
            }
            else
            {
              v20 = (float)*(int *)(v22[7] + 220);
              sub_10370AF0(v3, v22[7], v20);
            }
          }
        }
      }
      break;
    case 0x98:
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 732))(a1) )
        sub_10027CD0((_DWORD *)v3, 0);
      break;
    case 0x9A:
      sub_10043050(a1, 0, 0);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 732))(v3) )
      {
        v4 = (_DWORD *)v3;
LABEL_4:
        sub_10027CD0(v4, 0);
      }
      break;
    default:
LABEL_56:
      sub_100497D0((int *)a1, a3);
      break;
  }
}
