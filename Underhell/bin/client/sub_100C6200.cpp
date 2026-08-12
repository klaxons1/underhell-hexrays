int __thiscall sub_100C6200(int *this)
{
  int result; // eax
  int v3; // esi
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  int v6; // eax
  int v7; // [esp+8h] [ebp-4h]

  result = sub_100C2C50(this);
  v3 = this[4];
  if ( v3 )
  {
    v4 = (_DWORD *)(**(int (__thiscall ***)(int))v3)(v3);
    v5 = v4;
    v7 = *v4;
    v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 4))(v3, 1);
    result = (*(int (__thiscall **)(_DWORD *, int))(v7 + 40))(v5, v6);
    this[4] = 0;
  }
  return result;
}
