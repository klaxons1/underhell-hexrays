int __thiscall sub_10324010(unsigned int *this)
{
  int result; // eax
  unsigned int v3; // eax
  int v4; // edi
  int v5; // ebx
  _BYTE v6[48]; // [esp+4h] [ebp-48h] BYREF
  float v7; // [esp+34h] [ebp-18h]
  float v8; // [esp+38h] [ebp-14h]
  float v9; // [esp+3Ch] [ebp-10h]
  float v10; // [esp+40h] [ebp-Ch]
  float v11; // [esp+44h] [ebp-8h]
  char v12; // [esp+48h] [ebp-4h]

  sub_100422B0(this);
  result = this[62] >> 17;
  if ( (this[62] & 0x20000) == 0 )
  {
    v3 = this[933];
    if ( v3 != -1 && off_1061BE18[4 * (this[933] & 0xFFF) + 2] == v3 >> 12 && off_1061BE18[4 * (this[933] & 0xFFF) + 1] )
    {
      result = (*(int (__thiscall **)(unsigned int *))(*this + 368))(this);
      if ( result )
      {
        result = sub_103213F0(this);
        if ( (_BYTE)result )
        {
          if ( !this[2472] )
          {
            v4 = *(_DWORD *)((*(int (__thiscall **)(unsigned int *))(*this + 368))(this) + 424);
            v5 = *(_DWORD *)(sub_1026A890(this + 934) + 424);
            sub_100CFA00(v6);
            sub_100CFD60(v6, v5, v4);
            v8 = 0.0;
            v9 = 0.0;
            v7 = 1.0;
            v10 = 1.0;
            v12 = 1;
            v11 = 1.0;
            result = (*(int (__thiscall **)(int, int, int, _DWORD, _BYTE *))(*(_DWORD *)dword_106BAFF4 + 68))(
                       dword_106BAFF4,
                       v5,
                       v4,
                       0,
                       v6);
            this[2472] = result;
          }
        }
      }
    }
    else
    {
      return sub_10323E80((int)this);
    }
  }
  return result;
}
