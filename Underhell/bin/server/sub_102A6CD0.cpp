bool __thiscall sub_102A6CD0(_DWORD **this)
{
  int v2; // eax
  int v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  int v6; // ebx
  _DWORD *v7; // eax
  bool result; // al
  _BYTE v9[4]; // [esp+8h] [ebp-4h] BYREF

  v2 = (*(int (__thiscall **)(_DWORD *))(*this[1] + 368))(this[1]);
  result = 0;
  if ( v2 )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 288))(v2);
    if ( v3 )
    {
      v4 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 1092))(v3);
      v5 = v4;
      if ( v4 )
      {
        v6 = *v4;
        v7 = (_DWORD *)((int (__thiscall *)(_DWORD **, _BYTE *))(*this)[73])(this, v9);
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(v6 + 132))(v5, *v7) )
          return 1;
      }
    }
  }
  return result;
}
