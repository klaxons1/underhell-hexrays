char __thiscall sub_10033F30(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // edi
  int *v4; // ecx
  bool v5; // zf
  unsigned int v6; // eax
  int *v7; // ecx
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  int *v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // eax
  int v16; // eax
  unsigned int v17; // eax
  _BYTE *v18; // ebx
  int v19; // eax
  int v20; // ebx
  int v21; // eax
  int v22; // edx
  float *v23; // eax
  double v24; // st7
  double v25; // st6
  int (__thiscall *v26)(_DWORD *); // edx
  int v27; // eax
  float v29; // edx
  float v30; // eax
  double v31; // st7
  float v32; // eax
  int v33; // eax
  int v34; // eax
  float v35; // eax
  double v36; // st7
  double v37; // st6
  double v38; // st5
  int v39; // eax
  unsigned int v40; // edi
  int *v41; // ecx
  char v42[12]; // [esp+24h] [ebp-48h] BYREF
  float v43; // [esp+30h] [ebp-3Ch] BYREF
  float v44; // [esp+34h] [ebp-38h]
  float v45; // [esp+38h] [ebp-34h]
  float v46; // [esp+3Ch] [ebp-30h] BYREF
  float v47; // [esp+40h] [ebp-2Ch]
  float v48; // [esp+44h] [ebp-28h]
  float v49; // [esp+48h] [ebp-24h] BYREF
  float v50; // [esp+4Ch] [ebp-20h]
  float v51; // [esp+50h] [ebp-1Ch]
  float v52; // [esp+54h] [ebp-18h] BYREF
  float v53; // [esp+58h] [ebp-14h]
  float v54; // [esp+5Ch] [ebp-10h]
  int v55; // [esp+60h] [ebp-Ch] BYREF
  int v56; // [esp+64h] [ebp-8h]
  char v57; // [esp+6Bh] [ebp-1h]

  v2 = this[672];
  v3 = off_1061BE18;
  if ( v2 == -1 || off_1061BE18[4 * (this[672] & 0xFFF) + 2] != this[672] >> 12 )
    v56 = 0;
  else
    v56 = off_1061BE18[4 * (this[672] & 0xFFF) + 1];
  if ( v2 != -1 && (v4 = &off_1061BE18[4 * (v2 & 0xFFF) + 1], off_1061BE18[4 * (v2 & 0xFFF) + 2] == v2 >> 12) && *v4 )
  {
    if ( off_1061BE18[4 * (v2 & 0xFFF) + 2] == v2 >> 12 )
      v55 = *(_DWORD *)(*v4 + 868);
    else
      v55 = MEMORY[0x364];
  }
  else
  {
    v55 = this[64];
  }
  v5 = this[629] == 0;
  v57 = 0;
  if ( !v5 && v2 != -1 && off_1061BE18[4 * (v2 & 0xFFF) + 2] == v2 >> 12 && off_1061BE18[4 * (v2 & 0xFFF) + 1] )
  {
    v6 = this[626];
    v57 = 1;
    if ( v6 != -1 )
    {
      v7 = &off_1061BE18[4 * (v6 & 0xFFF) + 1];
      v8 = v6 >> 12;
      if ( v7[1] == v8 )
      {
        if ( *v7 )
        {
          if ( v7[1] == v8 )
            v9 = *v7;
          else
            v9 = 0;
          sub_101DAB00(this, v9);
          v3 = off_1061BE18;
        }
      }
    }
    v10 = this[621];
    if ( v10 != -1 && v3[4 * (this[621] & 0xFFF) + 2] == v10 >> 12 && v3[4 * (this[621] & 0xFFF) + 1] )
      sub_1010DD80((int)this, (int)this, 0.0);
    this[626] = -1;
    this[621] = -1;
    *((float *)this + 625) = 0.0;
    this[630] = -1;
    this[629] = 0;
    v3 = off_1061BE18;
  }
  v11 = this[672];
  if ( v11 != -1
    && (v12 = &v3[4 * (this[672] & 0xFFF) + 1], v13 = v11 >> 12, v3[4 * (this[672] & 0xFFF) + 2] == v13)
    && *v12 )
  {
    if ( v3[4 * (this[672] & 0xFFF) + 2] == v13 )
      v14 = *v12;
    else
      v14 = 0;
    *(_DWORD *)(v14 + 880) = -1;
    v15 = this[672];
    if ( v15 == -1 || off_1061BE18[4 * (this[672] & 0xFFF) + 2] != v15 >> 12 )
      v16 = 0;
    else
      v16 = off_1061BE18[4 * (this[672] & 0xFFF) + 1];
    sub_100EAAB0(this, *(_DWORD *)(v16 + 864));
    v17 = this[672];
    if ( v17 == -1 || off_1061BE18[4 * (this[672] & 0xFFF) + 2] != v17 >> 12 )
      sub_100EBE30(MEMORY[0x368]);
    else
      sub_100EBE30(*(_DWORD *)(off_1061BE18[4 * (this[672] & 0xFFF) + 1] + 872));
  }
  else
  {
    sub_101129A0(*((unsigned __int16 *)this + 178) | 0x10);
  }
  this[672] = -1;
  this[605] = -1;
  v18 = this + 56;
  this[652] = -1;
  if ( *((_BYTE *)this + 224) == 1 )
  {
    if ( (int)this[55] > 0 )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 464))(this, this + 55);
      this[55] = 0;
    }
    sub_101129A0(*((unsigned __int16 *)this + 178) | 4);
    v19 = this[581];
    if ( v19 != 7 )
      *((float *)this + 582) = *(float *)(dword_106B31C8 + 12);
    this[581] = 7;
    if ( this[584] != 7 )
      this[584] = 7;
    if ( v19 != 7 )
      (*(void (__thiscall **)(_DWORD *, int, int))(*this + 1404))(this, v19, 7);
    if ( *v18 != 2 )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 472))(this, this + 56);
      *v18 = 2;
    }
    v20 = (*(int (__thiscall **)(_DWORD *))(this[80] + 4))(this + 80);
    v21 = (*(int (__thiscall **)(_DWORD *))(this[80] + 8))(this + 80);
    v22 = this[80];
    v55 = v21;
    v23 = (float *)(*(int (__thiscall **)(_DWORD *))(v22 + 8))(this + 80);
    v24 = *(float *)(v55 + 4);
    v25 = *(float *)(v20 + 8);
    v26 = *(int (__thiscall **)(_DWORD *))(this[80] + 4);
    v43 = *v23;
    v44 = v24;
    v45 = v25 + 2.0;
    v27 = v26(this + 80);
    sub_1025F360(this, v27, &v43);
    if ( v56 && (*(_DWORD *)(v56 + 248) & 8) != 0 )
    {
      this[50] = 0;
      sub_100EC3F0(0, 0.0, 0);
      this[49] = 0;
    }
    else
    {
      sub_100E31F0(10.0, 1);
    }
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 764))(this) )
    {
      sub_10031AF0((int)this);
      sub_100EAB80(this, 8);
    }
    sub_100E0970(0, 0);
    return 0;
  }
  else
  {
    if ( v56 && *(_DWORD *)(v56 + 808) && *(_BYTE *)(v56 + 877) )
    {
      if ( (*(_DWORD *)(v56 + 248) & 0x80) == 0 )
      {
        sub_100BEB30(0, &v46, v42);
        v29 = *((float *)this + 180);
        v30 = *((float *)this + 181);
        v49 = *((float *)this + 179);
        v50 = v29;
        v51 = v30;
        v43 = v49 - v46;
        v44 = v29 - v47;
        v31 = v30 - v48;
        v45 = v31;
        sub_10018D40(&v43);
        if ( v31 < 8.0 )
        {
          v46 = v49;
          v47 = v50;
          v48 = v51;
        }
        v32 = *((float *)this + 181);
        v52 = v46;
        v53 = v47;
        v54 = v32 + 1.0;
        if ( (v55 & 0x400) != 0 )
        {
          v54 = v48;
          sub_100E10C0(&v52);
        }
        else
        {
          sub_100E10C0(&v52);
          v33 = sub_10261B20();
          v34 = sub_102615C0(this, 33701899, v33);
          if ( v34 < 0 || *(_DWORD *)(dword_10691054 + 48) )
          {
            sub_100E10C0(&v49);
          }
          else if ( !v34 )
          {
            v35 = *((float *)this + 180);
            v43 = *((float *)this + 179);
            v45 = v48;
            v44 = v35;
            sub_100E10C0(&v43);
            sub_101C73D0(0);
          }
        }
        v36 = *((float *)this + 179);
        v52 = *((float *)this + 179);
        v37 = *((float *)this + 180);
        v53 = *((float *)this + 180);
        v38 = *((float *)this + 181);
        v54 = *((float *)this + 181);
        v43 = v49 - v36;
        v44 = v50 - v37;
        v45 = v51 - v38;
        if ( sub_100D7A40(&v43) > 8.0 )
        {
          (*(void (__thiscall **)(_DWORD *, float *, _DWORD, _DWORD))(*this + 416))(this, &v52, 0, 0);
          sub_100E10C0(&v52);
          sub_100EAB80(this, 8);
        }
        if ( (int)this[55] <= 0 )
        {
          if ( this[584] != 7 )
            this[584] = 7;
          sub_10023CB0((char *)this, 17);
          v55 = 1;
          sub_100316C0((_BYTE *)this + 224, (char *)&v55);
        }
      }
      this[593] = 0;
    }
    if ( (int)this[55] <= 0 )
    {
      if ( this[584] != 7 )
        this[584] = 7;
      (*(void (__thiscall **)(_DWORD *))(*this + 2160))(this);
      v39 = sub_1007DB30(17);
      if ( v39 != -1 && v39 != 999999999 )
        this[((v39 - 1000000000) >> 5) + 548] |= 1 << (v39 & 0x1F);
    }
    else if ( this[584] != 1 )
    {
      this[584] = 1;
    }
    v40 = this[62] & 0xFFFFFF7F;
    if ( this[62] != v40 )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v41 = (int *)this[6];
        if ( v41 )
          sub_100194B0(v41, 248);
      }
      this[62] = v40;
    }
    if ( v57 )
      sub_1025FAC0(v56);
    return 1;
  }
}
