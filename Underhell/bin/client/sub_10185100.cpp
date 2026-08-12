char __thiscall sub_10185100(int this, int a2)
{
  char v4; // al
  int v5; // eax
  int v6; // ecx
  int v7; // esi

  if ( !a2 )
    return 0;
  v4 = sub_100766E0();
  sub_10228370((char *)(this + 404), 4u, "%i", v4);
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 204))(dword_1041315C);
  sub_102286F0(v5, (char *)(this + 408), 0x100u);
  v6 = *(_DWORD *)(this + 664);
  if ( a2 != v6 )
  {
    if ( v6 )
      sub_1022AF00(v6);
    *(_DWORD *)(this + 664) = sub_1022AD00(a2);
  }
  v7 = sub_10229C90(*(_DWORD *)(this + 664));
  if ( v7 )
  {
    while ( sub_1022AEE0(0) || sub_10184F60((int *)this, v7, 0) )
    {
      v7 = sub_1021F0F0(v7);
      if ( !v7 )
        goto LABEL_11;
    }
    return 0;
  }
LABEL_11:
  sub_10184850((_DWORD *)this);
  return 1;
}
