int *__thiscall sub_101A8B20(int *this, int a2)
{
  int v3; // ebx
  unsigned __int16 v4; // ax
  int v5; // edi
  int *result; // eax

  if ( a2 )
    v3 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    v3 = -1;
  v4 = sub_100EC160(this + 3, 0);
  v5 = v4;
  sub_1016F8E0((int)(this + 3), 0xFFFFu, v4);
  result = (int *)(this[3] + 8 * v5);
  if ( result )
    *result = v3;
  return result;
}
