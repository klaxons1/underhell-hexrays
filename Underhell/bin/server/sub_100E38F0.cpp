char *__thiscall sub_100E38F0(float *this)
{
  char *v2; // eax
  int v3; // eax
  char *result; // eax

  if ( *((_DWORD *)this + 109) )
    (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 348))(this, *((_DWORD *)this + 109));
  v2 = (char *)*((_DWORD *)this + 57);
  if ( v2 )
  {
    v3 = sub_1012BF20(0, v2, 0, 0, 0, 0);
    if ( v3 )
      this[58] = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
    else
      this[58] = NAN;
  }
  result = (char *)*((_DWORD *)this + 46);
  if ( result )
    return sub_100E2FF0(this, this[46]);
  return result;
}
