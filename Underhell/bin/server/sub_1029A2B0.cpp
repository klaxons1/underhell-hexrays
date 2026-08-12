void __thiscall sub_1029A2B0(int this, _DWORD *a2)
{
  int v3; // eax
  int v4; // edi
  _DWORD *v5; // eax
  float *v6; // eax
  int *v7; // eax
  int v8; // eax
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // st7
  double v13; // st7
  bool v14; // zf
  int v15; // eax
  bool v16; // al
  int v17; // ecx
  _DWORD *v18; // eax
  float *v19; // eax
  int v20; // ecx
  int v21; // eax
  int *v22; // ecx
  bool v23; // al
  _DWORD *v24; // eax
  _DWORD *v25; // eax
  _DWORD *v26; // eax
  float *v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // ecx
  char v31; // bl
  int v32; // eax
  _DWORD *v33; // eax
  char *v34; // edx
  int v35; // eax
  int v36; // eax
  int v37; // edi
  _DWORD *v38; // eax
  float *v39; // eax
  float *v40; // [esp-Ch] [ebp-3Ch]
  float v41; // [esp+4h] [ebp-2Ch]
  float v42; // [esp+4h] [ebp-2Ch]
  int v43; // [esp+4h] [ebp-2Ch]
  float *v44; // [esp+8h] [ebp-28h]
  int v45; // [esp+8h] [ebp-28h]
  float v46; // [esp+8h] [ebp-28h]
  float v47; // [esp+8h] [ebp-28h]
  float *v48; // [esp+8h] [ebp-28h]
  float v49; // [esp+8h] [ebp-28h]
  _DWORD v50[3]; // [esp+18h] [ebp-18h] BYREF
  float v51; // [esp+24h] [ebp-Ch] BYREF
  float v52; // [esp+28h] [ebp-8h] BYREF
  float v53; // [esp+2Ch] [ebp-4h]

  switch ( *a2 )
  {
    case 0x186A0:
      if ( !*(_BYTE *)(this + 16) )
        goto LABEL_39;
      v3 = *(_DWORD *)(this + 56);
      *(_BYTE *)(this + 64) = 1;
      v4 = dword_106DB118 + 56 * v3;
      if ( !v4 || !*(_BYTE *)(v4 + 52) )
        sub_100EA940(*(int **)(this + 4), 1024);
      sub_101C73D0(*(unsigned int **)(this + 4), 0);
      if ( *(_BYTE *)(this + 37) )
      {
        v44 = (float *)sub_1004BF30((_DWORD *)this);
        v5 = (_DWORD *)sub_100519F0((_DWORD *)this);
        v6 = (float *)sub_10019640(v5);
        if ( sub_101631D0(v6, v44) > 16.0 || !sub_10021530(*(_DWORD **)(this + 4)) )
        {
          (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(this + 4) + 1312))(
            *(_DWORD *)(this + 4),
            "Not correctly on hintnode");
          *(float *)(this + 44) = *(float *)(dword_106B31C8 + 12);
          return;
        }
      }
      *(_BYTE *)(this + 37) = 0;
      if ( !sub_10296970((_DWORD *)this) )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 8))(this, 4);
        return;
      }
      if ( *(_BYTE *)(this + 36) )
        goto LABEL_29;
      v45 = *(_DWORD *)(this + 4);
      *(_BYTE *)(this + 36) = 1;
      v7 = (int *)sub_100519F0((_DWORD *)this);
      sub_10071C50(v7, v45);
      if ( sub_1026A890((unsigned int *)(this + 60)) )
      {
        v8 = sub_1026A890((unsigned int *)(this + 60));
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 748))(v8, *(_DWORD *)(this + 4));
      }
      if ( !v4 )
        goto LABEL_29;
      v9 = *(float *)(v4 + 44);
      v10 = *(float *)(v4 + 40);
      v11 = 0.0;
      if ( !*(_BYTE *)(this + 17) || -1.0 == *(float *)(this + 32) )
        goto LABEL_22;
      v12 = 0.0;
      if ( 0.0 == *(float *)(this + 32) )
        goto LABEL_27;
      if ( *(float *)(this + 32) < v10 )
        v10 = *(float *)(this + 32);
      v11 = 0.0;
      v9 = *(float *)(this + 32);
LABEL_22:
      if ( v11 == v9 || *(_BYTE *)(this + 52) )
      {
        v12 = v11;
LABEL_27:
        *(float *)(this + 44) = v12;
        v47 = v12;
        v13 = 99999.0;
      }
      else
      {
        v46 = v9;
        v41 = v10;
        v13 = RandomFloat(LODWORD(v41), LODWORD(v46));
        *(float *)(this + 44) = *(float *)(dword_106B31C8 + 12) + v13;
        v47 = 0.0;
      }
      v42 = v13;
      sub_10022750(*(float **)(this + 4), v42, v47);
LABEL_29:
      sub_10296D70(this, 0);
      sub_1029A130((int *)this, 0);
      v14 = *(_BYTE *)(this + 28) == 0;
      *(_BYTE *)(this + 17) = 0;
      *(_WORD *)(this + 24) = 0;
      *(_DWORD *)(this + 20) = -1;
      if ( !v14 )
        sub_10295C30((int *)this);
      return;
    case 0x186A1:
      v15 = dword_106DB118 + 56 * *(_DWORD *)(this + 56);
      if ( !v15 || !*(_BYTE *)(v15 + 52) )
        sub_100EA940(*(int **)(this + 4), 1024);
      sub_101C73D0(*(unsigned int **)(this + 4), 0);
      v43 = *(_DWORD *)(this + 56);
      *(_BYTE *)(this + 37) = 0;
      *(_BYTE *)(this + 38) = sub_10296D00((int *)this, v43, 2);
      v16 = sub_10296970((_DWORD *)this);
      v17 = this;
      if ( !v16 )
        goto LABEL_35;
      v48 = (float *)sub_1004BF30((_DWORD *)this);
      v18 = (_DWORD *)sub_100519F0((_DWORD *)this);
      v19 = (float *)sub_10019640(v18);
      if ( sub_101631D0(v19, v48) <= 16.0 && sub_10021530(*(_DWORD **)(this + 4)) )
      {
        sub_1029A130((int *)this, 1);
        if ( !sub_10296D70(this, 1) )
          goto LABEL_39;
      }
      else
      {
        v20 = *(_DWORD *)(this + 4);
        *(_BYTE *)(this + 36) = 0;
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v20 + 1312))(v20, "Not correctly on hintnode");
      }
      return;
    case 0x186A2:
      if ( *(_BYTE *)(this + 28) )
        sub_10027A90(*(_DWORD *)(this + 4), 1);
      if ( sub_1026A890((unsigned int *)(this + 60)) )
      {
        v21 = sub_1026A890((unsigned int *)(this + 60));
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v21 + 752))(v21, *(_DWORD *)(this + 4));
      }
      sub_1029A130((int *)this, 2);
      if ( !sub_10296D70(this, 2) )
      {
        v22 = *(int **)(this + 4);
        *(_BYTE *)(this + 38) = 0;
        sub_100EA9A0(v22, 1024);
        sub_10296DE0(this);
        goto LABEL_39;
      }
      return;
    case 0x186A3:
      v23 = sub_10296970((_DWORD *)this);
      v17 = this;
      if ( v23 )
      {
        v24 = (_DWORD *)sub_100519F0((_DWORD *)this);
        v25 = sub_10019640(v24);
        v50[0] = *v25;
        v50[1] = v25[1];
        v50[2] = v25[2];
        v26 = (_DWORD *)sub_100519F0((_DWORD *)this);
        v27 = (float *)sub_1001F410(v26);
        v51 = *v27;
        v28 = *(_DWORD *)(this + 4);
        v52 = v27[1];
        v53 = v27[2];
        (*(void (__thiscall **)(int, _DWORD *, float *, _DWORD))(*(_DWORD *)v28 + 416))(v28, v50, &v51, 0);
        *(float *)(*(_DWORD *)(*(_DWORD *)(this + 4) + 2604) + 20) = v52;
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
      }
      else
      {
LABEL_35:
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 8))(v17, 4);
      }
      return;
    case 0x186A4:
      v29 = *(_DWORD *)(this + 20);
      if ( v29 == -1 || !v29 )
      {
        v49 = 0.0;
        if ( sub_10295D00((_DWORD *)this) )
          sub_1004BD30(this, 48, v49);
        else
          sub_1004BD30(this, 49, v49);
      }
      else
      {
        sub_1007DD70(*(_DWORD *)(this + 20));
        *(_DWORD *)(*(_DWORD *)(this + 4) + 2716) &= ~2u;
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
      }
      return;
    case 0x186A5:
      v30 = *(_DWORD *)(this + 4);
      v31 = *(_BYTE *)(this + 8);
      v53 = 0.0;
      LODWORD(v52) = 31;
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)v30 + 1256))(v30, &v52);
      *(_BYTE *)(this + 8) = v31;
      if ( sub_1004C220((_DWORD **)this, 35) )
      {
        ++*(_DWORD *)(this + 80);
        if ( *(_DWORD *)(dword_106DB0DC + 48) == 1 && sub_100519F0((_DWORD *)this) )
        {
          v37 = *(_DWORD *)(this + 4);
          v38 = (_DWORD *)sub_100519F0((_DWORD *)this);
          v40 = (float *)sub_10019640(v38);
          v39 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v37 + 576))(v37);
          sub_1011BC50(v39, v40, 255, 0, 0, 1, 1.0);
        }
      }
      else
      {
        v32 = *(_DWORD *)(this + 56);
        *(_DWORD *)(this + 80) = 0;
        v33 = (_DWORD *)(dword_106DB118 + 56 * v32);
        if ( v33 && !v33[5] && v33[2] == -1 )
        {
          v34 = (char *)v33[4];
          if ( !v34 )
          {
            v35 = v33[1];
            if ( v35 == -1 )
              return;
            goto LABEL_64;
          }
          goto LABEL_66;
        }
        v34 = (char *)v33[5];
        if ( v34 )
        {
LABEL_66:
          v36 = sub_100BDF40(*(_DWORD *)(this + 4), v34);
          sub_1007DF00(v36);
          return;
        }
        v35 = v33[2];
        if ( v35 != -1 )
LABEL_64:
          sub_1007DE40(v35);
      }
      return;
    case 0x186A6:
      if ( *(_BYTE *)(this + 28) )
        sub_10022750(*(float **)(this + 4), 0.0, 0.0);
      else
LABEL_39:
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
      return;
    default:
      sub_1004B450((_BYTE *)this, (int)a2);
      return;
  }
}
