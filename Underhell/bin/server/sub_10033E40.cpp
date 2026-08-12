void __thiscall sub_10033E40(int this, int a2)
{
  double v3; // st7
  int v4; // eax
  _BYTE v5[44]; // [esp+4h] [ebp-50h] BYREF
  int v6; // [esp+30h] [ebp-24h]
  float v7; // [esp+38h] [ebp-1Ch]
  int v8; // [esp+44h] [ebp-10h]

  if ( *(_BYTE *)(this + 1713) )
  {
    sub_10247EC0(v5);
    v3 = (double)*(int *)(this + 220);
    v8 = 0;
    v7 = v3 + v7;
    v4 = sub_10261B20();
    if ( v4 )
      v6 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
    else
      v6 = -1;
    sub_10031BF0(this, 1, (int)v5, 0);
  }
  else
  {
    Warning("GibHead Called on non-gibable NPC, ignoring the input \n");
  }
}
