float *__thiscall sub_10130840(_DWORD *this, int a2)
{
  float *v3; // eax
  float *result; // eax

  if ( this[1] )
    (*(void (__thiscall **)(_DWORD *))(*this + 28))(this);
  v3 = (float *)sub_100DDA40(296);
  if ( v3 )
  {
    result = sub_101306F0(v3, a2);
    this[1] = result;
  }
  else
  {
    result = 0;
    this[1] = 0;
  }
  return result;
}
