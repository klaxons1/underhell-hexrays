float *__thiscall sub_1033D4A0(void *this, float *a2)
{
  float *result; // eax

  if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 2168))(this) )
  {
    if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
      sub_100DAE60((int)this);
    result = a2;
    *a2 = *((float *)this + 145);
    a2[1] = *((float *)this + 146);
    a2[2] = *((float *)this + 147) + 40.0;
  }
  else
  {
    if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
      sub_100DAE60((int)this);
    result = a2;
    *a2 = *((float *)this + 145);
    a2[1] = *((float *)this + 146);
    a2[2] = *((float *)this + 147) + 66.0;
  }
  return result;
}
