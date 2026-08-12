char __thiscall sub_1023B090(_WORD *this, int a2, int a3)
{
  const char **v4; // edi
  const char *v5; // eax
  int v7; // edi

  if ( (*(unsigned __int8 (__thiscall **)(_WORD *))(*(_DWORD *)this + 532))(this) )
  {
    v4 = sub_1023B020(this, a2, a3);
    if ( v4 )
    {
      if ( sub_10236A50((int (__thiscall ***)(void *, int))this) )
      {
        v5 = v4[4];
        if ( v5 )
          ((void (__thiscall *)(const char *))v5)(&v4[5][(_DWORD)this]);
        if ( !*((_BYTE *)v4 + 40) )
          return 1;
      }
    }
  }
  v7 = (*(int (__thiscall **)(_WORD *))(*(_DWORD *)this + 144))(this);
  if ( (this[40] & 0x400) != 0
    && v7
    && !(*(unsigned __int8 (__thiscall **)(_WORD *, int, int))(*(_DWORD *)this + 444))(this, a2, a3) )
  {
    return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v7 + 440))(v7, a2, a3);
  }
  else
  {
    return 0;
  }
}
