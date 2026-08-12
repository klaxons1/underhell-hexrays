char *__thiscall sub_1009C3D0(char *this)
{
  float *v2; // edi

  v2 = (float *)(this + 8);
  *(_DWORD *)this = &EntityParticleTrailInfo_t::`vftable';
  *((_DWORD *)this + 1) = 0;
  if ( *((_DWORD *)this + 2) != COERCE_INT(4.0) )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 8));
    *v2 = 4.0;
  }
  if ( *((_DWORD *)this + 3) != COERCE_INT(2.0) )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 12));
    *((float *)this + 3) = 2.0;
  }
  if ( *((_DWORD *)this + 4) != COERCE_INT(3.0) )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 16));
    *((float *)this + 4) = 3.0;
  }
  return this;
}
