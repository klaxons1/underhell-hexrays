int __thiscall sub_100C3150(_DWORD *this, float a2, char a3, float a4, char a5)
{
  int result; // eax
  int v7; // eax
  int v8; // edi

  result = this[64] >> 27;
  if ( (this[64] & 0x8000000) == 0 )
  {
    result = (*(int (__thiscall **)(_DWORD *))(*this + 284))(this);
    if ( !a3 || (_BYTE)result )
    {
      if ( (_BYTE)result != 1
        || a5
        || (v7 = sub_100D7680(this)) == 0
        || (result = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 1516))(v7), (_BYTE)result) )
      {
        v8 = sub_1012B790(this, 1);
        if ( v8 )
        {
          sub_1012B210(a2);
          sub_100EA940(0x8000000);
          sub_100EBDE0(v8);
          if ( a4 > 0.0 )
            sub_100C1F70(v8, a4);
        }
        return sub_1010DD80((int)this, (int)this, 0.0);
      }
    }
  }
  return result;
}
