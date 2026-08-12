_DWORD *__thiscall sub_10264C10(_DWORD *this)
{
  bool v2; // zf
  int v3; // edx
  _DWORD *result; // eax

  *this = &CEntityFactoryDictionary::`vftable';
  this[1] = 0;
  this[2] = 0;
  this[3] = 128;
  this[4] = 0;
  this[2] = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 2048);
  v2 = this[1] == 0;
  v3 = this[2];
  this[5] = 0xFFFF;
  this[6] = -1;
  this[7] = v3;
  result = this;
  if ( v2 )
    this[1] = sub_10002010;
  return result;
}
