bool __thiscall sub_10335530(_DWORD *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // eax

  if ( *(_DWORD *)(dword_106B31C8 + 20) != 1 )
    return 0;
  v2 = this[581];
  if ( v2 == 4
    || v2 == 6
    || (this[62] & 0x100000) != 0
    || *((_BYTE *)this + 2680)
    || !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 1580))(this) )
  {
    return 0;
  }
  v3 = *this;
  v4 = sub_10261B20();
  return (*(int (__thiscall **)(_DWORD *, int))(v3 + 1080))(this, v4) == 3;
}
