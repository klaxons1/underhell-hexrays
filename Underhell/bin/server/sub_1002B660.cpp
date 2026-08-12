char __thiscall sub_1002B660(int this, int a2)
{
  int v3; // ebx
  char result; // al

  v3 = *(_DWORD *)(this + 2324);
  if ( a2 != v3 )
    *(float *)(this + 2328) = *(float *)(dword_106B31C8 + 12);
  if ( a2 == 1 && (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
  {
    sub_100285C0((_DWORD *)this, 0, 1);
    DevMsg(2, "Stripped\n");
  }
  result = *(_DWORD *)(this + 2324) != a2;
  *(_DWORD *)(this + 2324) = a2;
  if ( a2 != *(_DWORD *)(this + 2336) )
    *(_DWORD *)(this + 2336) = a2;
  if ( result )
    return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)this + 1404))(this, v3, a2);
  return result;
}
