char __thiscall sub_1020D530(int *this)
{
  char result; // al
  int v3; // eax
  _DWORD *v4; // ecx
  __int64 v5; // [esp+0h] [ebp-10h]
  float v6; // [esp+4h] [ebp-Ch]

  result = *((_BYTE *)this + 1299);
  if ( result == 6 || result == 7 )
  {
    sub_100C2660((int)this, 0.1);
    (*(void (__thiscall **)(int *, int *))(*this + 784))(this, this);
    v6 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0(this, v6, off_10642FA4);
    result = (*(int (__thiscall **)(int *))(*this + 732))(this);
    if ( result )
    {
      if ( *((_BYTE *)this + 1299) == 6 )
      {
        *((_BYTE *)this + 1299) = 4;
        v3 = sub_100BDCE0((int)this, 389);
        sub_100C3330((int)this, v3);
        sub_10045B20((int)this, 1.0);
        sub_100C1A10((int)this);
        v4 = this + 337;
      }
      else
      {
        *((_BYTE *)this + 1299) = 5;
        v4 = this + 349;
      }
      HIDWORD(v5) = this;
      LODWORD(v5) = 0;
      sub_1010DD80(v4, v5, 0.0);
      return sub_100EC3F0(this, 0, 0.0, off_10642FA4);
    }
  }
  return result;
}
