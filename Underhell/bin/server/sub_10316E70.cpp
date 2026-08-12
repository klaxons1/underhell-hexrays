int __thiscall sub_10316E70(_DWORD *this, const void *a2)
{
  int v3; // eax
  int result; // eax
  int v5; // eax
  int v6; // eax
  int (__thiscall *v7)(_DWORD *); // eax
  _DWORD *v8; // esi
  int v9; // edi
  _DWORD v10[22]; // [esp+4h] [ebp-5Ch] BYREF
  int v11; // [esp+5Ch] [ebp-4h]

  if ( !(*(int (__thiscall **)(_DWORD *))(*this + 368))(this) )
    return sub_1002ABF0(this, a2);
  v3 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3) )
    return sub_1002ABF0(this, a2);
  if ( (*(int (__thiscall **)(_DWORD *))(*this + 368))(this)
    && (v5 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this),
        (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5))
    && (v6 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this),
        (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 1096))(v6))
    || sub_103142C0(this)
    || this[1027] < this[1028] )
  {
    v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
    v9 = v8[55];
    v11 = (*(int (__thiscall **)(_DWORD *))(*v8 + 1572))(v8);
    result = sub_1002ABF0(this, a2);
    if ( v8[55] < v9 || (result = (*(int (__thiscall **)(_DWORD *))(*v8 + 1572))(v8), result < v11) )
      ++this[1027];
  }
  else
  {
    v7 = *(int (__thiscall **)(_DWORD *))(*this + 368);
    qmemcpy(v10, a2, sizeof(v10));
    v10[19] = v7(this);
    return sub_1002ABF0(this, v10);
  }
  return result;
}
