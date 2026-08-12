int __thiscall sub_10237310(_DWORD *this, int a2)
{
  int v2; // edi
  bool v3; // zf
  int v5; // ebx
  int v6; // ebp
  int v7; // eax
  int (__thiscall **v8)(void *, _DWORD, _DWORD, _DWORD, _DWORD); // ebx
  int v9; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // eax
  int v14; // [esp+10h] [ebp-Ch] BYREF
  int v15; // [esp+14h] [ebp-8h] BYREF
  int v16; // [esp+18h] [ebp-4h] BYREF

  v2 = a2;
  v3 = a2 == 0;
  this[19] = a2;
  if ( v3 )
  {
    v11 = dword_1047CA70;
    v12 = *(_DWORD *)dword_1047CA70;
    v13 = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD))*this)(this, 0, 0, 0, 0);
    return (*(int (__thiscall **)(int, int))(v12 + 48))(v11, v13);
  }
  else
  {
    (*(void (__thiscall **)(int, int *, int *, int *, int *))(*(_DWORD *)v2 + 16))(v2, &v16, &v15, &v14, &a2);
    v5 = dword_1047CA70;
    v6 = *(_DWORD *)dword_1047CA70;
    v7 = (*(int (__thiscall **)(_DWORD *, int, int, int, int))*this)(this, v16, v15, v14, a2);
    (*(void (__thiscall **)(int, int))(v6 + 48))(v5, v7);
    v8 = (int (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, _DWORD))*this;
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 32))(v2);
    return ((int (__thiscall *)(_DWORD *, int))v8[69])(this, v9);
  }
}
