void __thiscall sub_10408BA0(_DWORD *this)
{
  void (__stdcall *v2)(int, _DWORD); // edx
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  bool v7; // zf
  unsigned int v8; // eax
  int v9; // ecx

  v2 = *(void (__stdcall **)(int, _DWORD))(*this + 1132);
  *((_BYTE *)this + 1393) = 0;
  v2(13, 0.0);
  sub_10408550(this);
  v3 = this[352];
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (this[352] & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( off_1061BE18[4 * (this[352] & 0xFFF) + 2] == v5 )
    {
      if ( *v4 )
      {
        if ( off_1061BE18[4 * (this[352] & 0xFFF) + 2] == v5 )
          v6 = *v4;
        else
          v6 = 0;
        v7 = *(_BYTE *)(v6 + 896) == 0;
        *(_BYTE *)(v6 + 897) = 0;
        if ( !v7 )
          sub_10242060((int *)v6);
        v8 = this[352];
        if ( v8 == -1 || off_1061BE18[4 * (this[352] & 0xFFF) + 2] != v8 >> 12 )
          v9 = 0;
        else
          v9 = off_1061BE18[4 * (this[352] & 0xFFF) + 1];
        sub_1025FAC0(v9);
        this[352] = -1;
      }
    }
  }
}
