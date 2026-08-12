char *__thiscall sub_102E5830(char *this)
{
  _DWORD *v2; // ebx
  float *v3; // edi
  double v4; // st7
  float v6; // [esp+4h] [ebp-4h]

  *(_DWORD *)this = &CHL2PlayerLocalData::`vftable';
  *((_DWORD *)this + 7) = -1;
  v2 = this + 28;
  *((_DWORD *)this + 16) = -1;
  *((_DWORD *)this + 26) = -1;
  v3 = (float *)(this + 4);
  *((_DWORD *)this + 27) = -1;
  if ( *((_DWORD *)this + 1) != COERCE_INT(0.0) )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 4));
    *v3 = 0.0;
  }
  if ( this[8] )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 8));
    this[8] = 0;
  }
  if ( this[25] )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 25));
    this[25] = 0;
  }
  if ( *v2 != -1 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))*(v2 - 7))(v2 - 7, v2);
    *v2 = -1;
  }
  if ( *((_DWORD *)this + 16) != -1 )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 64));
    *((_DWORD *)this + 16) = -1;
  }
  (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 32));
  v4 = 0.0;
  *((float *)this + 8) = 0.0;
  *((float *)this + 9) = 0.0;
  *((float *)this + 10) = 0.0;
  if ( this[44] )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 44));
    v4 = 0.0;
    this[44] = 0;
  }
  v6 = v4;
  if ( *((_DWORD *)this + 12) != LODWORD(v6) )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 48));
    *((float *)this + 12) = 0.0;
  }
  return this;
}
