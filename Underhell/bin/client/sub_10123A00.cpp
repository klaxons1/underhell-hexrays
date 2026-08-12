int __thiscall sub_10123A00(int this)
{
  if ( 0.0 == *(float *)(this + 1232)
    || *(float *)(this + 1284) + *(float *)(this + 1232) < *((float *)off_103DC81C + 3) )
  {
    return *(_DWORD *)(this + 1228);
  }
  else
  {
    return (int)((*((float *)off_103DC81C + 3) - *(float *)(this + 1284))
               / *(float *)(this + 1232)
               * (double)(*(_DWORD *)(this + 1280) - *(_DWORD *)(this + 1276))
               + (double)*(int *)(this + 1276));
  }
}
