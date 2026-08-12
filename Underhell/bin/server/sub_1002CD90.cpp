int __thiscall sub_1002CD90(_DWORD *this)
{
  int result; // eax
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  char v7; // cl
  _DWORD *v8; // eax
  int v9; // eax
  char v10; // cl
  _DWORD *v11; // eax
  int v12; // eax
  char v13; // cl
  _DWORD *v14; // eax
  float v15; // [esp+0h] [ebp-Ch]

  if ( !sub_100CF460(this) || (*(_DWORD *)(sub_100CF460(this) + 192) & 0x20) != 0 )
    return -1;
  result = sub_100C4E40(71);
  if ( result == -1 )
  {
    v3 = sub_100C74B0(71, 1);
    v4 = v3;
    if ( v3 != -1 )
    {
      v15 = sub_100C5400(v3) + *(float *)(dword_106B31C8 + 12) + 0.5;
      sub_100B8D50(v15);
      v5 = *this;
      this[698] = (this[698] == 2) + 4;
      (*(void (__thiscall **)(_DWORD *))(v5 + 2160))(this);
      v6 = sub_1007DB30(3);
      if ( v6 != -1 )
      {
        v7 = v6;
        if ( v6 != 999999999 )
        {
          v8 = &this[((v6 - 1000000000) >> 5) + 548];
          *v8 &= ~(1 << (v7 & 0x1F));
        }
      }
      (*(void (__thiscall **)(_DWORD *))(*this + 2160))(this);
      v9 = sub_1007DB30(4);
      if ( v9 != -1 )
      {
        v10 = v9;
        if ( v9 != 999999999 )
        {
          v11 = &this[((v9 - 1000000000) >> 5) + 548];
          *v11 &= ~(1 << (v10 & 0x1F));
        }
      }
      (*(void (__thiscall **)(_DWORD *))(*this + 2160))(this);
      v12 = sub_1007DB30(5);
      if ( v12 != -1 )
      {
        v13 = v12;
        if ( v12 != 999999999 )
        {
          v14 = &this[((v12 - 1000000000) >> 5) + 548];
          *v14 &= ~(1 << (v13 & 0x1F));
        }
      }
    }
    return v4;
  }
  return result;
}
