void __thiscall sub_10210260(_DWORD *this)
{
  int v2; // eax
  const char *v3; // eax
  unsigned int v4; // eax
  int v5; // eax
  _DWORD *v6; // eax
  void (__thiscall *v7)(_DWORD *); // eax
  int v8; // ebx
  int i; // edi
  int v10; // ecx
  unsigned int v11; // eax
  int *v12; // ecx
  __int64 v13; // [esp+0h] [ebp-18h]

  v2 = this[418];
  if ( v2 && v2 != 3 )
  {
    if ( (this[62] & 0x1000) == 0 )
    {
      v3 = (const char *)this[433];
      if ( !v3 )
        v3 = String;
      sub_1023C380((int)v3, 0.0, 0);
      v4 = this[429];
      if ( v4 != -1 && off_1061BE18[4 * (this[429] & 0xFFF) + 2] == v4 >> 12 )
      {
        if ( off_1061BE18[4 * (this[429] & 0xFFF) + 1] )
        {
          v5 = sub_1026A890(this + 429);
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5) )
          {
            v6 = sub_10019640(this);
            sub_1023D4B0(4, (int)v6, 512, 0.5, (int)this, 0, 0);
          }
        }
      }
    }
    v7 = *(void (__thiscall **)(_DWORD *))(*this + 896);
    this[418] = 3;
    this[1] = sub_1020E410;
    v7(this);
    HIDWORD(v13) = this;
    LODWORD(v13) = this;
    sub_1010DD80(this + 394, v13, 0.0);
    v8 = this[415];
    if ( v8 > 0 )
    {
      for ( i = 0; i < v8; ++i )
      {
        v10 = this[412];
        v11 = *(_DWORD *)(v10 + 4 * i);
        if ( v11 != -1 )
        {
          v12 = &off_1061BE18[4 * (*(_DWORD *)(v10 + 4 * i) & 0xFFF) + 1];
          if ( v12[1] == v11 >> 12 )
          {
            if ( *v12 )
              sub_10210260();
          }
        }
      }
    }
  }
}
