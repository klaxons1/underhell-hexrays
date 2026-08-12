int __thiscall sub_10236710(void *this)
{
  int v2; // edi
  int v3; // ebx
  int v4; // eax
  int v6; // edi
  int v7; // ebx
  int v8; // eax

  if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 208))(this) )
  {
    v2 = dword_1047CA6C;
    v3 = *(_DWORD *)dword_1047CA6C;
    v4 = (**(int (__thiscall ***)(void *))this)(this);
    return (*(int (__thiscall **)(int, int))(v3 + 156))(v2, v4);
  }
  else
  {
    v6 = dword_1047CA70;
    v7 = *(_DWORD *)dword_1047CA70;
    v8 = (**(int (__thiscall ***)(void *))this)(this);
    return (*(int (__thiscall **)(int, int))(v7 + 80))(v6, v8);
  }
}
