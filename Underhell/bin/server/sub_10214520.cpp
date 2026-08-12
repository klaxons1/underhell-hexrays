void __thiscall sub_10214520(_DWORD *this, int a2)
{
  int v3; // eax
  void (__thiscall *v4)(_DWORD *, int); // edx
  int v5; // ebx
  int i; // edi
  unsigned int v7; // eax
  _DWORD *v8; // ecx
  __int64 v9; // [esp-4h] [ebp-14h]

  v3 = this[418];
  if ( v3 != 2 && v3 != 1 )
  {
    sub_10206C10(this, 1);
    v4 = *(void (__thiscall **)(_DWORD *, int))(*this + 892);
    this[418] = 1;
    this[1] = sub_10213CC0;
    v4(this, a2);
    HIDWORD(v9) = this;
    LODWORD(v9) = this;
    sub_1010DD80(this + 400, v9, 0.0);
    v5 = this[415];
    if ( v5 > 0 )
    {
      for ( i = 0; i < v5; ++i )
      {
        v7 = *(_DWORD *)(this[412] + 4 * i);
        if ( v7 != -1 && off_1061BE18[4 * (*(_DWORD *)(this[412] + 4 * i) & 0xFFF) + 2] == v7 >> 12 )
        {
          v8 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(this[412] + 4 * i) & 0xFFF) + 1];
          if ( v8 )
          {
            v8[429] = this[429];
            sub_102141C0(v8, a2);
          }
        }
      }
    }
  }
}
