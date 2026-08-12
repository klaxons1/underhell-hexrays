char *__thiscall sub_102BE830(char *this)
{
  float *v2; // esi
  double v3; // st7
  float v5; // [esp+8h] [ebp-4h]
  float v6; // [esp+8h] [ebp-4h]
  float v7; // [esp+8h] [ebp-4h]

  v2 = (float *)(this + 4);
  *(_DWORD *)this = &CEnvHeadcrabCanisterShared::`vftable';
  v3 = 0.0;
  if ( 0.0 != *((float *)this + 1) )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 4));
    v3 = 0.0;
    *v2 = 0.0;
  }
  if ( v3 != v2[1] )
  {
    (**((void (__thiscall ***)(int, float *))v2 - 1))((int)(v2 - 1), v2);
    v3 = 0.0;
    v2[1] = 0.0;
  }
  if ( v3 != v2[2] )
  {
    (**((void (__thiscall ***)(int, float *))v2 - 1))((int)(v2 - 1), v2);
    v3 = 0.0;
    v2[2] = 0.0;
  }
  if ( v3 != *((float *)this + 7) )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 28));
    v3 = 0.0;
    *((float *)this + 7) = 0.0;
  }
  if ( v3 != *((float *)this + 8) )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 28));
    v3 = 0.0;
    *((float *)this + 8) = 0.0;
  }
  if ( v3 != *((float *)this + 9) )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 28));
    v3 = 0.0;
    *((float *)this + 9) = 0.0;
  }
  v5 = v3;
  if ( *((_DWORD *)this + 14) != LODWORD(v5) )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 56));
    v3 = 0.0;
    *((float *)this + 14) = 0.0;
  }
  if ( *((_DWORD *)this + 15) != COERCE_INT(-1.0) )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 60));
    *((float *)this + 15) = -1.0;
    v3 = 0.0;
  }
  v6 = v3;
  if ( *((_DWORD *)this + 23) != LODWORD(v6) )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 92));
    v3 = 0.0;
    *((float *)this + 23) = 0.0;
  }
  v7 = v3;
  if ( *((_DWORD *)this + 13) != LODWORD(v7) )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 52));
    *((float *)this + 13) = 0.0;
  }
  if ( this[112] )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 112));
    this[112] = 0;
  }
  return this;
}
