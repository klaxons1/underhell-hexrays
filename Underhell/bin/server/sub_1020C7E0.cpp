int *__thiscall sub_1020C7E0(int *this, char a2)
{
  sub_101BD560(this + 388);
  sub_1010BB10(this + 374);
  sub_1010BB10(this + 368);
  sub_1010BB10(this + 362);
  this[361] = (int)&IWatcherCallback::`vftable';
  sub_10207300(this);
  if ( (a2 & 1) != 0 )
    sub_100D6360((int)this);
  return this;
}
