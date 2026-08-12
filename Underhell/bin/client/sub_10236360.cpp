int __thiscall sub_10236360(void *this, int a2)
{
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int result; // eax
  int v7; // edi
  int v8; // ebx
  int v9; // eax

  v3 = dword_1047CA70;
  v4 = *(_DWORD *)dword_1047CA70;
  v5 = (**(int (__thiscall ***)(void *))this)(this);
  result = (*(int (__thiscall **)(int, int))(v4 + 220))(v3, v5);
  if ( (_BYTE)a2 != (_BYTE)result )
  {
    v7 = dword_1047CA70;
    v8 = *(_DWORD *)dword_1047CA70;
    v9 = (**(int (__thiscall ***)(void *, int))this)(this, a2);
    (*(void (__thiscall **)(int, int))(v8 + 224))(v7, v9);
    (*(void (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)this + 244))(this, 0, 0);
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 16))(this);
  }
  return result;
}
