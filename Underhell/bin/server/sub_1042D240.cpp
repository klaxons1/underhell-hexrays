int __thiscall sub_1042D240(_DWORD *this, int a2, int a3)
{
  char v4; // al

  if ( (this[5] & 2) == 0 && (v4 = sub_1042D170((int)this, a3 + a2), *((_BYTE *)this + 20) &= ~2u, v4) )
    return a3 + *this + this[3] - this[8];
  else
    return 0;
}
