_DWORD *__thiscall sub_10302850(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // eax
  _DWORD *result; // eax

  v3 = this[908];
  v4 = this[910];
  if ( v4 + 1 > v3 )
    sub_102ABFC0(this + 907, v4 - v3 + 1);
  ++this[910];
  v5 = this[907];
  v6 = this[910] - v4 - 1;
  this[911] = v5;
  if ( v6 > 0 )
    memcpy((void *)(v5 + 4 * v4 + 4), (const void *)(v5 + 4 * v4), 4 * v6);
  v7 = (_DWORD *)(this[907] + 4 * v4);
  if ( v7 )
    *v7 = a2;
  (*(void (__thiscall **)(_DWORD *, _DWORD *))(*a2 + 4))(a2, this);
  if ( this )
  {
    result = this + 905;
    a2[3] = this + 905;
  }
  else
  {
    result = 0;
    a2[3] = 0;
  }
  return result;
}
