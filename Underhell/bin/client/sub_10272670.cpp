const char *__thiscall sub_10272670(unsigned int *this, int a2)
{
  const char *result; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // ebp
  int v7; // eax
  int v8; // eax
  int v9; // eax

  sub_10241570(this, a2);
  result = (const char *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)a2 + 4))(a2, "ScrollBar.Wide");
  if ( result )
  {
    v4 = atoi(result);
    if ( (*(unsigned __int8 (__thiscall **)(unsigned int *))(*this + 84))(this) )
    {
      v5 = dword_1047CA7C;
      v6 = *(_DWORD *)dword_1047CA7C;
      v7 = (*(int (__thiscall **)(unsigned int *, int))(*this + 80))(this, v4);
      v4 = (*(int (__thiscall **)(int, int))(v6 + 52))(v5, v7);
    }
    if ( this[54] && (*(unsigned __int8 (__thiscall **)(unsigned int))(*(_DWORD *)this[54] + 776))(this[54]) )
    {
      v8 = sub_102374F0((int (__thiscall ***)(void *, _BYTE *, int *))this);
      return (const char *)sub_102361A0((int (__thiscall ***)(void *, int, int))this, v4, v8);
    }
    else
    {
      v9 = sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))this);
      return (const char *)sub_102361A0((int (__thiscall ***)(void *, int, int))this, v9, v4);
    }
  }
  return result;
}
