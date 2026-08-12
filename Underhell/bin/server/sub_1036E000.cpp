void __thiscall sub_1036E000(int this, int a2)
{
  int v3; // edi
  float *v4; // eax
  float *v5; // eax
  int v6; // edx
  float *v7; // eax
  double v8; // st7
  double v9; // st6
  double v10; // st5
  double v11; // st7
  double v12; // st7
  double v13; // st6
  double v14; // st5
  double v15; // st7
  int v16; // eax
  int v17; // edi
  int v18; // ecx
  double v19; // st7
  double v20; // st6
  double v21; // st7
  float *v22; // eax
  float *v23; // eax
  float *v24; // [esp+4h] [ebp-98h]
  float *v25; // [esp+8h] [ebp-94h]
  float v26; // [esp+14h] [ebp-88h]
  _BYTE v27[12]; // [esp+24h] [ebp-78h] BYREF
  float v28[18]; // [esp+30h] [ebp-6Ch] BYREF
  float v29[3]; // [esp+78h] [ebp-24h] BYREF
  float v30; // [esp+84h] [ebp-18h] BYREF
  float v31; // [esp+88h] [ebp-14h]
  float v32; // [esp+8Ch] [ebp-10h]
  float v33; // [esp+90h] [ebp-Ch] BYREF
  float v34; // [esp+94h] [ebp-8h]
  float v35; // [esp+98h] [ebp-4h]
  int savedregs; // [esp+9Ch] [ebp+0h] BYREF

  switch ( *(_DWORD *)a2 )
  {
    case 0x4A:
      goto LABEL_11;
    case 0x97:
      v16 = sub_101C5260((_DWORD *)this);
      v17 = v16;
      if ( !v16 )
        goto LABEL_5;
      v18 = *(_DWORD *)(v16 + 424);
      if ( v18 && ((*(int (__thiscall **)(int))(*(_DWORD *)v18 + 76))(v18) & 4) != 0 )
        sub_101CABB0(this, v17, 1, 0.5);
      v19 = 0.0;
      v35 = 0.0;
      v33 = 0.0;
      v20 = 0.0;
      v34 = 0.0;
      while ( v20 == v19 )
      {
        a2 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -1, 1);
        v33 = (float)a2;
        a2 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -1, 1);
        v21 = (double)a2;
        v34 = v21;
        if ( 0.0 != v33 )
          break;
        v20 = v21;
        v19 = 0.0;
      }
      off_10689714();
      sub_101C73D0((unsigned int *)this, 0);
      if ( sub_1036AE90(this) )
      {
        v30 = 0.0;
        v31 = 0.0;
        v32 = 1.0;
        sub_1036ADB0((float *)this, &v30);
      }
      v29[0] = v33 * 200.0;
      v29[1] = v34 * 200.0;
      v29[2] = v35 * 200.0 + 200.0;
      sub_100DD660(this, v29);
      break;
    case 0x98:
      *(float *)(this + 552) = sub_10260720(80.0);
      *(float *)(this + 3628) = *(float *)(dword_106B31C8 + 12) + 4.0;
      return;
    case 0x99:
    case 0x9F:
    case 0xA3:
      return;
    case 0x9A:
      *(_BYTE *)(this + 3656) = 0;
      sub_10023400((unsigned __int16 *)this, 4);
      sub_10035360((int *)this, 32);
      sub_10027CD0((_DWORD *)this, 0);
      return;
    case 0x9B:
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
      {
        (*(void (__thiscall **)(int, float *, _DWORD, float *))(*(_DWORD *)this + 528))(this, &v30, 0, &v33);
        v7 = (float *)sub_10019640((_DWORD *)this);
        *(float *)(this + 3632) = *v7;
        *(float *)(this + 3636) = v7[1];
        *(float *)(this + 3640) = v7[2];
        v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
               dword_106B31E4,
               80.0,
               150.0);
        v9 = v33 * v8;
        v10 = v34 * v8;
        v11 = v8 * v35;
        *(float *)(this + 3632) = v9 + *(float *)(this + 3632);
        *(float *)(this + 3636) = v10 + *(float *)(this + 3636);
        *(float *)(this + 3640) = v11 + *(float *)(this + 3640);
        v12 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                32.0,
                80.0);
        v13 = v30 * v12;
        v14 = v31 * v12;
        v15 = v12 * v32;
        *(float *)(this + 3632) = v13 + *(float *)(this + 3632);
        *(float *)(this + 3636) = v14 + *(float *)(this + 3636);
        *(float *)(this + 3640) = v15 + *(float *)(this + 3640);
        *(_BYTE *)(this + 3652) = 1;
LABEL_11:
        sub_10039F40((int *)this, 17);
      }
      else
      {
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 1312))(this, "No enemy");
      }
      return;
    case 0x9C:
      v26 = *(float *)(a2 + 4);
      v23 = (float *)sub_10019640((_DWORD *)this);
      if ( sub_10369B60((_DWORD *)this, v23, v26, 1) )
        sub_10027CD0((_DWORD *)this, 0);
      else
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 1312))(
          this,
          "TASK_HEADCRAB_FIND_BURROW_IN_POINT: Unable to find burrow in position\n");
      return;
    case 0x9D:
      sub_1036D540(this);
      sub_10027CD0((_DWORD *)this, 0);
      return;
    case 0x9E:
      sub_1036D590(this);
      sub_10027CD0((_DWORD *)this, 0);
      return;
    case 0xA0:
      v22 = (float *)sub_10019640((_DWORD *)this);
      if ( sub_1036BC70((_DWORD *)this, v22) )
      {
        a2 = -3;
        sub_100332F0((int *)(this + 248), &a2);
        sub_10023400((unsigned __int16 *)this, 4);
        sub_10027CD0((_DWORD *)this, 0);
      }
      return;
    case 0xA1:
      sub_1036D280((int *)this);
      return;
    case 0xA2:
      sub_1036B220((int *)this);
      return;
    case 0xA4:
      v3 = *(_DWORD *)(this + 1676);
      v4 = (float *)sub_10019640((_DWORD *)this);
      v33 = *v4;
      v34 = v4[1];
      v35 = v4[2] + 512.0;
      v25 = (float *)sub_10073730(v3);
      v24 = (float *)sub_10073710(v3);
      v5 = (float *)sub_10019640((_DWORD *)this);
      sub_100231A0((int)&savedregs, this, v5, &v33, v24, v25, 16395, this, 0, (int)v27);
      sub_100EA940((int *)this, 1024);
      *(_BYTE *)(this + 3672) = 1;
      sub_100352C0(this, v6, 0x20000);
      sub_100E0D20(this, v28);
LABEL_5:
      sub_10027CD0((_DWORD *)this, 0);
      break;
    case 0xA5:
      sub_10039F40((int *)this, dword_106E80F4);
      break;
    case 0xA6:
      sub_10039F40((int *)this, dword_106E80F0);
      break;
    case 0xA7:
      sub_10039F40((int *)this, dword_106E80EC);
      break;
    default:
      sub_10046510(this, a2);
      break;
  }
}
