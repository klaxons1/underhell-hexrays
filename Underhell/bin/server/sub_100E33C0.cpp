char *__thiscall sub_100E33C0(char *this, char a2)
{
  int v3; // eax
  int *v4; // ecx
  int *v5; // ecx
  int *v6; // ecx
  int *v7; // ecx
  int *v8; // ecx
  int *v9; // ecx
  int *v10; // ecx
  int *v11; // ecx
  int *v12; // ecx
  int v13; // edx
  unsigned int v14; // eax
  int *v15; // ecx

  *(_DWORD *)this = &CBaseEntity::`vftable';
  sub_102356B0(this + 12);
  unknown_libname_6(this + 136);
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = 0;
  *((_DWORD *)this + 58) = -1;
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 67) = 0;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 73) = -1;
  v3 = *((_DWORD *)this + 66);
  *((_DWORD *)this + 69) = -1;
  *((_DWORD *)this + 70) = -1;
  *((_DWORD *)this + 71) = -1;
  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 74) = v3;
  *((_DWORD *)this + 75) = -1;
  *((_DWORD *)this + 77) = -1;
  *((_DWORD *)this + 78) = -1;
  *((_DWORD *)this + 79) = -1;
  sub_10112980(this + 320);
  *((_DWORD *)this + 80) = &CBaseEntity::NetworkVar_m_Collision::`vftable';
  *((_DWORD *)this + 103) = -1;
  *((_DWORD *)this + 104) = -1;
  *((_DWORD *)this + 113) = -1;
  *((_DWORD *)this + 137) = -1;
  *((_DWORD *)this + 155) = -1;
  *((_DWORD *)this + 152) = 0;
  *((_DWORD *)this + 156) = 5;
  *((_DWORD *)this + 161) = -1;
  *((_DWORD *)this + 158) = 0;
  *((_DWORD *)this + 162) = 5;
  *((_DWORD *)this + 167) = -1;
  *((_DWORD *)this + 164) = 0;
  *((_DWORD *)this + 168) = 5;
  *((_DWORD *)this + 173) = -1;
  *((_DWORD *)this + 170) = 0;
  *((_DWORD *)this + 174) = 5;
  *((_DWORD *)this + 185) = -1;
  *((_DWORD *)this + 190) = -1;
  *((_DWORD *)this + 197) = -1;
  *((_DWORD *)this + 194) = 0;
  *((_DWORD *)this + 198) = 5;
  if ( this[607] )
  {
    if ( this[84] )
    {
      this[88] |= 1u;
    }
    else
    {
      v4 = (int *)*((_DWORD *)this + 6);
      if ( v4 )
        sub_100194B0(v4, 607);
    }
    this[607] = 0;
  }
  if ( this[768] )
  {
    if ( this[84] )
    {
      this[88] |= 1u;
    }
    else
    {
      v5 = (int *)*((_DWORD *)this + 6);
      if ( v5 )
        sub_100194B0(v5, 768);
    }
    this[768] = 0;
  }
  if ( this[769] )
  {
    if ( this[84] )
    {
      this[88] |= 1u;
    }
    else
    {
      v6 = (int *)*((_DWORD *)this + 6);
      if ( v6 )
        sub_100194B0(v6, 769);
    }
    this[769] = 0;
  }
  this[770] = 0;
  if ( *(_DWORD *)(this + 771) != 1694498815 )
  {
    if ( this[84] )
    {
      this[88] |= 1u;
    }
    else
    {
      v7 = (int *)*((_DWORD *)this + 6);
      if ( v7 )
        sub_100194B0(v7, 771);
    }
    *(_DWORD *)(this + 771) = 1694498815;
  }
  if ( *((_DWORD *)this + 105) )
  {
    if ( this[84] )
    {
      this[88] |= 1u;
    }
    else
    {
      v8 = (int *)*((_DWORD *)this + 6);
      if ( v8 )
        sub_100194B0(v8, 420);
    }
    *((_DWORD *)this + 105) = 0;
  }
  if ( this[305] )
  {
    if ( this[84] )
    {
      this[88] |= 1u;
    }
    else
    {
      v9 = (int *)*((_DWORD *)this + 6);
      if ( v9 )
        sub_100194B0(v9, 305);
    }
    this[305] = 0;
  }
  sub_101125D0(this);
  sub_102354C0(this);
  *((_DWORD *)this + 63) |= 0xC40000u;
  *((_DWORD *)this + 59) = 0;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 106) = 0;
  if ( *((_DWORD *)this + 140) != COERCE_INT(1.0) )
  {
    if ( this[84] )
    {
      this[88] |= 1u;
    }
    else
    {
      v10 = (int *)*((_DWORD *)this + 6);
      if ( v10 )
        sub_100194B0(v10, 560);
    }
    *((float *)this + 140) = 1.0;
  }
  *((float *)this + 108) = 0.0;
  if ( *((_DWORD *)this + 107) != *((_DWORD *)this + 108) )
  {
    if ( this[84] )
    {
      this[88] |= 1u;
    }
    else
    {
      v11 = (int *)*((_DWORD *)this + 6);
      if ( v11 )
        sub_100194B0(v11, 428);
    }
    *((float *)this + 107) = *((float *)this + 108);
  }
  sub_1005C620(this + 116, 255, 255, 255, 255);
  *((_DWORD *)this + 109) = 0;
  if ( *((_DWORD *)this + 110) )
  {
    if ( this[84] )
    {
      this[88] |= 1u;
    }
    else
    {
      v12 = (int *)*((_DWORD *)this + 6);
      if ( v12 )
        sub_100194B0(v12, 440);
    }
    *((_DWORD *)this + 110) = *((_DWORD *)this + 109);
  }
  *((_DWORD *)this + 33) = *(_DWORD *)(dword_106B31C8 + 24);
  *((_DWORD *)this + 61) = -1;
  sub_10422700(this + 500);
  *((_DWORD *)this + 137) = -1;
  *((_WORD *)this + 222) = 0;
  sub_10112C00(0);
  sub_101129A0(0);
  sub_100E0970((int)this, v13, 0, 0);
  v14 = *((_DWORD *)this + 103);
  if ( v14 != -1
    && off_1061BE18[4 * (*((_DWORD *)this + 103) & 0xFFF) + 2] == v14 >> 12
    && off_1061BE18[4 * (*((_DWORD *)this + 103) & 0xFFF) + 1] )
  {
    sub_100DB4E0((unsigned int *)this + 103, 0);
    sub_100E8D20(this);
  }
  *((_DWORD *)this + 63) &= ~0x1000000u;
  if ( this[114] || this[115] )
  {
    if ( this[84] )
    {
      this[88] |= 1u;
    }
    else
    {
      v15 = (int *)*((_DWORD *)this + 6);
      if ( v15 )
        sub_100194B0(v15, 114);
    }
    *((_WORD *)this + 57) = 0;
  }
  if ( !this[304] )
  {
    ++dword_10697284;
    (*(void (__thiscall **)(char *))(*(_DWORD *)this + 84))(this);
    --dword_10697284;
  }
  *((_DWORD *)this + 115) = 0;
  if ( !this[304] )
  {
    ++dword_10697284;
    (*(void (__thiscall **)(char *))(*(_DWORD *)this + 84))(this);
    --dword_10697284;
  }
  this[304] = 0;
  sub_10112A40(&flt_106F1CA8, &flt_106F1CA8);
  sub_100EAA00(this);
  if ( *((_DWORD *)this + 139) != COERCE_INT(1.0) )
  {
    (*(void (__thiscall **)(char *, char *))(*(_DWORD *)this + 696))(this, this + 556);
    *((float *)this + 139) = 1.0;
  }
  if ( a2 )
    *((_DWORD *)this + 63) |= 0x200u;
  if ( *((_DWORD *)this + 6) )
    **((_DWORD **)this + 6) |= 0x80u;
  *((_DWORD *)this + 63) |= 0x40000u;
  return this;
}
