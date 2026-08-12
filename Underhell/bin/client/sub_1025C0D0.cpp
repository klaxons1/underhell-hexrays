int __thiscall sub_1025C0D0(void *this, int a2)
{
  int result; // eax
  int v4; // edi

  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 948))(this);
  if ( (_BYTE)result )
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA68 + 8))(dword_1047CA68, 0);
  if ( *((_DWORD *)this + 76) != 1 )
  {
    result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 964))(this, a2);
    if ( (_BYTE)result )
    {
      result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 932))(this);
      if ( (_BYTE)result || *((_DWORD *)this + 76) )
      {
        if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 204))(this)
          && ((v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 20))(dword_1047CA68),
               (**(int (__thiscall ***)(void *))this)(this) == v4)
           || (*((_BYTE *)this + 292) & 0x20) != 0) )
        {
          (*(void (__thiscall **)(void *))(*(_DWORD *)this + 952))(this);
          return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 16))(this);
        }
        else
        {
          (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 928))(this, 0);
          return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 16))(this);
        }
      }
    }
  }
  return result;
}
