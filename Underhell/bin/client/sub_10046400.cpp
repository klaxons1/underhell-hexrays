float *__thiscall sub_10046400(float *this, int a2)
{
  sub_10043430(this + 1, (float *)(a2 + 4));
  if ( *((_DWORD *)this + 4) != *(_DWORD *)(a2 + 16) )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 4));
    this[4] = *(float *)(a2 + 16);
  }
  if ( *((_DWORD *)this + 5) != *(_DWORD *)(a2 + 20) )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 5));
    this[5] = *(float *)(a2 + 20);
  }
  if ( *((_DWORD *)this + 6) != *(_DWORD *)(a2 + 24) )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 6));
    this[6] = *(float *)(a2 + 24);
  }
  if ( *((_DWORD *)this + 7) != *(_DWORD *)(a2 + 28) )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 7));
    this[7] = *(float *)(a2 + 28);
  }
  this[8] = *(float *)(a2 + 32);
  this[9] = *(float *)(a2 + 36);
  this[10] = *(float *)(a2 + 40);
  this[11] = *(float *)(a2 + 44);
  this[12] = *(float *)(a2 + 48);
  this[13] = *(float *)(a2 + 52);
  this[14] = *(float *)(a2 + 56);
  this[15] = *(float *)(a2 + 60);
  *((_BYTE *)this + 64) = *(_BYTE *)(a2 + 64);
  *((_BYTE *)this + 65) = *(_BYTE *)(a2 + 65);
  return this;
}
