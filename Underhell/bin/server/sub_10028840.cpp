int __thiscall sub_10028840(float *this)
{
  bool v2; // zf
  void (__thiscall *v3)(float *); // edx
  int v4; // eax
  char v5; // cl
  float *v6; // eax
  int result; // eax
  int v8; // eax
  char v9; // cl
  float *v10; // eax

  v2 = (unsigned __int8)sub_100697A0(73, 1) == 0;
  v3 = *(void (__thiscall **)(float *))(*(_DWORD *)this + 2160);
  if ( v2 )
  {
    v3(this);
    v4 = sub_1007DB30(68);
    if ( v4 != -1 )
    {
      v5 = v4;
      if ( v4 != 999999999 )
      {
        v6 = &this[((v4 - 1000000000) >> 5) + 548];
        *(_DWORD *)v6 |= 1 << (v5 & 0x1F);
      }
    }
    sub_100E0970(0, 0);
    this[138] = 0.0;
    sub_100D7260(&flt_106F1CB4);
    return sub_100DD660(&flt_106F1CA8);
  }
  else
  {
    v3(this);
    v8 = sub_1007DB30(69);
    if ( v8 != -1 )
    {
      v9 = v8;
      if ( v8 != 999999999 )
      {
        v10 = &this[((v8 - 1000000000) >> 5) + 548];
        *(_DWORD *)v10 |= 1 << (v9 & 0x1F);
      }
    }
    this[593] = 0.0;
    result = sub_100E0970(3, 0);
    this[138] = 1.0;
  }
  return result;
}
