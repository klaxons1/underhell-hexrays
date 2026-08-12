_DWORD *__thiscall sub_10145000(_DWORD *this, const void *a2)
{
  void *v3; // edi
  _DWORD *result; // eax

  if ( this )
    v3 = this + 2;
  else
    v3 = 0;
  qmemcpy(v3, a2, 0x74u);
  sub_10143830(this);
  result = (_DWORD *)sub_1022FDF0(688192);
  if ( result )
  {
    result[1] = 1;
    *result = &CClientRenderablesList::`vftable';
    this[38] = 0;
    this[36] = result;
  }
  else
  {
    result = 0;
    this[38] = 0;
    this[36] = 0;
  }
  return result;
}
