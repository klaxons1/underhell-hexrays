int __thiscall sub_1025B3B0(unsigned __int16 *this, int a2)
{
  int result; // eax
  int v4; // edi
  const char *v5; // eax
  int v6; // edi
  int v7; // ebx
  int v8; // eax

  result = (*(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 204))(this);
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(unsigned __int16 *, int))(*(_DWORD *)this + 964))(this, a2);
    if ( (_BYTE)result )
    {
      if ( *((_DWORD *)this + 76) == 1 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 532))(this) )
          (*(void (__thiscall **)(unsigned __int16 *, _DWORD))(*(_DWORD *)this + 48))(this, 0);
        return (*(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 952))(this);
      }
      else
      {
        if ( this[178] != 0xFFFF )
        {
          v4 = dword_1047CA6C;
          v5 = sub_10230460(dword_1047F658, this[178]);
          (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v4 + 300))(v4, v5);
        }
        result = (*(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 948))(this);
        if ( (_BYTE)result && !*((_DWORD *)this + 76) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 532))(this) )
            (*(void (__thiscall **)(unsigned __int16 *, _DWORD))(*(_DWORD *)this + 48))(this, 0);
          (*(void (__thiscall **)(unsigned __int16 *, int))(*(_DWORD *)this + 928))(this, 1);
          (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 16))(this);
          v6 = dword_1047CA68;
          v7 = *(_DWORD *)dword_1047CA68;
          v8 = (**(int (__thiscall ***)(unsigned __int16 *))this)(this);
          return (*(int (__thiscall **)(int, int))(v7 + 8))(v6, v8);
        }
      }
    }
  }
  return result;
}
