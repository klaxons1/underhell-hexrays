void __thiscall sub_100F4440(float *this, int a2)
{
  if ( a2 != sub_100F4030(this) )
  {
    if ( ((_BYTE)this[64] & 1) != 0 )
    {
      if ( ((_DWORD)this[63] & 0x1000) != 0 )
        sub_100DAFD0((int)this);
      if ( 0.0 == this[119] && ((_DWORD)this[63] & 0x1000) != 0 )
        sub_100DAFD0((int)this);
    }
    else
    {
      (*(void (__thiscall **)(float *))(*(_DWORD *)this + 1160))(this);
    }
  }
}
