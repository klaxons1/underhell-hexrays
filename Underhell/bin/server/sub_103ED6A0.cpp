void __thiscall sub_103ED6A0(_BYTE *this, float a2, int a3, __int16 a4, int a5)
{
  int v5; // ebx

  v5 = *(_DWORD *)(a3 + 36);
  if ( this[1689] )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 868))(this) )
    {
      if ( (v5 & 1) != 0 )
      {
        if ( this[1736] )
          sub_103ED200((int)this, a3);
        else
          sub_103EAB30((int)this, a3);
      }
      else if ( (v5 & 0x800) != 0 )
      {
        sub_103EAD50((int)this);
      }
    }
    if ( (a5 & 0x800) != 0 && this[1736] )
      sub_103ED200((int)this, a3);
  }
  if ( !this[1690] )
    sub_10268050((int)this, a2, *(float *)&a3, a4, a5);
}
