int __thiscall sub_1024D330(void *this, int a2)
{
  int result; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // eax

  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 204))(this);
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 964))(this, a2);
    if ( (_BYTE)result )
    {
      result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 948))(this);
      if ( (_BYTE)result )
      {
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 928))(this, 1);
        (*(void (__thiscall **)(void *))(*(_DWORD *)this + 16))(this);
        v4 = dword_1047CA68;
        v5 = *(_DWORD *)dword_1047CA68;
        v6 = (**(int (__thiscall ***)(void *))this)(this);
        return (*(int (__thiscall **)(int, int))(v5 + 8))(v4, v6);
      }
    }
  }
  return result;
}
