int __thiscall sub_103F29E0(_DWORD *this, _BYTE *a2)
{
  int v3; // eax
  int v4; // eax
  int result; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax

  v3 = sub_10269EC0(this);
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v3 + 4))(v3, a2);
  if ( (a2[3296] & 0x20) != 0
    || ((v4 = sub_10269EC0(this)) == 0 ? (result = 0) : (result = v4 - 1688), *(_BYTE *)(result + 2128)) )
  {
    v6 = sub_10269EC0(this);
    if ( v6 )
      v7 = v6 - 1688;
    else
      v7 = 0;
    *(_BYTE *)(v7 + 2128) = 0;
    v8 = sub_10269EC0(this);
    result = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v8 + 24))(v8, a2);
    if ( (_BYTE)result )
    {
      result = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 72))(this, a2);
      if ( !(_BYTE)result )
        return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 1460))(a2);
    }
  }
  return result;
}
