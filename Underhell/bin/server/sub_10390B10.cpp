void __userpurge sub_10390B10(_DWORD *a1@<ecx>, int a2@<ebx>, int a3)
{
  int v3; // edi
  int v4; // esi
  float *v5; // eax
  char v6; // al
  char v7; // al
  char v8; // al
  char v9; // al
  char v10; // al
  int v11; // ebx
  int v12; // edi
  int v13; // eax
  void (__thiscall *v14)(int, int *); // edx
  float v15; // [esp+8h] [ebp-B0h]
  float v16[12]; // [esp+20h] [ebp-98h] BYREF
  float v17[3]; // [esp+50h] [ebp-68h] BYREF
  int v18[20]; // [esp+5Ch] [ebp-5Ch] BYREF
  int v19; // [esp+ACh] [ebp-Ch] BYREF
  int v20; // [esp+B0h] [ebp-8h] BYREF
  float v21; // [esp+B4h] [ebp-4h]
  int savedregs; // [esp+B8h] [ebp+0h] BYREF

  v3 = a3;
  v4 = (int)a1;
  switch ( *(_DWORD *)a3 )
  {
    case 0x4E:
      a1[1060] = 20;
      goto LABEL_50;
    case 0x96:
      if ( (a1[62] & 0x100000) == 0 )
      {
        if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1)
          && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 368))(v4) + 447) )
        {
          sub_1023C380((_DWORD *)v4, (int)"NPC_MetroPolice.WaterSpeech", 0.0, 0);
        }
        else
        {
          sub_1023C380((_DWORD *)v4, (int)"NPC_MetroPolice.HidingSpeech", 0.0, 0);
        }
      }
      goto LABEL_42;
    case 0x97:
      sub_10247EC0(v18);
      sub_10023330(v18, v4);
      sub_10023300(v18, v4);
      *(float *)&v18[13] = (float)*(int *)(v4 + 220);
      v18[16] = (int)*(float *)(v3 + 4);
      *(float *)&v18[1] = 0.1;
      *(float *)&v18[2] = 0.1;
      *(float *)&v18[3] = 0.1;
      sub_100D9E70((int *)v4, v4, v18);
      sub_10027CD0((_DWORD *)v4, 0);
      return;
    case 0x98:
      sub_10043E90(a1, 17);
      return;
    case 0x99:
      sub_10388E20((int)a1, 0);
      sub_10027CD0((_DWORD *)v4, 0);
      return;
    case 0x9A:
      goto LABEL_26;
    case 0x9B:
      v7 = sub_1038A110(a1);
      a1 = (_DWORD *)v4;
      if ( !v7 )
        goto LABEL_28;
LABEL_26:
      sub_10388E20((int)a1, 1);
      sub_1038C990(v4, (int)&savedregs, v3, v4, *(float *)(v3 + 4));
      sub_10027CD0((_DWORD *)v4, 0);
      return;
    case 0x9C:
      sub_10388E20((int)a1, 1);
      sub_1038A180((float *)v4, a2, v3, *(float *)(v3 + 4));
      sub_10027CD0((_DWORD *)v4, 0);
      return;
    case 0x9D:
      v8 = sub_1038A110(a1);
      a1 = (_DWORD *)v4;
      if ( !v8 )
        goto LABEL_28;
      sub_10388E20(v4, 1);
      sub_1038CF90(v4, a2, *(float *)(v3 + 4));
      sub_10027CD0((_DWORD *)v4, 0);
      return;
    case 0x9E:
      v9 = sub_1038A110(a1);
      a1 = (_DWORD *)v4;
      if ( !v9 )
        goto LABEL_28;
      sub_10388E20(v4, 1);
      sub_1038D4D0(v4, a2, v3, *(float *)(v3 + 4));
      sub_10027CD0((_DWORD *)v4, 0);
      return;
    case 0x9F:
      v10 = sub_1038A110(a1);
      a1 = (_DWORD *)v4;
      if ( v10 )
      {
        sub_10388E20(v4, 1);
        sub_1038D290(v4, *(float *)(v3 + 4));
        sub_10027CD0((_DWORD *)v4, 0);
      }
      else
      {
LABEL_28:
        (*(void (__thiscall **)(_DWORD *, int))(*(_DWORD *)v4 + 1312))(a1, 1);
      }
      return;
    case 0xA0:
      if ( sub_100CF460(a1) )
      {
        v11 = sub_10389070((_DWORD *)v4, *(float *)(v3 + 4));
        v12 = v11 - *(_DWORD *)(sub_100CF460((_DWORD *)v4) + 1200);
        a3 = v12;
        if ( v12 > 0 && *(_DWORD *)(v4 + 4240) >= v12 )
        {
          v13 = sub_100CF460((_DWORD *)v4);
          sub_100D2E00((int *)(v13 + 1200), &a3);
          *(_DWORD *)(v4 + 4240) -= v12;
        }
        if ( v11 <= *(_DWORD *)(sub_100CF460((_DWORD *)v4) + 1200) )
          goto LABEL_42;
      }
      v14 = *(void (__thiscall **)(int, int *))(*(_DWORD *)v4 + 1256);
      v21 = 0.0;
      v20 = 78;
      v14(v4, &v20);
      return;
    case 0xA1:
      if ( sub_1038C420((int)a1) )
      {
        sub_1038C750((_DWORD *)v4, 0.5, 0.0, 0.0, (float *)&v19, v17);
        v5 = (float *)sub_10019640((_DWORD *)v4);
        *(float *)&v19 = *(float *)&v19 - *v5;
        *(float *)&v20 = *(float *)&v20 - v5[1];
        v21 = 0.0;
        v15 = off_10689714();
        v6 = sub_10081A70(*(_DWORD *)(v4 + 2588), (float *)&v19, v15, 0.0, 0.0);
        a1 = (_DWORD *)v4;
        if ( v6 )
LABEL_8:
          sub_10027CD0(a1, 0);
        else
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 1312))(v4, 11);
      }
      else
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 1312))(v4, 11);
      }
      return;
    case 0xA2:
      *((float *)a1 + 1076) = *(float *)(dword_106B31C8 + 12);
      sub_10027CD0(a1, 0);
      return;
    case 0xA3:
      return;
    case 0xA5:
    case 0xA6:
      *((float *)a1 + 1077) = *(float *)(dword_106B31C8 + 12) + *(float *)(a3 + 4);
      return;
    case 0xA7:
      sub_1038FD20(a1);
      sub_10027CD0((_DWORD *)v4, 0);
      return;
    case 0xA8:
      if ( !sub_10389B80(a1) )
        goto LABEL_42;
      if ( 0.0 == *(float *)(v3 + 4) )
      {
        if ( sub_10389BD0((_DWORD *)v4) && !*(_BYTE *)(v4 + 4312) )
        {
          sub_100AC410(v4 + 5160, "METROPOLICE_DEACTIVATE_BATON", 0, 1);
          sub_10039F40((int *)v4, dword_106E9D0C);
          return;
        }
      }
      else if ( !sub_10389BD0((_DWORD *)v4) && *(_BYTE *)(v4 + 4312) )
      {
        sub_100AC410(v4 + 5160, "METROPOLICE_ACTIVATE_BATON", 0, 1);
        sub_10039F40((int *)v4, dword_106E9D10);
        return;
      }
LABEL_42:
      sub_10027CD0((_DWORD *)v4, 0);
      return;
    case 0xA9:
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*a1 + 1604))(a1, (int)*(float *)(a3 + 4)) )
        goto LABEL_42;
      return;
    case 0xAA:
      sub_10042450(v16, (float *)a1 + 1087, -1, -1.0, 0, dword_106767EC);
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, float *, _DWORD))(**(_DWORD **)(v4 + 2588) + 20))(
             *(_DWORD *)(v4 + 2588),
             v16,
             0) )
      {
        *(float *)&v19 = 0.0;
        v20 = *(int *)(v4 + 4360);
        v21 = 0.0;
        sub_1007DF50((int)&v19);
        sub_10027CD0((_DWORD *)v4, 0);
      }
      else
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 1312))(v4, 11);
      }
      return;
    case 0xAB:
      *((float *)a1 + 1087) = flt_106F1CA8;
      *((float *)a1 + 1088) = flt_106F1CAC;
      *((float *)a1 + 1089) = flt_106F1CB0;
      *((float *)a1 + 1090) = 0.0;
      goto LABEL_8;
    default:
LABEL_50:
      sub_1001E620(a1, (_DWORD *)v3);
      return;
  }
}
