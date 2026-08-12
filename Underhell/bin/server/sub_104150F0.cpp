void __thiscall sub_104150F0(_BYTE *this, float a2, int a3, __int16 a4, int a5)
{
  int v6; // eax

  if ( this[224] )
  {
    if ( this[224] == 1 )
    {
      sub_10414AA0((int)this, a3);
    }
    else if ( this[224] == 2 )
    {
      return;
    }
  }
  else
  {
    v6 = *(_DWORD *)(a3 + 36);
    if ( (v6 & 1) != 0 )
    {
      sub_10413570((int)this);
    }
    else if ( (v6 & 0x800) != 0 )
    {
      sub_104136A0((int)this);
    }
  }
  sub_10268050((int)this, a2, *(float *)&a3, a4, a5);
}
