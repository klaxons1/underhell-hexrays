int __thiscall sub_102358E0(_DWORD *this)
{
  _DWORD *v2; // eax
  int result; // eax

  *this = &CServerNetworkProperty::`vftable';
  this[1] = &CServerNetworkProperty::`vftable';
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_106B31D0 + 392))(dword_106B31D0, this + 4);
  v2 = (_DWORD *)this[3];
  if ( v2 )
  {
    v2[3] = 0;
    *v2 = 0;
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 88))(dword_106B31D0, this[3]);
    this[3] = 0;
  }
  result = sub_1024D8A0(this + 14);
  *this = &IServerNetworkable::`vftable';
  return result;
}
