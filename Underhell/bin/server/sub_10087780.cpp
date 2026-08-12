void __thiscall sub_10087780(_DWORD *this, int *Src, int a3)
{
  if ( (*((_BYTE *)this + 21) & 1) != 0 )
  {
    *(float *)Src = 0.0;
    sub_1042E720(this, a3, (char)Src);
  }
  else if ( (unsigned __int8)sub_1042D170(4) )
  {
    *Src = *(int *)(this[3] - this[8] + *this);
    if ( (this[11] & 1) != 0 )
      sub_100867E0((_BYTE *)this + 44, Src, (char *)Src, 1);
    this[3] += 4;
  }
  else
  {
    *(float *)Src = 0.0;
  }
}
