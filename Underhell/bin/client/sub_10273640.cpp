unsigned __int8 __thiscall sub_10273640(int this, int a2)
{
  int v2; // edi
  int v4; // ebx
  bool v5; // zf
  int v6; // eax
  unsigned __int8 result; // al
  bool v8; // bl
  int v9; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  nullsub_5(a2);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 244))(dword_1047CA68);
  v5 = v4 == (**(int (__thiscall ***)(int))this)(this);
  v6 = *(_DWORD *)dword_1047CA68;
  if ( v5 )
    return (*(int (__stdcall **)(_DWORD))(v6 + 8))(0);
  (*(void (__stdcall **)(int *, int *))(v6 + 28))(&a2, &v9);
  result = (unsigned __int8)sub_10236F60((int (__thiscall ***)(void *, int *, int *))this, &a2, &v9);
  if ( a2 >= 20 )
  {
    v8 = (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 83)
      || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 84);
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 79)
      || (result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 80)) != 0 )
    {
      result = 1;
    }
    if ( !v8 && !result && v2 == 107 )
      return (*(int (__thiscall **)(_DWORD, _DWORD, int, int, int))(**(_DWORD **)(this + 268) + 820))(
               *(_DWORD *)(this + 268),
               *(_DWORD *)(this + 208),
               1,
               1,
               1);
  }
  return result;
}
