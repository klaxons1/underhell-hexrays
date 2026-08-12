_DWORD *__thiscall sub_102F2B30(_DWORD *this)
{
  char *v2; // eax
  _DWORD *v3; // eax
  char *v4; // eax
  _DWORD *v5; // eax
  char *v6; // eax
  _DWORD *result; // eax

  sub_100422B0(this);
  v2 = (char *)this[929];
  if ( !v2 )
    v2 = (char *)String;
  v3 = sub_1012C5B0(0, v2, (int)this, 0, 0);
  if ( v3 )
    this[926] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v3 + 8))(v3);
  else
    this[926] = -1;
  v4 = (char *)this[930];
  if ( !v4 )
    v4 = (char *)String;
  v5 = sub_1012C5B0(0, v4, (int)this, 0, 0);
  if ( v5 )
    this[927] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v5 + 8))(v5);
  else
    this[927] = -1;
  v6 = (char *)this[931];
  if ( !v6 )
    v6 = (char *)String;
  result = sub_1012C5B0(0, v6, (int)this, 0, 0);
  if ( result )
  {
    result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*result + 8))(result);
    this[928] = *result;
  }
  else
  {
    this[928] = -1;
  }
  if ( this )
  {
    result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 8))(this);
    this[918] = *result;
  }
  else
  {
    MEMORY[0xE58] = -1;
  }
  return result;
}
