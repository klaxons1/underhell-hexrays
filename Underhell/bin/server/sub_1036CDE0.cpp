void __thiscall sub_1036CDE0(_BYTE *this, int a2)
{
  _BYTE *v2; // esi
  char v3; // al
  float *v4; // edi
  float *v5; // eax
  int v6; // ecx
  int v7; // edi
  int v8; // eax
  float *v9; // eax
  float *v10; // eax
  float *v11; // eax
  double v12; // st6
  double v13; // st7
  float *v14; // eax
  float *v15; // [esp-8h] [ebp-D8h]
  float v16; // [esp+0h] [ebp-D0h]
  int v17; // [esp+8h] [ebp-C8h]
  _BYTE v18[80]; // [esp+14h] [ebp-BCh] BYREF
  _BYTE v19[4]; // [esp+64h] [ebp-6Ch] BYREF
  _DWORD v20[12]; // [esp+68h] [ebp-68h] BYREF
  char v21; // [esp+9Bh] [ebp-35h]
  int v22[3]; // [esp+B8h] [ebp-18h] BYREF
  float v23; // [esp+C4h] [ebp-Ch] BYREF
  float v24; // [esp+C8h] [ebp-8h]
  float v25; // [esp+CCh] [ebp-4h]
  int savedregs; // [esp+D0h] [ebp+0h] BYREF

  v2 = this;
  switch ( *(_DWORD *)a2 )
  {
    case 0x4A:
    case 0x4B:
    case 0x9B:
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 732))(this) )
      {
        sub_10027CD0(v2, 0);
        v2[3657] = 0;
        *((_DWORD *)v2 + 49) = 0;
        sub_100EC3F0(v2, (int)sub_10039730, 0.0, 0);
        sub_10039F40((int *)v2, 1);
        if ( v2[3658] )
        {
          v2[3658] = 0;
          *(float *)&a2 = *(float *)(dword_106B31C8 + 12) + 1.2;
          sub_1002ABA0((float *)v2 + 418, (float *)&a2);
        }
      }
      return;
    case 0x97:
      if ( (this[256] & 1) != 0 )
        goto LABEL_5;
      v4 = (float *)sub_10019660(this);
      v5 = (float *)sub_10019640(v2);
      v6 = *((_DWORD *)v2 + 651);
      *(float *)v22 = *v5 + *v4;
      *(float *)&v22[1] = v4[1] + v5[1];
      *(float *)&v22[2] = v4[2] + v5[2];
      sub_10078720(v6, (int)v22, -1.0);
      return;
    case 0x98:
      if ( *((float *)this + 907) < (double)*(float *)(dword_106B31C8 + 12) )
      {
        v7 = *(_DWORD *)this;
        a2 = 2 * *((_DWORD *)this + 55);
        v16 = (float)a2;
        v8 = sub_10248110((int)v18, (int)this, (int)this, v16, 0x4000, 0);
        (*(void (__thiscall **)(_BYTE *, int))(v7 + 256))(v2, v8);
      }
      return;
    case 0x99:
      if ( *(float *)(dword_106B31C8 + 12) > (double)*((float *)this + 706) )
      {
        *((float *)this + 706) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                   dword_106B31E4,
                                   1.0,
                                   2.0)
                               + *(float *)(dword_106B31C8 + 12);
        sub_10247EC0(v20);
        (*(void (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)v2 + 1624))(v2, v20);
      }
      return;
    case 0x9F:
      goto LABEL_22;
    case 0xA0:
      if ( *(float *)(dword_106B31C8 + 12) >= (double)*((float *)this + 915) )
      {
        v9 = (float *)sub_10019640(this);
        if ( sub_1036BC70(v2, v9) )
        {
          *(float *)&a2 = NAN;
          sub_100332F0((int *)v2 + 62, &a2);
          sub_10023400((unsigned __int16 *)v2, 4);
          sub_10027CD0(v2, 0);
        }
        else
        {
          *((float *)v2 + 915) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                   dword_106B31E4,
                                   0.5,
                                   1.0)
                               + *(float *)(dword_106B31C8 + 12);
        }
      }
      return;
    case 0xA1:
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 651) + 76))(*((_DWORD *)this + 651), -1);
      v3 = sub_10021530(v2);
      goto LABEL_3;
    case 0xA2:
      sub_10043050(this, 0, 0);
      v3 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 732))(v2);
      goto LABEL_3;
    case 0xA3:
      if ( sub_102EBE70((int)this, 307.20001) )
        sub_1036A600((float *)v2);
LABEL_22:
      if ( sub_10023D10(v2, 21) )
        goto LABEL_4;
      v3 = sub_10023D10(v2, 22);
LABEL_3:
      if ( v3 )
      {
LABEL_4:
        this = v2;
LABEL_5:
        sub_10027CD0(this, 0);
      }
      return;
    case 0xA5:
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 732))(this) )
      {
        sub_10023E00(v2, 21);
        sub_100EA9A0((int *)v2, 1024);
        sub_10027CD0(v2, 0);
      }
      return;
    case 0xA6:
      v10 = (float *)sub_10019660(this);
      v23 = *v10 * 0.25;
      v24 = v10[1] * 0.25;
      v25 = 0.25 * v10[2];
      v11 = (float *)sub_10019640(v2);
      v12 = v11[1] + v24;
      v17 = *((_DWORD *)v2 + 419);
      v13 = v11[2] + v25;
      v23 = *v11 + v23;
      v24 = v12;
      v25 = v13;
      v15 = (float *)sub_10073730(v17);
      v14 = (float *)sub_10073710(*((_DWORD *)v2 + 419));
      sub_100231A0((int)&savedregs, (int)v2, &v23, &v23, v14, v15, 33570827, (int)v2, 0, (int)v19);
      if ( v21 == 1 || (v2[256] & 1) != 0 )
      {
        sub_10023400((unsigned __int16 *)v2, 4);
        sub_10027CD0(v2, 0);
      }
      return;
    case 0xA7:
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 732))(this) )
      {
        sub_10023400((unsigned __int16 *)v2, 4);
        sub_10027CD0(v2, 0);
        v2[3672] = 0;
      }
      return;
    default:
      sub_100497D0((int *)this, (_DWORD *)a2);
      return;
  }
}
