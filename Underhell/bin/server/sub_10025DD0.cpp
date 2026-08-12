char __thiscall sub_10025DD0(_DWORD *this)
{
  char v2; // bl
  int v3; // eax
  char v4; // cl
  _DWORD *v5; // eax
  int v7; // eax
  char v8; // cl
  _DWORD *v9; // eax

  if ( !sub_10262560(this[6]) && (!(unsigned __int8)sub_1025F670() || !sub_10262580(this[6])) )
  {
    v2 = 0;
    (*(void (__thiscall **)(_DWORD *))(*this + 2160))(this);
    v3 = sub_1007DB30(1);
    if ( v3 != -1 )
    {
      v4 = v3;
      if ( v3 != 999999999 )
      {
        v5 = &this[((v3 - 1000000000) >> 5) + 548];
        *v5 &= ~(1 << (v4 & 0x1F));
      }
    }
    return v2;
  }
  v2 = 1;
  (*(void (__thiscall **)(_DWORD *))(*this + 2160))(this);
  v7 = sub_1007DB30(1);
  if ( v7 == -1 )
    return v2;
  v8 = v7;
  if ( v7 == 999999999 )
    return v2;
  v9 = &this[((v7 - 1000000000) >> 5) + 548];
  *v9 |= 1 << (v8 & 0x1F);
  return 1;
}
