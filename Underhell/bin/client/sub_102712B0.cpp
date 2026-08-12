int __thiscall sub_102712B0(_DWORD *this)
{
  int v2; // edi
  _DWORD *v3; // eax
  int result; // eax
  _BYTE v5[4]; // [esp+4h] [ebp-4h] BYREF

  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 64))(this, this[11]);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)this[6] + 204))(this[6]) )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 72))(this, this[10]);
  }
  else
  {
    v2 = *this;
    v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)this[6] + 224))(this[6], v5);
    (*(void (__thiscall **)(_DWORD *, _DWORD))(v2 + 72))(this, *v3);
  }
  (*(void (__thiscall **)(_DWORD *, _DWORD, int, int))(*this + 88))(this, 0, 1, 110);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 72))(this, this[7]);
  (*(void (__thiscall **)(_DWORD *, _DWORD, int, int))(*this + 88))(this, 0, 1, 106);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 72))(this, this[8]);
  (*(void (__thiscall **)(_DWORD *, _DWORD, int, int))(*this + 88))(this, 0, 1, 107);
  result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[6] + 932))(this[6]);
  if ( (_BYTE)result )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 72))(this, this[9]);
    return (*(int (__thiscall **)(_DWORD *, _DWORD, int, int))(*this + 88))(this, 0, 1, 104);
  }
  return result;
}
