void __thiscall sub_102DE710(int this, int a2)
{
  int v2; // edi
  _DWORD *v4; // eax
  int v5; // ebx
  int v6; // edi
  _DWORD *v7; // eax
  int v8; // ebx
  int v9; // edi
  _DWORD *v10; // eax
  int v11; // ebx
  double v12; // st7
  int v13; // ecx
  int v14; // eax
  int v15; // edi
  int v16; // eax
  __int16 *v17; // edi
  int (__thiscall *v18)(__int16 *); // eax
  int (__thiscall *v19)(int, int, _DWORD); // edx
  int v20; // eax
  int v21; // ebx
  int v22; // eax
  float v23; // [esp+8h] [ebp-18h]
  float v24; // [esp+8h] [ebp-18h]
  float v25; // [esp+8h] [ebp-18h]
  float v26; // [esp+8h] [ebp-18h]
  double v27; // [esp+18h] [ebp-8h] BYREF

  v2 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v4 = *(_DWORD **)(this + 1100);
  if ( v4 && *v4 )
    v5 = *(_DWORD *)(this + 1100);
  else
    v5 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  *(_DWORD *)(this + 5204) = sub_100BD5F0(v5, "move_yaw");
  v6 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v7 = *(_DWORD **)(this + 1100);
  if ( v7 && *v7 )
    v8 = *(_DWORD *)(this + 1100);
  else
    v8 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6);
  *(_DWORD *)(this + 5208) = sub_100BD5F0(v8, "aim_pitch");
  v9 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v10 = *(_DWORD **)(this + 1100);
  if ( v10 && *v10 )
    v11 = *(_DWORD *)(this + 1100);
  else
    v11 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 104))(v9);
  *(_DWORD *)(this + 5212) = sub_100BD5F0(v11, "head_pitch");
  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  v23 = *(float *)(this + 480) * *(float *)(this + 480) + *(float *)(this + 476) * *(float *)(this + 476);
  v12 = off_10689708(v23);
  v13 = *(_DWORD *)(this + 256);
  *((float *)&v27 + 1) = v12;
  if ( (v13 & 0x60) != 0 )
  {
    v14 = 0;
    *((float *)&v27 + 1) = 0.0;
  }
  else
  {
    v14 = a2;
  }
  v15 = 11;
  switch ( v14 )
  {
    case 2:
      v15 = 30;
      goto LABEL_58;
    case 10:
      if ( (*(_BYTE *)(this + 256) & 2) != 0 )
        sub_100C7570((volatile signed __int32 *)this, 1442, COERCE_FLOAT(1), 1);
      else
        sub_100C7570((volatile signed __int32 *)this, 1441, COERCE_FLOAT(1), 1);
      return;
    case 11:
      sub_100C7570((volatile signed __int32 *)this, 1044, COERCE_FLOAT(1), 1);
      return;
    case 4:
      if ( !*(_BYTE *)(this + 224) )
        return;
      goto LABEL_58;
  }
  if ( v14 != 5 )
  {
    if ( v14 == 7 )
    {
      v22 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 936))(this, 367, 0);
      sub_100C7570((volatile signed __int32 *)this, v22, COERCE_FLOAT(1), 1);
      return;
    }
    if ( (v13 & 1) != 0 || (v15 = 30, *(_DWORD *)(this + 3364) != 30) )
    {
      v16 = sub_100CF460((_DWORD *)this);
      v17 = (__int16 *)v16;
      if ( (*(_BYTE *)(this + 256) & 2) != 0 )
      {
        v15 = 8;
        if ( *((float *)&v27 + 1) <= 0.0 )
          v15 = 5;
        v24 = sub_102DAA90(this);
        sub_10019C10((_DWORD *)this, *(_DWORD *)(this + 5204), v24);
        goto LABEL_58;
      }
      if ( *((float *)&v27 + 1) > 0.0 )
      {
        v25 = sub_102DAA90(this);
        sub_10019C10((_DWORD *)this, *(_DWORD *)(this + 5204), v25);
        if ( v17 )
        {
          if ( !*(_BYTE *)(this + 5105) )
          {
            v18 = *(int (__thiscall **)(__int16 *))(*(_DWORD *)v17 + 1248);
            if ( *(float *)(dword_106E06EC + 44) + 25.0 <= *((float *)&v27 + 1) )
            {
              if ( v18(v17) == 1 )
              {
                v15 = 985;
                goto LABEL_77;
              }
              if ( !sub_100D0E00(v17) )
              {
                v15 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v17 + 1248))(v17) != 0 ? 992 : 1027;
                goto LABEL_77;
              }
              v15 = 1041;
            }
            else
            {
              if ( v18(v17) == 1 )
              {
                v15 = 356;
LABEL_77:
                sub_10019C10((_DWORD *)this, *(_DWORD *)(this + 5208), *(float *)(this + 3248));
                goto LABEL_58;
              }
              if ( !sub_100D0E00(v17) )
              {
                v15 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v17 + 1248))(v17) != 0 ? 322 : 312;
                goto LABEL_77;
              }
              v15 = 6;
            }
LABEL_75:
            sub_10019C10((_DWORD *)this, *(_DWORD *)(this + 5212), *(float *)(this + 3248));
            goto LABEL_77;
          }
          sub_10019C10((_DWORD *)this, *(_DWORD *)(this + 5212), *(float *)(this + 3248));
          if ( *(float *)(dword_106E06EC + 44) + 25.0 > *((float *)&v27 + 1) )
          {
LABEL_57:
            v15 = 6;
            goto LABEL_58;
          }
        }
        else
        {
          v26 = *(float *)(this + 3248);
          if ( *(float *)(dword_106E06EC + 44) + 25.0 > *((float *)&v27 + 1) )
          {
            sub_10019C10((_DWORD *)this, *(_DWORD *)(this + 5212), v26);
            goto LABEL_57;
          }
          sub_10019C10((_DWORD *)this, *(_DWORD *)(this + 5212), v26);
        }
        v15 = 11;
        goto LABEL_58;
      }
      if ( v16 )
      {
        if ( *(_BYTE *)(this + 5105) )
        {
          v15 = 1;
          sub_10019C10((_DWORD *)this, *(_DWORD *)(this + 5212), *(float *)(this + 3248));
          goto LABEL_58;
        }
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 1248))(v16) == 1 )
        {
          v15 = 984;
          goto LABEL_77;
        }
        if ( !sub_100D0E00(v17) )
        {
          v15 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v17 + 1248))(v17) != 0 ? 321 : 1026;
          goto LABEL_77;
        }
        v15 = 332;
        goto LABEL_75;
      }
      sub_10019C10((_DWORD *)this, *(_DWORD *)(this + 5212), *(float *)(this + 3248));
      v15 = 1;
    }
  }
LABEL_58:
  v19 = *(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 936);
  *(_DWORD *)(this + 3364) = v15;
  v20 = v19(this, v15, 0);
  v21 = sub_100BDCE0(this, v20);
  if ( v21 == -1 )
  {
    v21 = sub_100BDCE0(this, v15);
    if ( v21 == -1 )
      v21 = 0;
  }
  if ( *(_DWORD *)(this + 908) != v21 )
  {
    v27 = 1.0;
    sub_10045730((float *)(this + 864), &v27);
    sub_100C3330(this, v21);
    sub_10031B50(this, 0.0);
  }
}
