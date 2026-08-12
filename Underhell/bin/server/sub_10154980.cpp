int __stdcall sub_10154980(int a1)
{
  int v1; // ecx
  int v2; // eax

  if ( a1 && (v1 = *(_DWORD *)(a1 + 12)) != 0 && (v2 = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 20))(v1)) != 0 )
    return v2 + 3240;
  else
    return 0;
}
