_BYTE *__thiscall sub_1026F620(_DWORD *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // edi
  _DWORD *v5; // eax
  _BYTE *result; // eax
  char v7; // al
  int v8; // ecx
  int v9; // edi
  int v10; // edi
  _DWORD *v11; // eax
  int v12; // edi
  int v13; // [esp+24h] [ebp-Ch]
  int v14; // [esp+24h] [ebp-Ch]
  _BYTE v15[4]; // [esp+2Ch] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+30h] [ebp+0h] BYREF

  v2 = *this;
  v3 = (*(int (__thiscall **)(_DWORD *))(*this + 132))(this);
  (*(void (__thiscall **)(_DWORD *, int))(v2 + 64))(this, v3);
  v4 = *this;
  v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)this[25] + 224))(this[25], v15);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(v4 + 72))(this, *v5);
  (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, int))(*this + 88))(this, 0, 0, 103);
  result = (_BYTE *)this[25];
  if ( result[377] )
  {
    v7 = (*(int (**)(void))(*(_DWORD *)result + 204))();
    v8 = this[25];
    if ( v7 )
    {
      v9 = *this;
      v13 = *(_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v8 + 1008))(v8, v15);
      (*(void (__thiscall **)(_DWORD *, int))(v9 + 72))(this, v13);
    }
    else
    {
      result = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 204))(v8);
      if ( (_BYTE)result )
        return result;
      v10 = *this;
      v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)this[25] + 804))(this[25], v15);
      (*(void (__thiscall **)(_DWORD *, _DWORD))(v10 + 72))(this, *v11);
      (*(void (__thiscall **)(_DWORD *, int, int, int))(*this + 88))(this, 1, 3, 97);
      v12 = *this;
      v14 = *(_DWORD *)(*(int (__thiscall **)(_DWORD, _UNKNOWN **))(*(_DWORD *)this[25] + 808))(this[25], &retaddr);
      (*(void (__thiscall **)(_DWORD *, int))(v12 + 72))(this, v14);
    }
    return (_BYTE *)(*(int (__thiscall **)(_DWORD *, _DWORD, int, int))(*this + 88))(this, 0, 2, 97);
  }
  return result;
}
