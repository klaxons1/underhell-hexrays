int __thiscall sub_1022DBC0(int this, int a2)
{
  int v3; // eax
  _WORD *v4; // edx
  unsigned __int16 v5; // di
  _WORD *v6; // eax
  int v8; // edi

  (**(void (__thiscall ***)(int))this)(this);
  v3 = (unsigned __int16)(a2 - 1);
  if ( (unsigned __int16)v3 >= *(_WORD *)(this + 60)
    || (v4 = (_WORD *)(*(_DWORD *)(this + 12) + 12 * v3), v4[4] == (_WORD)v3) && v4[5] != (_WORD)v3
    || (v5 = a2 - 1, v4[1] != HIWORD(a2)) )
  {
    v5 = -1;
  }
  if ( v5 >= *(_WORD *)(this + 60) )
    return (*(int (__thiscall **)(int))(*(_DWORD *)this + 8))(this);
  v6 = (_WORD *)(*(_DWORD *)(this + 12) + 12 * v5);
  if ( v6[4] == v5 && v6[5] != v5 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)this + 8))(this);
  if ( *v6 )
    sub_1022D820((unsigned __int16 *)this, a2);
  sub_1022D600((_DWORD *)(this + 12), *(_WORD *)(this + 68), v5);
  v8 = sub_1022D8D0((void *)this, v5);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 8))(this);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 16))(this, v8);
}
