void __thiscall sub_103A90D0(int this)
{
  unsigned int *v2; // edi
  int v3; // ebx
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // eax
  float v8; // edx
  float v9; // eax
  unsigned int *v10; // ecx
  _DWORD *v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ebx
  int *v15; // edi
  unsigned int v16; // ebx
  int v17; // ecx
  float *v18; // eax
  double v19; // st7
  float *v20; // eax
  _DWORD *v21; // ecx
  float *v22; // edi
  float *v23; // eax
  double v24; // st7
  float *v25; // edi
  float *v26; // eax
  float *v27; // eax
  double v28; // st7
  float *v29; // eax
  float *v30; // [esp+14h] [ebp-88h]
  int v31; // [esp+1Ch] [ebp-80h]
  float v32; // [esp+20h] [ebp-7Ch]
  float v33; // [esp+24h] [ebp-78h]
  _BYTE v34[44]; // [esp+30h] [ebp-6Ch] BYREF
  float v35; // [esp+5Ch] [ebp-40h]
  float v36[3]; // [esp+84h] [ebp-18h] BYREF
  int v37; // [esp+90h] [ebp-Ch] BYREF
  float v38; // [esp+94h] [ebp-8h]
  float v39; // [esp+98h] [ebp-4h]
  int savedregs; // [esp+9Ch] [ebp+0h] BYREF

  sub_100397D0((int *)this);
  sub_10023E00((char *)this, 78);
  sub_10023E00((char *)this, 77);
  sub_10023E00((char *)this, 80);
  sub_10023E00((char *)this, 79);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
    return;
  if ( !*(_DWORD *)(this + 3764) && !*(_BYTE *)(this + 4021)
    || sub_103A5070(this) && sub_1007E040(*(_DWORD **)(this + 2588)) )
  {
    *(float *)(this + 3868) = *(float *)(dword_106B31C8 + 12) + 5.0;
  }
  if ( sub_103A5070(this)
    && *(float *)(this + 3868) < (double)*(float *)(dword_106B31C8 + 12)
    && *(_DWORD *)(this + 3764) != 7 )
  {
    sub_10023CB0((char *)this, 78);
    *(float *)(this + 3872) = *(float *)(dword_106B31C8 + 12) + 10.0;
    *(float *)(this + 3876) = *(float *)(dword_106B31C8 + 12) + 15.0;
    sub_103A4C60(this);
  }
  if ( (sub_10023D10((_DWORD *)this, 53) || sub_10023D10((_DWORD *)this, 50)) && *(_DWORD *)(this + 3764) != 7 )
  {
    v2 = (unsigned int *)(*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1460))(this, 1048351);
    if ( v2 )
    {
      if ( (unsigned __int8)sub_103E0CF0(0) )
      {
        v3 = *(_DWORD *)this;
        v4 = sub_1026A890(v2);
        if ( (*(int (__thiscall **)(int, int))(v3 + 1080))(this, v4) != 3 )
        {
          v5 = *(_DWORD *)this;
          v6 = sub_1026A890(v2);
          if ( (*(unsigned __int8 (__thiscall **)(int, int, int, _DWORD))(v5 + 548))(this, v6, 16449, 0) )
          {
            v7 = sub_1026A890(v2);
            sub_103A4F80(this, v7, 5.0);
          }
        }
      }
      else
      {
        v8 = *((float *)v2 + 10);
        v9 = *((float *)v2 + 11);
        v37 = *((int *)v2 + 9);
        v38 = v8;
        v39 = v9;
        sub_103A4FF0(this, (float *)&v37, 5.0);
      }
      *(_DWORD *)(this + 3764) = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(
                                   dword_106B31E4,
                                   0,
                                   2) != 0
                               ? 0
                               : 4;
    }
  }
  if ( *(float *)(this + 3872) < (double)*(float *)(dword_106B31C8 + 12) && !sub_103A5070(this) )
  {
    v11 = sub_103A8C40(v10);
    if ( v11 )
    {
      sub_103A4F80(this, (int)v11, 5.0);
      *(_DWORD *)(this + 3764) = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(
                                   dword_106B31E4,
                                   0,
                                   3) != 0
                               ? 0
                               : 4;
      sub_10023CB0((char *)this, 77);
    }
  }
  if ( *(float *)(this + 3876) < (double)*(float *)(dword_106B31C8 + 12) && !sub_103A5070(this) )
  {
    v12 = sub_10072DB0(this, 2, 0, 1500.0, 0);
    sub_100448D0((_DWORD *)this, v12);
    if ( sub_1002A5B0((_DWORD *)this) )
    {
      *(float *)(this + 3876) = *(float *)(dword_106B31C8 + 12) + 15.0;
      *(_DWORD *)(this + 3764) = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(
                                   dword_106B31E4,
                                   0,
                                   2) != 0
                               ? 0
                               : 4;
      v13 = sub_1002A5B0((_DWORD *)this);
      sub_103A6870(v13, 5.0);
      sub_10023CB0((char *)this, 77);
    }
  }
  v14 = *(_DWORD *)(this + 3920);
  if ( v14 != -1 )
  {
    v15 = &off_1061BE18[4 * (*(_DWORD *)(this + 3920) & 0xFFF) + 1];
    v16 = v14 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 3920) & 0xFFF) + 2] == v16 && *v15 && sub_103A5070(this) )
    {
      v17 = v15[1] == v16 ? *v15 : 0;
      v18 = (float *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v17 + 536))(v17, &v37);
      v32 = v18[1] * v18[1] + *v18 * *v18 + v18[2] * v18[2];
      if ( off_10689708(v32) < 25.0 )
      {
        if ( sub_10022C40((_DWORD *)this) )
        {
          *(float *)&v37 = *(float *)(this + 3892) - *(float *)(this + 3904);
          v38 = *(float *)(this + 3896) - *(float *)(this + 3908);
          v19 = *(float *)(this + 3900) - *(float *)(this + 3912);
          v39 = v19;
          sub_100D7A40((float *)&v37);
          if ( v19 < 100.0 )
            goto LABEL_41;
        }
        else
        {
          v20 = (float *)sub_103A5910((float *)this, v36);
          *(float *)&v37 = *v20 - *(float *)(this + 716);
          v38 = v20[1] - *(float *)(this + 720);
          v39 = v20[2] - *(float *)(this + 724);
          off_10689714();
          if ( *(float *)(this + 3928) * v38 + *(float *)&v37 * *(float *)(this + 3924) + *(float *)(this + 3932) * v39 > 0.95 )
LABEL_41:
            sub_10023CB0((char *)this, 80);
        }
      }
    }
  }
  sub_10023E00((char *)this, 79);
  if ( !*(_DWORD *)(this + 3764)
    && *(float *)(this + 3884) < (double)*(float *)(dword_106B31C8 + 12)
    && sub_103A5070(this)
    && *(float *)(this + 3628) * *(float *)(this + 3628)
     + *(float *)(this + 3624) * *(float *)(this + 3624)
     + *(float *)(this + 3632) * *(float *)(this + 3632) < 4096.0 )
  {
    v22 = (float *)sub_10019640(v21);
    v23 = sub_103A50F0((float *)this, v36);
    *(float *)&v37 = *v23 - *v22;
    v38 = v23[1] - v22[1];
    v24 = v23[2] - v22[2];
    v39 = v24;
    sub_10018D40((float *)&v37);
    if ( v24 > 64.0 && v24 < 128.0 )
    {
      v25 = (float *)sub_10019640((_DWORD *)this);
      v26 = sub_103A50F0((float *)this, v36);
      *(float *)&v37 = *v26 - *v25;
      v38 = v26[1] - v25[1];
      v39 = v26[2] - v25[2];
      v33 = sub_10029300((float *)this, (float *)&v37);
      v27 = (float *)sub_1001F410((_DWORD *)this);
      v28 = v27[1];
      sub_10019610(v27[1], v33);
      if ( v28 < 4.0 )
      {
        v31 = sub_10022C40((_DWORD *)this);
        v30 = sub_103A50F0((float *)this, v36);
        v29 = (float *)sub_10019640((_DWORD *)this);
        sub_1002A5F0((int)&savedregs, this, v29, v30, 16449, v31, 0, (int)v34);
        if ( 1.0 == v35 )
          sub_10023CB0((char *)this, 79);
      }
    }
  }
}
