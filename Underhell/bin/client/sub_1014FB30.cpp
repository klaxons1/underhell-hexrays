int __thiscall sub_1014FB30(void *this, int a2, int a3, char *String1)
{
  int v6; // eax

  if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 116))(this)
    && String1
    && !_stricmp(String1, "cancelselect") )
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 64))(this);
    return 0;
  }
  if ( a2 >= 1 )
  {
    v6 = a3;
    if ( (unsigned int)(a3 - 1) <= 9 )
    {
      if ( a3 == 1 )
        v6 = 11;
      if ( sub_1014F670(v6 - 1) )
        return 0;
    }
  }
  return 1;
}
