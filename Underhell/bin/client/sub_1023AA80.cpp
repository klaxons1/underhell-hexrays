bool __thiscall sub_1023AA80(int this, int a2, int a3, int a4, int a5)
{
  int v6; // edi
  int v7; // ebx
  int v8; // eax
  int v9; // edi
  int v10; // ebx
  bool result; // al
  signed int v12; // ecx

  if ( (*(_WORD *)(this + 80) & 0x4000) != 0 )
  {
    v6 = dword_1047CA70;
    v7 = *(_DWORD *)dword_1047CA70;
    v8 = (**(int (__thiscall ***)(int, int *, int *))this)(this, &a2, &a3);
    (*(void (__thiscall **)(int, int))(v7 + 40))(v6, v8);
    v10 = a5 - a3;
    result = 1;
    if ( a4 - a2 >= 0 && v10 >= 0 )
    {
      v9 = a4 - a2;
      if ( v9 <= sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))this)
        && v10 <= sub_102374F0((int (__thiscall ***)(void *, _BYTE *, int *))this) )
      {
        return 0;
      }
    }
  }
  else
  {
    v12 = *(_DWORD *)(*(_DWORD *)(this + 36) + 4);
    return (int)abs32(a4 - a2) > v12 || (int)abs32(a5 - a3) > v12;
  }
  return result;
}
