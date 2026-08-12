int __thiscall sub_1024BFB0(int (__thiscall ***this)(_DWORD), char *String2, int a3)
{
  int result; // eax
  int v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // eax

  result = sub_10239950(this, String2, 0);
  v5 = result;
  if ( result )
  {
    v6 = (_DWORD *)sub_10229D00(32);
    if ( v6 )
      v7 = sub_1022B1A0(v6, (int)"SetState", "state", a3);
    else
      v7 = 0;
    return ((int (__thiscall *)(int (__thiscall ***)(_DWORD), int, _DWORD *, _DWORD))(*this)[33])(this, v5, v7, 0.0);
  }
  return result;
}
