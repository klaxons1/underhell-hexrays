int __thiscall sub_1024D430(_DWORD *this, int a2)
{
  int v3; // eax
  int v5; // eax

  sub_102499B0(this, a2);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 204))(this) )
  {
    v3 = this[100];
    if ( v3 )
      (*(void (__thiscall **)(_DWORD *, _DWORD, int, _DWORD))(*this + 836))(this, 0, v3, 0);
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 216))(this, this[102]);
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 992))(this, this[102], this[102]);
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 996))(this, this[102], this[102]);
    return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 1000))(this, this[102], this[102]);
  }
  else
  {
    v5 = this[101];
    if ( v5 )
      (*(void (__thiscall **)(_DWORD *, _DWORD, int, _DWORD))(*this + 836))(this, 0, v5, 0);
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 216))(this, this[103]);
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 992))(this, this[103], this[103]);
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 996))(this, this[103], this[103]);
    return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 1000))(this, this[103], this[103]);
  }
}
