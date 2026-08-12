int __thiscall sub_1040D660(_DWORD *this, int a2, int a3)
{
  if ( a3 == 3 )
  {
    sub_1040D3A0((int)(this - 281), a2);
    return sub_1020D900((int)this, a2, 3);
  }
  else
  {
    if ( a3 == 2 && (*(this - 219) & 0x800000) == 0 )
      sub_10163570(this - 281);
    return sub_1020D900((int)this, a2, a3);
  }
}
