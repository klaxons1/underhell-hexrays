char __thiscall sub_10027AF0(int this, char a2)
{
  int v3; // edi
  int v4; // eax
  bool v5; // zf
  int v7; // [esp-8h] [ebp-Ch]

  if ( !*(_BYTE *)(this + 3544) || a2 )
  {
    v3 = *(_DWORD *)(this + 1676);
    v7 = sub_10073770(v3);
    v4 = sub_10073750(v3);
    sub_1025F360(this, v4, v7);
    v5 = *(_DWORD *)(this + 424) == 0;
    *(_BYTE *)(this + 3544) = 1;
    if ( !v5 )
      sub_10027740(this);
  }
  return 1;
}
