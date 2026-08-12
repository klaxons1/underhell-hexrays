int __thiscall sub_1025C980(_DWORD *this)
{
  int v2; // edi
  int v3; // eax
  int result; // eax
  char v5; // al
  int v6; // edx

  v2 = *this;
  v3 = (*(int (__thiscall **)(_DWORD *))(*this + 132))(this);
  (*(void (__thiscall **)(_DWORD *, int))(v2 + 64))(this, v3);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)this[29] + 204))(this[29]) && *(_BYTE *)(this[29] + 380) )
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 72))(this, this[28]);
  else
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 72))(this, *(_DWORD *)(this[29] + 389));
  (*(void (__thiscall **)(_DWORD *, _DWORD, int, int))(*this + 88))(this, 0, 1, 103);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 72))(this, this[25]);
  (*(void (__thiscall **)(_DWORD *, _DWORD, int, int))(*this + 88))(this, 0, 1, 101);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 72))(this, this[26]);
  (*(void (__thiscall **)(_DWORD *, _DWORD, int, int))(*this + 88))(this, 0, 1, 102);
  result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[29] + 932))(this[29]);
  if ( (_BYTE)result )
  {
    v5 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[29] + 204))(this[29]);
    v6 = *this;
    if ( v5 )
      (*(void (__thiscall **)(_DWORD *, _DWORD))(v6 + 72))(this, this[27]);
    else
      (*(void (__thiscall **)(_DWORD *, _DWORD))(v6 + 72))(this, *(_DWORD *)(this[29] + 385));
    return (*(int (__thiscall **)(_DWORD *, _DWORD, int, int))(*this + 88))(this, 0, 2, 98);
  }
  return result;
}
