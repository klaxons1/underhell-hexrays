int sub_10104C50()
{
  int result; // eax
  char *v1; // eax

  sub_10103440();
  result = dword_1043630C;
  if ( *(_DWORD *)(dword_1043630C + 48) )
  {
    v1 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 344))(dword_1041315C);
    sub_10104280(v1);
    return sub_10104770();
  }
  return result;
}
