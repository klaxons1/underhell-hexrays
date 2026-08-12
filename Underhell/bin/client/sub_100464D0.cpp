char *__thiscall sub_100464D0(char *this)
{
  double v1; // st7
  float *v3; // edi
  float v5; // [esp+4h] [ebp-4h]
  float v6; // [esp+4h] [ebp-4h]
  float v7; // [esp+4h] [ebp-4h]
  float v8; // [esp+4h] [ebp-4h]

  v1 = -1.0;
  v3 = (float *)(this + 16);
  *(_DWORD *)this = &tonemap_params_t::`vftable';
  if ( *((_DWORD *)this + 4) != COERCE_INT(-1.0) )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 16));
    v1 = -1.0;
    *v3 = -1.0;
  }
  v5 = v1;
  if ( *((_DWORD *)this + 5) != LODWORD(v5) )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 20));
    v1 = -1.0;
    *((float *)this + 5) = -1.0;
  }
  v6 = v1;
  if ( *((_DWORD *)this + 1) != LODWORD(v6) )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 4));
    v1 = -1.0;
    *((float *)this + 1) = -1.0;
  }
  v7 = v1;
  if ( *((_DWORD *)this + 3) != LODWORD(v7) )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 12));
    v1 = -1.0;
    *((float *)this + 3) = -1.0;
  }
  v8 = v1;
  if ( *((_DWORD *)this + 2) != LODWORD(v8) )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 8));
    *((float *)this + 2) = -1.0;
  }
  return this;
}
