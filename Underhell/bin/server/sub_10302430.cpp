int __thiscall sub_10302430(int this, int a2)
{
  int result; // eax
  int v4; // eax
  char *v5; // eax
  float v6; // [esp+4h] [ebp-8h]

  result = sub_10029F00((float *)this, a2);
  if ( *(_DWORD *)(this + 3624) )
  {
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1364))(this);
    v5 = (char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 16))(v4, 1.0);
    sub_10067DE0(a2, "active_behavior", v5, v6);
    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 3624) + 240))(*(_DWORD *)(this + 3624), a2);
  }
  return result;
}
