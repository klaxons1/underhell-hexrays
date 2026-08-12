void __usercall sub_1031ADB0(int a1@<ecx>, long double a2@<st0>)
{
  int (__thiscall *v3)(int); // eax
  double v4; // st7
  float *v5; // eax
  double v6; // st7
  char v7; // cl
  double v8; // st7
  int (__thiscall *v9)(int); // eax
  double v10; // st7
  double v11; // st7
  bool v12; // zf
  double v13; // st6
  double v14; // st5
  double v15; // st5
  float v16; // [esp+0h] [ebp-2Ch]
  float v17; // [esp+0h] [ebp-2Ch]
  float v18; // [esp+0h] [ebp-2Ch]
  float v19; // [esp+4h] [ebp-28h]
  float v20; // [esp+4h] [ebp-28h]
  float v21; // [esp+8h] [ebp-24h]
  float v22; // [esp+8h] [ebp-24h]
  float v23; // [esp+Ch] [ebp-20h]
  float v24; // [esp+10h] [ebp-1Ch]
  float v25[3]; // [esp+18h] [ebp-14h] BYREF
  float v26; // [esp+24h] [ebp-8h]
  int v27; // [esp+28h] [ebp-4h]

  if ( (!(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) || *(_BYTE *)(a1 + 3692)) && *(_DWORD *)(a1 + 4212) )
  {
    sub_1031AC80(a1);
    *(_DWORD *)(a1 + 4212) = 0;
    a2 = *(float *)(dword_106B31C8 + 12);
    *(float *)(a1 + 4216) = *(float *)(dword_106B31C8 + 12);
  }
  switch ( *(_DWORD *)(a1 + 4212) )
  {
    case 0:
      v3 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 368);
      *(float *)(a1 + 4224) = *(float *)(dword_106E3A94 + 44);
      if ( !v3(a1) || *(_BYTE *)(a1 + 3692) )
        goto LABEL_33;
      v4 = *(float *)(dword_106B31C8 + 12) - *(float *)(a1 + 4216);
      if ( v4 > 0.30000001 )
      {
        sub_100B7100(a1);
        *(float *)&v27 = v4;
        sub_100B63D0((_DWORD *)a1, v25);
        v5 = (float *)sub_10019660((_DWORD *)a1);
        if ( v5[1] * v25[1] + *v5 * v25[0] < 0.0 )
        {
          v6 = -1.0;
          v7 = 0;
        }
        else
        {
          v6 = 1.0;
          v7 = 1;
        }
        if ( v6 * *(float *)&v27 > 1000.0 )
        {
          *(_BYTE *)(a1 + 4220) = v7;
          goto LABEL_14;
        }
        goto LABEL_25;
      }
      return;
    case 1:
      v8 = *(float *)(dword_106E3A94 + 44);
      *(float *)(a1 + 4224) = *(float *)(dword_106E3A94 + 44);
      sub_100B7100(a1);
      if ( *(_BYTE *)(a1 + 4220) )
      {
        if ( *(float *)(dword_106E38E4 + 44) - 1000.0 > v8 )
          return;
      }
      else if ( -(*(float *)(dword_106E38E4 + 44) - 1000.0) < v8 )
      {
        return;
      }
      if ( (double)*(int *)(a1 + 220) > *(float *)(a1 + 4236) )
      {
LABEL_14:
        *(_DWORD *)(a1 + 4212) = 4;
        *(float *)(a1 + 4216) = *(float *)(dword_106B31C8 + 12);
        sub_10316A20((_DWORD *)a1);
      }
      else
      {
        v9 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 448);
        v26 = *(float *)(dword_106E3ADC + 44);
        *(float *)&v27 = COERCE_FLOAT(v9(a1));
        *(float *)(a1 + 4236) = *(float *)(a1 + 4236) - (double)v27 * v26;
        v10 = *(float *)(dword_106B31C8 + 12);
        *(_DWORD *)(a1 + 4212) = 5;
        *(float *)(a1 + 4232) = v10;
        *(float *)(a1 + 4216) = *(float *)(dword_106B31C8 + 12);
        sub_1023C380((_DWORD *)a1, (int)"NPC_AttackHelicopter.MegabombAlert", 0.0, 0);
      }
      return;
    case 2:
      goto LABEL_42;
    case 3:
      *(float *)(a1 + 4224) = 0.0;
      sub_100B7100(a1);
      a2 = fabs(0.0);
      if ( a2 > 2000.0 )
      {
        *(_DWORD *)(a1 + 4212) = 2;
        return;
      }
LABEL_42:
      sub_100B7100(a1);
      *(float *)(a1 + 4224) = 0.0;
      if ( *(float *)(dword_106B31C8 + 12) - *(float *)(a1 + 4216) < *(float *)(dword_106E3974 + 44) && a2 <= 3500.0 )
        return;
      v12 = *(_BYTE *)(a1 + 4220) == 0;
      goto LABEL_45;
    case 4:
      sub_100B7100(a1);
      *(float *)&v27 = a2;
      v13 = *(float *)(dword_106E3A94 + 44);
      v14 = *(float *)(dword_106E392C + 44);
      v12 = *(_BYTE *)(a1 + 4220) == 0;
      v26 = *(float *)(dword_106E392C + 44);
      if ( v12 )
      {
        v15 = -v14;
        v26 = v15;
        v23 = v13;
        v22 = v15;
        v20 = v15 - 2000.0;
        v17 = a2;
        *(float *)(a1 + 4224) = sub_10312DD0(v17, v20, v22, v23, 0.0);
        if ( v26 > (double)*(float *)&v27 )
          return;
      }
      else
      {
        v24 = v13;
        v21 = v14 + 2000.0;
        v19 = v14;
        v16 = a2;
        *(float *)(a1 + 4224) = sub_10312DD0(v16, v19, v21, 0.0, v24);
        if ( v26 < (double)*(float *)&v27 )
          return;
      }
      if ( sub_10313B50((_DWORD *)a1) )
      {
        *(_DWORD *)(a1 + 4212) = 6;
        *(float *)(a1 + 4216) = *(float *)(dword_106B31C8 + 12);
      }
      else
      {
        sub_1031AD10(a1);
        *(_DWORD *)(a1 + 4212) = 2;
LABEL_33:
        *(float *)(a1 + 4216) = *(float *)(dword_106B31C8 + 12);
      }
      return;
    case 5:
      v11 = *(float *)(dword_106E3A94 + 44);
      *(float *)(a1 + 4224) = *(float *)(dword_106E3A94 + 44);
      sub_100B7100(a1);
      v7 = *(_BYTE *)(a1 + 4220);
      if ( v7 )
      {
        if ( -(*(float *)(dword_106E38E4 + 44) - 1000.0) < v11 )
          return;
        v12 = v7 == 0;
      }
      else
      {
        if ( *(float *)(dword_106E38E4 + 44) - 1000.0 > v11 )
          return;
LABEL_25:
        v12 = v7 == 0;
      }
LABEL_45:
      *(_BYTE *)(a1 + 4220) = v12;
      *(_DWORD *)(a1 + 4212) = 1;
      *(float *)(a1 + 4216) = *(float *)(dword_106B31C8 + 12);
      return;
    case 6:
      if ( sub_103160E0((float *)a1)
        && *(_DWORD *)(a1 + 4076)
        && *(float *)(dword_106B31C8 + 12) - *(float *)(a1 + 4216) >= 6.0 )
      {
        sub_1031AD10(a1);
      }
      v18 = *(float *)(dword_106B31C8 + 12) - *(float *)(a1 + 4216);
      *(float *)(a1 + 4116) = sub_10312DD0(v18, 6.0, 11.0, 256.0, 64.0);
      *(float *)(a1 + 4224) = *(float *)(dword_106E3A94 + 44);
      if ( !sub_10313B50((_DWORD *)a1) )
      {
        sub_1031AD10(a1);
        *(_DWORD *)(a1 + 4212) = 2;
        *(float *)(a1 + 4216) = *(float *)(dword_106B31C8 + 12);
      }
      return;
    default:
      return;
  }
}
