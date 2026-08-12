void __thiscall sub_102141C0(_DWORD *this, int a2)
{
  int v3; // eax
  const char *v4; // eax
  unsigned int v5; // eax
  int v6; // eax
  _DWORD *v7; // eax
  void (__thiscall *v8)(_DWORD *, int); // edx
  int v9; // ebx
  int i; // edi
  unsigned int v11; // eax
  int v12; // ecx
  __int64 v13; // [esp+0h] [ebp-18h]

  v3 = this[418];
  if ( v3 != 2 && v3 != 1 )
  {
    sub_10206C10(this, 1);
    if ( (this[62] & 0x1000) == 0 )
    {
      v4 = (const char *)this[433];
      if ( !v4 )
        v4 = String;
      sub_1023C380((int)v4, 0.0, 0);
      v5 = this[429];
      if ( v5 != -1 && off_1061BE18[4 * (this[429] & 0xFFF) + 2] == v5 >> 12 )
      {
        if ( off_1061BE18[4 * (this[429] & 0xFFF) + 1] )
        {
          v6 = sub_1026A890(this + 429);
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 320))(v6) )
          {
            if ( (this[62] & 0x4000) == 0 )
            {
              v7 = sub_10019640(this);
              sub_1023D4B0(4, (int)v7, 512, 0.5, (int)this, 0, 0);
            }
          }
        }
      }
    }
    v8 = *(void (__thiscall **)(_DWORD *, int))(*this + 892);
    this[418] = 1;
    this[1] = sub_10213B60;
    v8(this, a2);
    HIDWORD(v13) = this;
    LODWORD(v13) = this;
    sub_1010DD80(this + 400, v13, 0.0);
    v9 = this[415];
    if ( v9 > 0 )
    {
      for ( i = 0; i < v9; ++i )
      {
        v11 = *(_DWORD *)(this[412] + 4 * i);
        if ( v11 != -1 && off_1061BE18[4 * (*(_DWORD *)(this[412] + 4 * i) & 0xFFF) + 2] == v11 >> 12 )
        {
          v12 = off_1061BE18[4 * (*(_DWORD *)(this[412] + 4 * i) & 0xFFF) + 1];
          if ( v12 )
          {
            *(_DWORD *)(v12 + 1716) = this[429];
            sub_102141C0(a2);
          }
        }
      }
    }
  }
}
