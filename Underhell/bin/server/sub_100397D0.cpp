int __thiscall sub_100397D0(int *this)
{
  int v2; // eax
  bool v3; // zf
  char v4; // bl
  int v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // eax
  unsigned int v9; // eax
  float *v10; // eax
  int v11; // eax
  unsigned __int64 v12; // rax
  float v14; // [esp+10h] [ebp-4h] BYREF

  *((_BYTE *)this + 2321) = 1;
  v14 = COERCE_FLOAT(&qword_10690DE0);
  qword_10690DE0 = __rdtsc();
  if ( *((float *)this + 903) < (double)*(float *)(dword_106B31C8 + 12) && *((float *)this + 903) > 0.0 )
  {
    sub_100D8500(this);
    v14 = 0.0;
    sub_10034FD0((float *)this + 903, &v14);
  }
  v2 = this[581];
  if ( !v2 || v2 == 7 )
  {
    (*(void (__thiscall **)(int *))(*this + 2160))(this);
    v11 = sub_1007DB30(1);
    if ( v11 != -1 && v11 != 999999999 )
      this[((v11 - 1000000000) >> 5) + 548] &= ~(1 << (v11 & 0x1F));
  }
  else
  {
    if ( fabs(sub_10078F10(this[651])) <= 0.006 )
      this[679] &= ~0x2000u;
    v3 = this[2] == (_DWORD)sub_10039730;
    v4 = *((_BYTE *)this + 2320);
    *((_BYTE *)this + 2320) = 0;
    if ( !v3 )
    {
      if ( sub_10262560(this[6]) )
        sub_10023CB0((char *)this, 1);
      else
        sub_10023E00((char *)this, 1);
    }
    if ( (this[62] & 0x10) == 0
      && (v4
       || sub_10023D10(this, 1)
       || (*(unsigned __int8 (__thiscall **)(int *))(*this + 1288))(this)
       || this[581] == 3) )
    {
      sub_1002B6F0((int)this);
      if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 1648))(this) )
        (*(void (__thiscall **)(int *))(*this + 1620))(this);
      sub_100AC0F0(this[601]);
      v5 = (*(int (__thiscall **)(int *))(*this + 1868))(this);
      sub_10077CB0(v5);
      sub_1002F420((int)this);
      if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 2012))(this) )
        sub_10023CB0((char *)this, 46);
      if ( this[531] )
      {
        v6 = this[581];
        if ( (v6 == 1 || v6 == 2)
          && (*(int (__thiscall **)(int *))(*this + 368))(this)
          && !sub_10023D10(this, 26)
          && (*(_DWORD *)(this[531] + 12) & 0x4000000) != 0 )
        {
          DevMsg(2, "Had to force COND_NEW_ENEMY\n");
          sub_10023CB0((char *)this, 26);
        }
      }
    }
    else
    {
      (*(void (__thiscall **)(int *))(*this + 1476))(this);
    }
    if ( (*(int (__thiscall **)(int *))(*this + 368))(this) )
    {
      if ( (this[62] & 0x10) != 0 )
      {
        sub_100285C0(this, 0, 1);
      }
      else
      {
        v7 = *this;
        v8 = (*(int (__thiscall **)(int *))(*this + 368))(this);
        (*(void (__thiscall **)(int *, int))(v7 + 1496))(this, v8);
        this[686] = *(int *)(dword_106B31C8 + 12);
      }
    }
    v9 = this[605];
    if ( v9 != -1 && off_1061BE18[4 * (this[605] & 0xFFF) + 2] == v9 >> 12 && off_1061BE18[4 * (this[605] & 0xFFF) + 1] )
    {
      v10 = (float *)sub_10022C40(this);
      sub_100275E0((float *)this, v10);
    }
    (*(void (__thiscall **)(int *))(*this + 2052))(this);
    (*(void (__thiscall **)(int *))(*this + 1348))(this);
    sub_1004B160(this);
  }
  v12 = __rdtsc();
  qword_10690DE0 = v12 - qword_10690DE0;
  return v12;
}
