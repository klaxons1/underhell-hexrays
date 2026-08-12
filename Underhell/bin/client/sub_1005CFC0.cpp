const char *__stdcall sub_1005CFC0(int a1)
{
  int v1; // eax

  v1 = sub_1006D090(a1);
  if ( v1 )
    return (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v1 + 592))(v1);
  else
    return "Unknown";
}
