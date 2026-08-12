void __thiscall sub_1011C490(_DWORD *this, int *Src, const char *a3)
{
  if ( (*((_BYTE *)this + 21) & 1) != 0 )
  {
    *(float *)Src = 0.0;
    sub_1022F5B0(this, a3, Src);
  }
  else if ( (unsigned __int8)sub_1022E380(4) )
  {
    *Src = *(int *)(this[3] - this[8] + *this);
    if ( (this[11] & 1) != 0 )
      sub_1011C390((_BYTE *)this + 44, Src, (char *)Src, 1);
    this[3] += 4;
  }
  else
  {
    *(float *)Src = 0.0;
  }
}
