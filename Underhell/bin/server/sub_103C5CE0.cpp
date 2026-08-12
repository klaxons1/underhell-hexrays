float *__thiscall sub_103C5CE0(void *this, float *a2)
{
  float *result; // eax
  float *v4; // eax
  double v5; // st7

  if ( *(_DWORD *)(dword_106EBDC4 + 48) )
  {
    if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
      sub_100DAE60((int)this);
    result = a2;
    *a2 = *((float *)this + 145);
    a2[1] = *((float *)this + 146);
    a2[2] = *((float *)this + 147) + 6.0;
  }
  else
  {
    if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
      sub_100DAE60((int)this);
    v4 = (float *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 532))(this);
    *a2 = *((float *)this + 145) + *v4;
    a2[1] = *((float *)this + 146) + v4[1];
    v5 = *((float *)this + 147) + v4[2];
    result = a2;
    a2[2] = v5;
  }
  return result;
}
