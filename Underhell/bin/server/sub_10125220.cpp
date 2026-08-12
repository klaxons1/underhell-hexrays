char *__thiscall sub_10125220(int this)
{
  char *v2; // eax
  int v3; // eax

  v2 = *(char **)(this + 212);
  if ( v2 )
  {
    v3 = sub_1012BF20(0, v2, 0, 0, 0, 0);
    if ( v3 )
    {
      *(_DWORD *)(this + 876) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
      return sub_100E38F0((float *)this);
    }
    *(_DWORD *)(this + 876) = -1;
  }
  return sub_100E38F0((float *)this);
}
