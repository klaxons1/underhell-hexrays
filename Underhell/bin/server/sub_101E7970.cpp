_DWORD *__thiscall sub_101E7970(_DWORD **this, _DWORD *a2)
{
  bool v3; // zf
  _DWORD *result; // eax
  _DWORD *v5; // ecx
  int v6; // edx
  int v7; // ecx

  v3 = (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this[2] + 1612))(this[2]) == 0;
  result = a2;
  if ( !v3 )
  {
    v5 = this[2];
    *a2 = v5[182];
    v6 = v5[183];
    v7 = v5[184];
    a2[1] = v6;
    a2[2] = v7;
  }
  return result;
}
