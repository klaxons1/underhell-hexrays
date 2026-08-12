int __thiscall sub_100D7440(void *this, int a2)
{
  int *v3; // ecx
  int v4; // eax

  v3 = (int *)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
      return (*(int (__thiscall **)(void *, const char *))(*(_DWORD *)this + 216))(this, String);
  }
  else
  {
    v4 = sub_1010D460(v3);
  }
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 216))(this, v4);
}
