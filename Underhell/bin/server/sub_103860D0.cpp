void __fastcall sub_103860D0(int *a1, int a2, float *a3)
{
  float *v3; // edi
  int *v4; // esi
  _DWORD *v5; // edi
  int v6; // eax
  char v7; // al
  int v8; // edx
  int v9; // eax
  _DWORD *v10; // ebx
  _DWORD *v11; // ecx
  _DWORD *v12; // edi
  float *v13; // eax
  double v14; // st6
  double v15; // st7
  double v16; // st7
  float *v17; // eax
  float *v18; // eax
  double v19; // st7
  double v20; // st6
  double v21; // st5
  double v22; // st7
  double v23; // st7
  double v24; // st6
  double v25; // st5
  double v26; // st7
  _DWORD *v27; // ecx
  _DWORD *v28; // eax
  float *v29; // eax
  int v30; // edi
  float *v31; // eax
  float *v32; // eax
  float *v33; // [esp-4h] [ebp-A4h]
  int v34; // [esp+4h] [ebp-9Ch]
  float v35; // [esp+8h] [ebp-98h]
  float v36; // [esp+Ch] [ebp-94h]
  float v37; // [esp+10h] [ebp-90h]
  _DWORD v38[21]; // [esp+18h] [ebp-88h] BYREF
  _DWORD v39[12]; // [esp+6Ch] [ebp-34h] BYREF
  int v40; // [esp+9Ch] [ebp-4h] BYREF
  int savedregs; // [esp+A0h] [ebp+0h] BYREF

  v3 = a3;
  v4 = a1;
  switch ( *(_DWORD *)a3 )
  {
    case 0x12:
      v5 = (_DWORD *)*a1;
      v6 = (*(int (__thiscall **)(int *))(*a1 + 368))(a1);
      v7 = ((int (__thiscall *)(int *, int))v5[442])(v4, v6);
      v8 = *v4;
      if ( v7 )
      {
        (*(void (__thiscall **)(int *, int))(v8 + 1312))(v4, 11);
      }
      else if ( (*(int (__thiscall **)(int *))(v8 + 368))(v4) )
      {
        sub_10042370(v39, 2, -1, -1.0, 0, dword_10675C48);
        if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v4[647] + 20))(v4[647], v39, 0) )
          goto LABEL_29;
        DevWarning(2, "GetPathToEnemy failed!!\n");
        v9 = (*(int (__thiscall **)(int *, _DWORD))(*v4 + 368))(v4, -1.0);
        sub_1003ABB0(v4, v9, v37);
        (*(void (__thiscall **)(int *, int))(*v4 + 1312))(v4, 11);
      }
      else
      {
        (*(void (__thiscall **)(int *, int))(*v4 + 1312))(v4, 6);
      }
      return;
    case 0x3E:
      sub_10027CD0(a1, 0);
      return;
    case 0x96:
      return;
    case 0x97:
      sub_1023C380(a1, (int)"NPC_Manhack.Unpack", 0.0, 0);
      sub_10027CD0(v4, 0);
      return;
    case 0x98:
      if ( !a1[699] )
        goto LABEL_28;
      *((float *)a1 + 716) = 0.0;
      *((float *)a1 + 717) = 0.0;
      *((float *)a1 + 718) = 0.0;
      v10 = 0;
      v11 = (_DWORD *)a1[699];
      a3 = 0;
      v12 = (_DWORD *)sub_100B1560(v11, &v40, 1);
      if ( v12 )
      {
        do
        {
          if ( sub_1004AEE0(v12, 0, 1) )
          {
            v13 = (float *)sub_10019640(v12);
            v10 = (_DWORD *)((char *)v10 + 10);
            v14 = 10.0 * v13[2];
            v15 = v13[1] * 10.0;
            *((float *)v4 + 716) = *v13 * 10.0 + *((float *)v4 + 716);
            *((float *)v4 + 717) = v15 + *((float *)v4 + 717);
            v16 = v14 + *((float *)v4 + 718);
          }
          else
          {
            v17 = (float *)sub_10019640(v12);
            v10 = (_DWORD *)((char *)v10 + 1);
            *((float *)v4 + 716) = *((float *)v4 + 716) + *v17;
            *((float *)v4 + 717) = v17[1] + *((float *)v4 + 717);
            v16 = v17[2] + *((float *)v4 + 718);
          }
          *((float *)v4 + 718) = v16;
          v12 = (_DWORD *)sub_100B1630((_DWORD *)v4[699], &v40, 1);
        }
        while ( v12 );
        a3 = (float *)v10;
      }
      if ( (*(int (__thiscall **)(int *))(*v4 + 368))(v4) )
      {
        v18 = (float *)sub_100217F0(v4);
        v19 = *v18 * 4.0;
        a3 = (float *)(v10 + 1);
        v20 = 4.0 * v18[2];
        v21 = v19 + *((float *)v4 + 716);
        v22 = v18[1] * 4.0;
        *((float *)v4 + 716) = v21;
        *((float *)v4 + 717) = v22 + *((float *)v4 + 717);
        *((float *)v4 + 718) = v20 + *((float *)v4 + 718);
      }
      v23 = 1.0 / (double)(int)a3;
      v24 = *((float *)v4 + 716) * v23;
      v25 = *((float *)v4 + 717) * v23;
      v26 = v23 * *((float *)v4 + 718);
      *((float *)v4 + 716) = v24;
      *((float *)v4 + 717) = v25;
      *((float *)v4 + 718) = v26;
      sub_10027CD0(v4, 0);
      return;
    case 0x99:
      v27 = (_DWORD *)a1[699];
      if ( v27 )
      {
        v28 = (_DWORD *)sub_10385830(v27);
        v29 = (float *)sub_10019640(v28);
        v4[716] = *(int *)v29;
        v4[717] = *((int *)v29 + 1);
        v4[718] = *((int *)v29 + 2);
        v30 = sub_100B1560((_DWORD *)v4[699], &a3, 1);
        if ( !v30 )
          goto LABEL_29;
        while ( !sub_1004AEE0((_DWORD *)v30, 0, 1) && !sub_1007E040(*(_DWORD **)(v30 + 2588)) )
        {
          v30 = sub_100B1630((_DWORD *)v4[699], (int *)&a3, 1);
          if ( !v30 )
          {
            sub_10027CD0(v4, 0);
            return;
          }
        }
        a1 = (int *)v30;
      }
      else
      {
        a1 = v4;
      }
LABEL_28:
      v31 = (float *)sub_10019640(a1);
      v4[716] = *(int *)v31;
      v4[717] = *((int *)v31 + 1);
      v4[718] = *((int *)v31 + 2);
LABEL_29:
      sub_10027CD0(v4, 0);
      return;
    case 0x9A:
      v34 = (int)a1;
      v33 = (float *)(a1 + 716);
      v32 = (float *)sub_10019640(a1);
      sub_1002A5F0((int)&savedregs, (int)v4, v32, v33, 131083, v34, 0, (int)v38);
      if ( sub_10163140(v38) )
      {
        (*(void (__thiscall **)(int *, int))(*v4 + 1312))(v4, 11);
      }
      else
      {
        v36 = v3[1] * 1.2;
        v35 = v3[1] * 0.8;
        *((float *)v4 + 948) = RandomFloat(LODWORD(v35), LODWORD(v36)) + *(float *)(dword_106B31C8 + 12);
      }
      return;
    default:
      sub_100432F0(a1, a2, (int)a3);
      return;
  }
}
