void __thiscall sub_10185D10(_DWORD *this, int a2)
{
  __int64 v3; // [esp-8h] [ebp-10h]
  __int64 v4; // [esp-8h] [ebp-10h]

  if ( (int)--this[227] <= 0 )
  {
    HIDWORD(v3) = this;
    LODWORD(v3) = this;
    sub_1010DD80(this + 221, v3, 0.0);
    if ( (this[62] & 0x20) == 0 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 740))(this) )
      {
        HIDWORD(v4) = this;
        LODWORD(v4) = this;
        sub_1010DD80(this + 215, v4, 0.0);
      }
    }
  }
}
