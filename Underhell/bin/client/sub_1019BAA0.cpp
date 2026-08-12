char __thiscall sub_1019BAA0(_DWORD *this, int a2)
{
  if ( a2 == 1 )
  {
    sub_1000DF30(this - 2, 32);
    return sub_10029380((int)this, 1);
  }
  else
  {
    if ( !a2 )
    {
      this[26] &= ~0x20u;
      sub_10039310((int)(this - 2));
    }
    return sub_10029380((int)this, a2);
  }
}
