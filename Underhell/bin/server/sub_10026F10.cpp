char __thiscall sub_10026F10(int *this, int a2, int a3, int a4)
{
  int v5; // eax
  char v6; // bl
  int v7; // eax
  char v8; // cl
  int *v9; // eax
  int v10; // edi
  int v11; // eax
  double v12; // st7
  float v14[3]; // [esp+20h] [ebp-10h] BYREF
  float v15; // [esp+2Ch] [ebp-4h]

  if ( sub_100CF460(this) )
  {
    v5 = sub_100CF460(this);
    v6 = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)v5 + 1368))(v5, a2, a3, a4);
  }
  else if ( ((*(int (__thiscall **)(int *))(*this + 1672))(this) & 0x20000) != 0 )
  {
    v6 = (*(int (__thiscall **)(int *, int, int, int))(*this + 2088))(this, a2, a3, a4);
  }
  else
  {
    if ( (_BYTE)a4 )
    {
      (*(void (__thiscall **)(int *))(*this + 2160))(this);
      v7 = sub_1007DB30(6);
      if ( v7 != -1 )
      {
        v8 = v7;
        if ( v7 != 999999999 )
        {
          v9 = &this[((v7 - 1000000000) >> 5) + 548];
          *v9 |= 1 << (v8 & 0x1F);
        }
      }
    }
    v6 = 0;
  }
  if ( ((*(int (__thiscall **)(int *))(*this + 1672))(this) & 0x50000000) == 0 )
    return v6;
  v15 = 0.92000002;
  if ( sub_100CF460(this) )
  {
    v10 = *this;
    v11 = sub_100CF460(this);
    (*(void (__thiscall **)(int *, float *, int, _DWORD))(v10 + 1108))(this, v14, v11, 0);
    if ( v14[0] <= 0.13053 )
    {
      v12 = 0.99145001;
    }
    else
    {
      v15 = asin(v14[0]) * 40.743664 + 12582976.0;
      v12 = flt_106F1898[LOBYTE(v15)];
    }
    v15 = v12;
  }
  if ( ((*(int (__thiscall **)(int *))(*this + 1672))(this) & 0x10000000) == 0
    || !(*(unsigned __int8 (__thiscall **)(int *, int, int, float, _DWORD, int))(*this + 2084))(
          this,
          a2,
          a3,
          COERCE_FLOAT(LODWORD(v15)),
          96.0,
          1) )
  {
    if ( v6
      && ((*(int (__thiscall **)(int *))(*this + 1672))(this) & 0x40000000) != 0
      && this[699]
      && (*(int (__thiscall **)(int *))(*this + 368))(this)
      && (unsigned __int8)sub_1004B0B0(a2, a3, v15, 96.0) )
    {
      sub_10023CB0((char *)this, 42);
      return 0;
    }
    return v6;
  }
  if ( (_BYTE)a4 )
    sub_10023CB0((char *)this, 43);
  return 0;
}
