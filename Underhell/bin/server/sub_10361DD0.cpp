void __userpurge sub_10361DD0(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4)
{
  const char *v5; // eax
  int v6; // edi
  int v7; // ebx
  int v8; // eax
  float *v9; // eax
  double v10; // st6
  _DWORD *v11; // eax
  int v12; // eax
  int v13; // ecx
  int (__thiscall *v14)(int); // eax
  float *v15; // eax
  double v16; // st6
  double v17; // st5
  double v18; // st7
  double v19; // st7
  int v20; // ebx
  float *v21; // eax
  _DWORD *v22; // eax
  int v23; // ecx
  int v24; // eax
  float *v25; // eax
  double v26; // st6
  double v27; // st7
  int v28; // edi
  int v29; // eax
  float v31[12]; // [esp+20h] [ebp-58h] BYREF
  int v32[3]; // [esp+50h] [ebp-28h] BYREF
  float v33; // [esp+5Ch] [ebp-1Ch] BYREF
  float v34; // [esp+60h] [ebp-18h]
  float v35; // [esp+64h] [ebp-14h]
  float v36; // [esp+68h] [ebp-10h]
  float v37; // [esp+6Ch] [ebp-Ch]
  float v38; // [esp+70h] [ebp-8h]
  int v39; // [esp+74h] [ebp-4h]
  int v40; // [esp+80h] [ebp+8h]

  switch ( *(_DWORD *)a4 )
  {
    case 0x96:
      *(float *)(a1 + 4172) = *(float *)(dword_106B31C8 + 12) + *(float *)(a4 + 4);
      if ( sub_1012B040((unsigned int *)(a1 + 4188), 0) )
      {
        if ( *(int *)(dword_106B31C8 + 20) <= 1 )
          v29 = sub_10261B20();
        else
          v29 = 0;
        sub_10019680((_DWORD *)(a1 + 4188), v29);
      }
      goto LABEL_30;
    case 0x97:
      v5 = *(const char **)(a1 + 4200);
      if ( !v5 )
        v5 = String;
      sub_10360BB0(a1, a3, *(float *)&v5, 0);
      v6 = a1 + 4184;
      if ( sub_1012B040((unsigned int *)(a1 + 4184), 0) )
      {
        sub_10360BB0(a1, v6, 0.0, 0);
      }
      else
      {
        v7 = *(_DWORD *)(sub_1026A890((unsigned int *)(a1 + 4184)) + 424);
        v8 = sub_1026A890((unsigned int *)(a1 + 4184));
        v9 = (float *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v8 + 576))(v8, a2);
        v10 = *(float *)(a1 + 720) - v9[1];
        v36 = *(float *)(a1 + 716) - *v9;
        v37 = v10;
        off_10689714();
        v38 = 0.0;
        v11 = (_DWORD *)sub_1026A890((unsigned int *)(a1 + 4184));
        if ( !sub_10019B00(v11) )
        {
          v12 = sub_1026A890((unsigned int *)(a1 + 4184));
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 76))(v12, a1);
        }
        if ( v7 )
          (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 104))(v7);
        v13 = sub_1026A890((unsigned int *)(a1 + 4184));
        v14 = *(int (__thiscall **)(int))(*(_DWORD *)v13 + 576);
        v33 = v36 * 96.0;
        v34 = v37 * 96.0;
        v35 = 96.0 * v38;
        v15 = (float *)v14(v13);
        v40 = 11;
        v16 = v15[1] + v34;
        v17 = *v15 + v33;
        v18 = v15[2] + v35;
        *(float *)v32 = v17;
        *(float *)&v32[1] = v16;
        *(float *)&v32[2] = v18;
        v33 = v17 - *(float *)(a1 + 716);
        v34 = v16 - *(float *)(a1 + 720);
        v19 = v18 - *(float *)(a1 + 724);
        v35 = v19;
        sub_100D7A40(&v33);
        if ( v19 <= 128.0 )
          v40 = 6;
        v20 = **(_DWORD **)(a1 + 2588);
        v39 = *(_DWORD *)(a1 + 2588);
        v21 = sub_10042450(v31, (float *)v32, v40, -1.0, 0, dword_106726F4);
        if ( (*(unsigned __int8 (__thiscall **)(int, float *))(v20 + 20))(v39, v21) )
        {
          sub_10027CD0((_DWORD *)a1, 0);
        }
        else
        {
          if ( sub_10319100((_DWORD *)(a1 + 4292), (unsigned int *)(a1 + 4184)) == -1 )
            sub_10194990((int *)(a1 + 4292), *(_DWORD *)(a1 + 4304), (_DWORD *)(a1 + 4184));
          v22 = (_DWORD *)sub_1026A890((unsigned int *)(a1 + 4184));
          sub_10360BB0(a1, v6, 0.0, v22);
          v23 = *(_DWORD *)(a1 + 2588);
          *(float *)(a1 + 4176) = *(float *)(dword_106B31C8 + 12) + 0.1;
          *(float *)(a1 + 4284) = *(float *)(dword_106B31C8 + 12) + 0.3;
          *(float *)(a1 + 4172) = *(float *)(dword_106B31C8 + 12) + 0.1;
          sub_10081C10(v23);
        }
      }
      return;
    case 0x98:
      if ( sub_1012B040((unsigned int *)(a1 + 4184), 0) )
        goto LABEL_20;
      sub_10039F40((int *)a1, dword_106E7C60);
      break;
    case 0x99:
      if ( sub_1012B040((unsigned int *)(a1 + 4184), 0) )
        goto LABEL_20;
      if ( sub_1012B040((unsigned int *)(a1 + 4184), 0) || !*(_BYTE *)(a1 + 4288) )
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)a1 + 1312))(a1, "Don't have the item!");
      else
        sub_10039F40((int *)a1, dword_106E7C64);
      break;
    case 0x9A:
      if ( sub_1012B040((unsigned int *)(a1 + 4184), 0) )
      {
LABEL_20:
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)a1 + 1312))(a1, "Physics ent NULL");
      }
      else
      {
        v24 = sub_1026A890((unsigned int *)(a1 + 4184));
        v25 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v24 + 576))(v24);
        v26 = v25[1] - *(float *)(a1 + 720);
        v27 = v25[2] - *(float *)(a1 + 724);
        v33 = *v25 - *(float *)(a1 + 716);
        v34 = v26;
        v35 = v27;
        off_10689714();
        v28 = *(_DWORD *)(a1 + 2604);
        *(float *)(v28 + 20) = sub_10265030(&v33);
        sub_10027CD0((_DWORD *)a1, 0);
      }
      break;
    case 0x9B:
      sub_10039F40((int *)a1, dword_106E7C5C);
      break;
    case 0x9C:
      sub_10039F40((int *)a1, dword_106E7C58);
      break;
    case 0x9D:
      if ( sub_103600E0((unsigned int *)a1) )
LABEL_30:
        sub_10027CD0((_DWORD *)a1, 0);
      break;
    case 0x9E:
      sub_103601C0((_DWORD *)a1);
      sub_10027CD0((_DWORD *)a1, 0);
      break;
    default:
      sub_1001E620((_DWORD *)a1, (_DWORD *)a4);
      break;
  }
}
