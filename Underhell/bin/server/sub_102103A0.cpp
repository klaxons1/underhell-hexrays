int __thiscall sub_102103A0(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  int v7; // ebx
  int i; // edi
  unsigned int v9; // eax
  void *v10; // ecx
  double v11; // st7
  const char *v12; // eax
  _DWORD *v13; // ecx
  __int64 v14; // [esp-4h] [ebp-10h]
  float v15; // [esp+4h] [ebp-8h]

  v2 = this[437];
  if ( v2 != -1 && (v3 = &off_1061BE18[4 * (this[437] & 0xFFF) + 1], v4 = v2 >> 12, v3[1] == v4) && *v3 )
  {
    if ( v3[1] == v4 )
      v5 = *v3;
    else
      v5 = 0;
    return (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 396))(v5);
  }
  else
  {
    v7 = this[415];
    if ( v7 > 0 )
    {
      for ( i = 0; i < v7; ++i )
      {
        v9 = *(_DWORD *)(this[412] + 4 * i);
        if ( v9 != -1 && off_1061BE18[4 * (*(_DWORD *)(this[412] + 4 * i) & 0xFFF) + 2] == v9 >> 12 )
        {
          v10 = (void *)off_1061BE18[4 * (*(_DWORD *)(this[412] + 4 * i) & 0xFFF) + 1];
          if ( v10 )
            sub_1020E550(v10);
        }
      }
    }
    v11 = 0.0;
    if ( (this[62] & 0x1000) == 0 )
    {
      v12 = (const char *)this[433];
      if ( !v12 )
        v12 = String;
      sub_1023C380((int)v12, 0.0, 0);
      v11 = 0.0;
    }
    HIDWORD(v14) = this;
    LODWORD(v14) = this;
    v13 = this + 450;
    if ( this[418] != 3 )
      v13 = this + 456;
    v15 = v11;
    sub_1010DD80(v13, v14, v15);
    return sub_1020E550(this);
  }
}
