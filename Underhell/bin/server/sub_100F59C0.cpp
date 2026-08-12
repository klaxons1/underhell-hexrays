int __thiscall sub_100F59C0(_DWORD *this)
{
  int result; // eax
  int v3; // edi
  int v4; // eax

  result = this[1096];
  if ( result != *(_DWORD *)(dword_106B31C8 + 4) )
  {
    result = (*(int (__thiscall **)(_DWORD *))(*this + 1092))(this);
    v3 = result;
    if ( result )
    {
      v4 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)result + 4))(result, this);
      (*(void (__thiscall **)(int, int, _DWORD *, _DWORD *, _DWORD *))(*(_DWORD *)v3 + 8))(
        v3,
        v4,
        this + 1089,
        this + 1092,
        this + 1095);
      result = dword_106B31C8;
      this[1096] = *(_DWORD *)(dword_106B31C8 + 4);
    }
  }
  return result;
}
