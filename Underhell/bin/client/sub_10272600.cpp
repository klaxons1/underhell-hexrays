int __thiscall sub_10272600(void *this, int a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 204))(this);
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 964))(this, a2);
    if ( (_BYTE)result )
    {
      result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 948))(this);
      if ( (_BYTE)result )
      {
        (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 928))(this, 0);
        (*(void (__thiscall **)(void *))(*(_DWORD *)this + 16))(this);
        return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA68 + 8))(dword_1047CA68, 0);
      }
    }
  }
  return result;
}
