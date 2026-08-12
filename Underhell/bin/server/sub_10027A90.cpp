void __thiscall sub_10027A90(int this, char a2)
{
  int v3; // eax
  bool v4; // zf
  int v5; // [esp-4h] [ebp-8h]

  if ( *(_BYTE *)(this + 3544) || a2 )
  {
    v5 = sub_10073730(*(_DWORD *)(this + 1676));
    v3 = sub_10073710(*(_DWORD *)(this + 1676));
    sub_1025F360(this, v3, v5);
    v4 = *(_DWORD *)(this + 424) == 0;
    *(_BYTE *)(this + 3544) = 0;
    if ( !v4 )
      sub_10027740(this);
  }
}
