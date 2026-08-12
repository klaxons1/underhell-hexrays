int __thiscall sub_100566C0(float *this, int a2)
{
  if ( *((float *)off_103DC81C + 3) > (double)this[490] )
  {
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 744))(this, a2);
    this[490] = *((float *)off_103DC81C + 3) + 0.1;
  }
  return nullsub_5(a2);
}
