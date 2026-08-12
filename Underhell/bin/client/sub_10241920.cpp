int __thiscall sub_10241920(int this, char *String1)
{
  bool v3; // zf
  char *v4; // eax
  int v5; // eax
  char *v7; // [esp+8h] [ebp-8h] BYREF

  v3 = _strnicmp(String1, "vgui::", 6u) == 0;
  v4 = String1 + 6;
  if ( !v3 )
    v4 = String1;
  if ( !v4 )
    return 0;
  v7 = v4;
  v5 = sub_1023D360((unsigned __int8 (__cdecl **)(int, int))this, (int)&v7);
  if ( v5 == -1 )
    return 0;
  else
    return *(_DWORD *)(*(_DWORD *)(this + 4) + 24 * v5 + 20);
}
