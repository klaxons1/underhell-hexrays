void __thiscall sub_1035E5C0(int *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // edx
  _DWORD *v5; // eax
  int *v6; // eax
  int v7; // ecx
  float v8; // edx
  float v9; // eax
  float *v10; // eax
  double v11; // st6
  double v12; // st7
  double v13; // st7
  float *v14; // eax
  double v15; // st6
  double v16; // st7
  int v17; // edx
  int v18; // eax
  int *v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // edi
  int v23; // eax
  int v24; // eax
  int v25; // edi
  char v26; // al
  int v27; // eax
  int v28; // eax
  double v29; // st7
  long double v30; // st6
  double v31; // st7
  double v32; // st6
  int v33; // [esp+14h] [ebp-48h]
  int v34; // [esp+14h] [ebp-48h]
  float v35[12]; // [esp+20h] [ebp-3Ch] BYREF
  int v36; // [esp+50h] [ebp-Ch] BYREF
  float v37; // [esp+54h] [ebp-8h]
  float v38; // [esp+58h] [ebp-4h]
  float v39; // [esp+64h] [ebp+8h]

  switch ( *a2 )
  {
    case 0x1F:
      if ( (int *)sub_10022C70(this) == this )
        this[652] = -1;
      if ( sub_10022C70(this) )
      {
        sub_1035D090((int)this, 1);
        v22 = *this;
        v23 = sub_10022C70(this);
        (*(void (__thiscall **)(int *, int))(v22 + 1504))(this, v23);
        *((_BYTE *)this + 3644) = 0;
        sub_10027CD0(this, 0);
        sub_100448D0(this, 0);
      }
      else
      {
        if ( sub_1002A5B0(this) )
        {
          v24 = sub_1002A5B0(this);
          sub_10070340(v24, (int)this, (float *)&v36);
          sub_100223F0(2);
          sub_10020460(this, 4);
          v25 = this[581];
          v34 = dword_10672234;
          this[581] = 4;
          sub_10042450(v35, (float *)&v36, -1, -1.0, 0, v34);
          v26 = (*(int (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)this[647] + 20))(this[647], v35, 0);
          this[581] = v25;
          if ( !v26 )
          {
            v27 = sub_1002A5B0(this);
            sub_10070510(v27, 0.30000001);
            sub_100448D0(this, 0);
          }
          sub_10020480(this, 4);
        }
        v28 = sub_1002A5B0(this);
        v19 = this;
        if ( v28 )
        {
          *((_BYTE *)this + 3644) = 0;
          goto LABEL_24;
        }
        (*(void (__thiscall **)(int *, int))(*this + 1312))(this, 11);
      }
      break;
    case 0x51:
      v18 = sub_10022C70(this);
      v19 = this;
      if ( v18 )
        goto LABEL_24;
      if ( !sub_1002A5B0(this) )
      {
        v20 = sub_10072DB0((int)this, 700, 18, 10000.0, 0);
        sub_100448D0(this, v20);
      }
      v21 = sub_1002A5B0(this);
      v19 = this;
      if ( v21 )
LABEL_24:
        sub_10027CD0(v19, 0);
      else
        (*(void (__thiscall **)(int *, int))(*this + 1312))(this, 4);
      break;
    case 0x97:
      if ( (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 4) == 1 )
        (*(void (__thiscall **)(int *))(*this + 1616))(this);
      sub_1023C380(this, (int)"NPC_Crow.Flap", 0.0, 0);
      v33 = dword_106E7ADC;
      *((_BYTE *)this + 3652) = 1;
      sub_10039F40(this, v33);
      break;
    case 0x98:
      v39 = (double)(unsigned __int16)(int)((double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(
                                                      dword_106B31E4,
                                                      -180,
                                                      180)
                                          * 182.04445)
          * 0.0054931641;
      v29 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              0.1,
              0.5);
      v30 = v39 * 0.017453292;
      *(float *)&v36 = cos(v30) * 220.0;
      v37 = sin(v30) * 220.0;
      v38 = v29 * 220.0;
      sub_100DD660((int)this, (float *)&v36);
      sub_10039F40(this, 26);
      *((_BYTE *)this + 3660) = 0;
      *((float *)this + 914) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                 dword_106B31E4,
                                 2.0,
                                 5.0)
                             + *(float *)(dword_106B31C8 + 12);
      break;
    case 0x9A:
      *(float *)&v36 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                         dword_106B31E4,
                         -48.0,
                         48.0);
      v31 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -48.0,
              48.0)
          + *((float *)this + 180);
      v32 = *((float *)this + 181);
      *((float *)this + 716) = *((float *)this + 179) + *(float *)&v36;
      *((float *)this + 717) = v31;
      *((float *)this + 718) = v32;
      sub_10027CD0(this, 0);
      break;
    case 0x9B:
      v3 = (*(int (__thiscall **)(int *))(*this + 368))(this);
      v4 = *this;
      if ( v3 )
      {
        v5 = (_DWORD *)(*(int (__thiscall **)(int *))(v4 + 368))(this);
        v6 = sub_10019640(v5);
        v7 = *v6;
        v8 = *((float *)v6 + 1);
        v9 = *((float *)v6 + 2);
        v36 = v7;
        v37 = v8;
        v38 = v9;
        v38 = *((float *)sub_10019640(this) + 2);
        v10 = (float *)sub_10019640(this);
        v11 = v10[1] - v37;
        v12 = v10[2] - v38;
        *((float *)this + 716) = *v10 - *(float *)&v36;
        *((float *)this + 717) = v11;
        *((float *)this + 718) = v12;
        off_10689714();
        v13 = (double)((*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 32)
                     + 32);
        *(float *)&v36 = v13 * *((float *)this + 716);
        v37 = v13 * *((float *)this + 717);
        v38 = v13 * *((float *)this + 718);
        v14 = (float *)sub_10019640(this);
        v15 = v14[1] + v37;
        v16 = v14[2] + v38;
        *((float *)this + 716) = *v14 + *(float *)&v36;
        *((float *)this + 717) = v15;
        *((float *)this + 718) = v16;
        sub_10078690(this[651], (int)(this + 716), 0.0, 0.0);
        sub_10027CD0(this, 0);
      }
      else
      {
        (*(void (__thiscall **)(int *, const char *))(v4 + 1312))(this, "No enemy");
      }
      break;
    case 0x9C:
      sub_10039F40(this, 31);
      this[912] = this[181];
      break;
    case 0x9D:
      sub_100EA9A0(this, 1024);
      sub_100223F0(0);
      sub_10020480(this, 4);
      sub_10020460(this, 1);
      sub_100E0970((int)this, v17, 3, 0);
      *((float *)this + 908) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                 dword_106B31E4,
                                 5.0,
                                 10.0)
                             + *(float *)(dword_106B31C8 + 12);
      break;
    case 0x9F:
      return;
    default:
      sub_10046510((int)this, (int)a2);
      break;
  }
}
