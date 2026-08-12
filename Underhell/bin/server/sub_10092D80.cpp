int __thiscall sub_10092D80(int this, int a2)
{
  int v3; // eax
  char *v4; // eax
  int result; // eax
  int v6; // eax
  float v7; // [esp+4h] [ebp-8h]

  sub_10029F00((float *)this, a2);
  if ( *(_DWORD *)(this + 3624) )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1364))(this);
    v4 = (char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 16))(v3, 1.0);
    sub_10067DE0(a2, "active_behavior", v4, v7);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 3624) + 240))(*(_DWORD *)(this + 3624), a2);
  }
  result = sub_100D7680(this);
  if ( result )
  {
    v6 = sub_100D7680(this);
    return sub_100AC7A0(v6, a2);
  }
  return result;
}
