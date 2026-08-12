int __thiscall sub_10247260(int this, int a2)
{
  bool v3; // zf
  int v4; // eax
  int v5; // eax
  int v7; // [esp+8h] [ebp-8h] BYREF

  v3 = sub_10227C80(a2, "vgui::", 6) == 0;
  v4 = a2 + 6;
  if ( !v3 )
    v4 = a2;
  if ( !v4 )
    return 0;
  v7 = v4;
  v5 = sub_10246680((unsigned __int8 (__cdecl **)(int, int))(this + 48), (int)&v7);
  if ( v5 == -1 )
    return 0;
  else
    return *(_DWORD *)(*(_DWORD *)(this + 52) + 24 * v5 + 20);
}
