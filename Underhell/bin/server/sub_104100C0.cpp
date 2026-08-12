int __thiscall sub_104100C0(float *this)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  float *v7; // eax
  int v8; // ecx
  float *v9; // edi
  double v10; // st6
  double v11; // st7
  double v12; // st4
  double v13; // st7
  double v14; // st4
  double v15; // st5
  float v16; // edx
  float v17; // eax
  unsigned int v18; // eax
  int v19; // ebx
  int v20; // ecx
  double v21; // st4
  int v22; // ecx
  double v23; // st7
  double v24; // st6
  double v25; // st5
  double v26; // st7
  double v27; // rtt
  double v28; // st5
  double v29; // st6
  double v30; // st7
  double v31; // st6
  float v32; // eax
  float v33; // edx
  double v34; // st7
  float v35; // eax
  float v36; // edx
  double v37; // st7
  long double v38; // st7
  float v39; // [esp+4h] [ebp-A4h]
  float v40; // [esp+4h] [ebp-A4h]
  float v41; // [esp+8h] [ebp-A0h]
  float v42; // [esp+8h] [ebp-A0h]
  _BYTE v43[24]; // [esp+10h] [ebp-98h] BYREF
  float v44; // [esp+28h] [ebp-80h]
  float v45; // [esp+2Ch] [ebp-7Ch]
  float v46; // [esp+30h] [ebp-78h]
  float v47; // [esp+3Ch] [ebp-6Ch]
  float v48[3]; // [esp+64h] [ebp-44h] BYREF
  float v49; // [esp+70h] [ebp-38h] BYREF
  float v50; // [esp+74h] [ebp-34h]
  float v51; // [esp+78h] [ebp-30h]
  float v52; // [esp+7Ch] [ebp-2Ch]
  float v53; // [esp+80h] [ebp-28h]
  float v54; // [esp+84h] [ebp-24h]
  float v55; // [esp+88h] [ebp-20h]
  float v56; // [esp+8Ch] [ebp-1Ch]
  float v57; // [esp+90h] [ebp-18h] BYREF
  float v58; // [esp+94h] [ebp-14h]
  float v59; // [esp+98h] [ebp-10h]
  float v60; // [esp+9Ch] [ebp-Ch] BYREF
  float v61; // [esp+A0h] [ebp-8h]
  float v62; // [esp+A4h] [ebp-4h]
  int savedregs; // [esp+A8h] [ebp+0h] BYREF

  if ( 0.0 != this[530] && this[530] < (double)*(float *)(dword_106B31C8 + 12) )
    return (*(int (__thiscall **)(float *))(*(_DWORD *)this + 1152))(this);
  sub_1040FF90(this);
  v3 = *((_DWORD *)this + 555);
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * ((_DWORD)this[555] & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( off_1061BE18[4 * ((_DWORD)this[555] & 0xFFF) + 2] == v5 )
    {
      if ( *v4 )
      {
        if ( off_1061BE18[4 * ((_DWORD)this[555] & 0xFFF) + 2] == v5 )
          v6 = *v4;
        else
          v6 = 0;
        v7 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v6 + 504))(v6, &v57);
        v8 = *((_DWORD *)this + 63);
        v60 = *v7;
        v61 = v7[1];
        v62 = v7[2];
        if ( (v8 & 0x800) != 0 )
          sub_100DAE60((int)this);
        v9 = this + 145;
        v10 = v61 - this[146];
        v11 = v62 - this[147];
        v53 = v60 - this[145];
        v54 = v10;
        v55 = v11;
        off_10689714();
        if ( ((_DWORD)this[63] & 0x800) != 0 )
          sub_100DAE60((int)this);
        v12 = v60 - *v9;
        v13 = v12 * v12;
        v14 = v61 - this[146];
        v15 = v62 - this[147];
        v39 = v15 * v15 + v14 * v14 + v13;
        if ( off_10689708(v39) > 200.0 )
        {
          if ( ((_DWORD)this[63] & 0x1000) != 0 )
            sub_100DAFD0((int)this);
          v16 = this[120];
          v17 = this[121];
          v60 = this[119];
          v61 = v16;
          v62 = v17;
          off_10689714();
          v18 = *((_DWORD *)this + 555);
          v60 = v60 * 50.0;
          v61 = v61 * 50.0;
          v62 = 50.0 * v62;
          if ( v18 == -1 || off_1061BE18[4 * (v18 & 0xFFF) + 2] != v18 >> 12 )
            v19 = 0;
          else
            v19 = off_1061BE18[4 * (v18 & 0xFFF) + 1];
          if ( ((_DWORD)this[63] & 0x800) != 0 )
            sub_100DAE60((int)this);
          v20 = *((_DWORD *)this + 63) >> 11;
          v57 = *v9 + v60;
          v58 = this[146] + v61;
          v59 = this[147] + v62;
          if ( (v20 & 1) != 0 )
            sub_100DAE60((int)this);
          sub_1002A5F0((int)&savedregs, (int)this, this + 145, &v57, 1174421507, v19, 0, (int)v43);
          if ( 1.0 != v47 )
          {
            v21 = v46 * v62;
            v57 = v44 * -(v60 * v44 + v61 * v45 + v21);
            v58 = -(v60 * v44 + v61 * v45 + v21) * v45;
            v59 = 0.0;
            off_10689714();
            v53 = v57 + v53;
            v54 = v58 + v54;
            v55 = v55 + v59;
            off_10689714();
          }
        }
        if ( ((_DWORD)this[63] & 0x1000) != 0 )
          sub_100DAFD0((int)this);
        v41 = this[120] * this[120] + this[119] * this[119] + this[121] * this[121];
        off_10689708(v41);
        v22 = dword_106B31C8;
        v23 = this[551] + this[542];
        v24 = this[543] + v23;
        v25 = v23;
        v26 = this[544] + v24;
        if ( v25 <= *(float *)(dword_106B31C8 + 12) )
        {
          v27 = v25;
          v28 = v24;
          v29 = v27;
          if ( v28 > *(float *)(dword_106B31C8 + 12) )
          {
            v30 = (*(float *)(dword_106B31C8 + 12) - v29) / this[543] * this[541];
            v52 = v30;
            v31 = this[546] * v30;
LABEL_37:
            v56 = v31;
            if ( v30 <= 0.0 )
            {
              v38 = 0.0;
              goto LABEL_52;
            }
            if ( *((_DWORD *)this + 549) == 2 )
            {
              v42 = v30;
              sub_1040FDC0(this, v42);
            }
            if ( ((_DWORD)this[63] & 0x1000) != 0 )
              sub_100DAFD0((int)this);
            v32 = this[119];
            v33 = this[121];
            v58 = this[120];
            v57 = v32;
            v59 = v33;
            v34 = off_10689714();
            if ( v34 >= v56 )
              v56 = v34;
            if ( ((_DWORD)this[63] & 0x1000) != 0 )
              sub_100DAFD0((int)this);
            v35 = this[121];
            v36 = this[120];
            v60 = this[119];
            v62 = v35;
            v61 = v36;
            if ( *(float *)(dword_106B31C8 + 16) > 0.0 )
            {
              v37 = 1.0 - v52;
              v60 = v57 * v37 + v53 * v52;
              v61 = v58 * v37 + v54 * v52;
              v62 = v37 * v59 + v52 * v55;
            }
            off_10689714();
            v60 = v60 * v56;
            v61 = v61 * v56;
            v62 = v56 * v62;
            sub_100DD660((int)this, &v60);
            goto LABEL_49;
          }
          if ( v26 > *(float *)(dword_106B31C8 + 12) )
          {
            v30 = this[541];
LABEL_36:
            v52 = v30;
            v31 = this[546];
            goto LABEL_37;
          }
          if ( this[545] + v26 > *(float *)(dword_106B31C8 + 12) )
          {
            v30 = (1.0 - (*(float *)(dword_106B31C8 + 12) - v26) / this[545]) * this[541];
            goto LABEL_36;
          }
        }
        v38 = 0.0;
        goto LABEL_52;
      }
    }
  }
LABEL_49:
  v22 = dword_106B31C8;
  v38 = 0.0;
LABEL_52:
  v49 = v38;
  v50 = v38;
  v51 = v38;
  if ( v38 < this[547] )
  {
    v49 = sin(this[548] * *(float *)(v22 + 12) + this[554]) * this[547];
    v50 = cos(this[548] * *(float *)(v22 + 12) + this[554]) * this[547];
    v38 = -(cos(this[548] * *(float *)(v22 + 12) + this[554]) * this[547]);
    v51 = v38;
  }
  v51 = v38 - *(float *)(dword_106B6F0C + 44) * this[138] * *(float *)(v22 + 16);
  sub_100EA150((int)this, &v49);
  if ( ((_DWORD)this[63] & 0x1000) != 0 )
    sub_100DAFD0((int)this);
  sub_10422540(this + 119, v48);
  sub_100E11A0((int)this, v48);
  v40 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC4A0((int *)this, v40, 0);
}
