int __thiscall sub_10102CF0(float *this, int a2)
{
  if ( *((float *)off_103DC81C + 3) > (double)this[493] )
  {
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 748))(this, a2);
    this[493] = *((float *)off_103DC81C + 3) + 0.1;
  }
  return nullsub_5(a2);
}
