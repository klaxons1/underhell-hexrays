void __thiscall sub_10242CC0(int *this, int a2, int a3, int a4, int a5)
{
  BOOL v6; // edi

  v6 = (this[48] & 0x20) == 0;
  if ( sub_100D62E0(a4, v6) )
  {
    if ( v6 )
    {
      sub_100EAB80(this, 32);
      sub_100EC4A0(this, -1.0, 0);
    }
    else
    {
      sub_10242BA0((int)this);
    }
  }
}
