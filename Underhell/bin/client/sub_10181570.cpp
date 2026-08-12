int __thiscall sub_10181570(int (__thiscall ***this)(void *), int (__thiscall **a2)(void *), int a3)
{
  int result; // eax
  int (__thiscall **v5)(void *); // ecx
  int (__thiscall **v6)(void *); // ecx
  int (__thiscall **v7)(void *); // eax

  if ( !(_BYTE)a3 )
  {
    if ( this[12] == a2 )
      this[12] = 0;
    v7 = this[13];
    if ( v7 )
    {
      this[12] = v7;
      this[13] = 0;
      (*((void (__stdcall **)(int))*v7 + 7))(1);
    }
    goto LABEL_14;
  }
  if ( !(*((unsigned __int8 (__thiscall **)(_DWORD))*a2 + 6))(a2) )
  {
LABEL_14:
    (*((void (__thiscall **)(int (__thiscall **)(void *), int))*a2 + 7))(a2, a3);
    return (**this)(this);
  }
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 300))(dword_1041315C)
    || (result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 320))(dword_1041315C), (_BYTE)result) )
  {
    v5 = this[12];
    if ( v5 && v5 != a2 )
    {
      if ( (*((unsigned __int8 (__thiscall **)(_DWORD))*v5 + 9))(v5) )
      {
        v6 = this[12];
        this[13] = v6;
        (*((void (__thiscall **)(int (__thiscall **)(void *), _DWORD))*v6 + 7))(v6, 0);
      }
    }
    this[12] = a2;
    goto LABEL_14;
  }
  return result;
}
