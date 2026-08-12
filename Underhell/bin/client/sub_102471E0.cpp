int __thiscall sub_102471E0(void *this, __int16 a2, unsigned __int16 *a3, int (__thiscall ***a4)(_DWORD))
{
  char *v5; // eax
  int (__thiscall ***v6)(_DWORD); // eax
  int v7; // esi
  const char *v8; // ebp
  const char *v9; // eax
  int result; // eax

  v5 = (char *)sub_10230460(dword_1047CCCC, *a3);
  v6 = (int (__thiscall ***)(_DWORD))sub_10239950(a4, v5, 1);
  if ( !v6 )
  {
    v7 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 144))(this);
    v8 = sub_10230460(dword_1047CCCC, *a3);
    v9 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 72))(v7);
    result = _stricmp(v9, v8);
    if ( result )
      return result;
    v6 = (int (__thiscall ***)(_DWORD))v7;
  }
  return sub_10246F40((int)this, v6, a2, (int)a3);
}
