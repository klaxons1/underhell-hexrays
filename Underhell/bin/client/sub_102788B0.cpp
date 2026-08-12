int __thiscall sub_102788B0(int this, int a2)
{
  int v3; // ebp
  int result; // eax
  int v5; // ebx
  int i; // esi
  int v7; // eax

  sub_100C2010((int *)(this + 240), *(_DWORD *)(this + 252), &a2);
  v3 = a2;
  result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 208) + 892))(*(_DWORD *)(this + 208), a2);
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 208) + 776))(*(_DWORD *)(this + 208), v3);
    v5 = result;
    for ( i = 0; i < v5; ++i )
    {
      v7 = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 208) + 780))(*(_DWORD *)(this + 208), v3, i);
      result = sub_102788B0(v7);
    }
  }
  return result;
}
