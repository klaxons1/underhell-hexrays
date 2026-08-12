void (__thiscall ***__thiscall sub_101FCB10(void (__thiscall ***this)(void *, int), int a2))(void *, int)
{
  sub_102BE2D0(a2 + 4);
  if ( this[4] != *(void (__thiscall ***)(void *, int))(a2 + 16) )
  {
    (**this)(this, (int)(this + 4));
    this[4] = *(void (__thiscall ***)(void *, int))(a2 + 16);
  }
  if ( this[5] != *(void (__thiscall ***)(void *, int))(a2 + 20) )
  {
    (**this)(this, (int)(this + 5));
    this[5] = *(void (__thiscall ***)(void *, int))(a2 + 20);
  }
  if ( this[6] != *(void (__thiscall ***)(void *, int))(a2 + 24) )
  {
    (**this)(this, (int)(this + 6));
    this[6] = *(void (__thiscall ***)(void *, int))(a2 + 24);
  }
  if ( this[7] != *(void (__thiscall ***)(void *, int))(a2 + 28) )
  {
    (**this)(this, (int)(this + 7));
    this[7] = *(void (__thiscall ***)(void *, int))(a2 + 28);
  }
  this[8] = *(void (__thiscall ***)(void *, int))(a2 + 32);
  this[9] = *(void (__thiscall ***)(void *, int))(a2 + 36);
  this[10] = *(void (__thiscall ***)(void *, int))(a2 + 40);
  this[11] = *(void (__thiscall ***)(void *, int))(a2 + 44);
  this[12] = *(void (__thiscall ***)(void *, int))(a2 + 48);
  this[13] = *(void (__thiscall ***)(void *, int))(a2 + 52);
  this[14] = *(void (__thiscall ***)(void *, int))(a2 + 56);
  this[15] = *(void (__thiscall ***)(void *, int))(a2 + 60);
  *((_BYTE *)this + 64) = *(_BYTE *)(a2 + 64);
  *((_BYTE *)this + 65) = *(_BYTE *)(a2 + 65);
  return this;
}
