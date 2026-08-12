_DWORD *__thiscall sub_10086500(_DWORD *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  _DWORD *result; // eax

  sub_100E33C0(0);
  *this = &CAI_NetworkManager::`vftable';
  v2 = (_DWORD *)sub_10184390(784);
  if ( v2 )
    v3 = sub_100851F0(v2);
  else
    v3 = 0;
  this[202] = v3;
  v4 = (_DWORD *)sub_10184390(24);
  if ( v4 )
    v5 = sub_10086300(v4, (int)this);
  else
    v5 = 0;
  this[201] = v5;
  *((_BYTE *)this + 800) = 0;
  *((_BYTE *)this + 812) = 0;
  result = this;
  byte_10692E28 = 0;
  return result;
}
