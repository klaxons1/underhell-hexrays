int __thiscall sub_10271600(_DWORD *this)
{
  int v3; // edi
  _DWORD *v4; // eax
  _BYTE v5[4]; // [esp+4h] [ebp-4h] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 932))(this) )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 220))(this, this[96]);
    return sub_1025B940(this);
  }
  else
  {
    v3 = *this;
    v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 1008))(this, v5);
    (*(void (__thiscall **)(_DWORD *, _DWORD))(v3 + 220))(this, *v4);
    return sub_1025B940(this);
  }
}
