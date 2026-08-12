char **__thiscall sub_101AA720(int this, int a2)
{
  char **result; // eax
  char *v4; // ebx
  _DWORD *v5; // edi
  const char *v6; // esi
  int v7; // [esp+8h] [ebp-4h] BYREF

  result = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) != 2 )
  {
    v7 = 0;
    result = (char **)&v7;
  }
  v4 = *result;
  if ( *result )
  {
    v5 = sub_1012BF20(&dword_1069E3E0, 0, v4, 0, 0, 0, 0);
    if ( v5 )
    {
      sub_101A83B0(this);
      *(_DWORD *)(this + 2608) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v5 + 8))(v5);
      if ( *(_DWORD *)(this + 2324) == 1 )
        sub_1002B660(this, 2);
      sub_10023CB0((char *)this, 25);
      return (char **)sub_101AA550(this, a2);
    }
    else
    {
      v6 = *(const char **)(this + 260);
      if ( !v6 )
        v6 = String;
      return (char **)Warning("npc_vehicledriver %s couldn't find entity named %s\n", v6, v4);
    }
  }
  return result;
}
