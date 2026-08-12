int __thiscall sub_1033DF70(int this, int a2, int a3, int a4)
{
  _BYTE *v6; // ecx
  int v7; // [esp+4h] [ebp-4h] BYREF

  if ( a2 == 102 && *(_DWORD *)(this + 2796) && sub_1004AE70((_DWORD *)this, 0, 1) && sub_10023D10((_DWORD *)this, 10) )
    return 121;
  v6 = *(_BYTE **)(this + 3624);
  *(_BYTE *)(this + 3648) = 1;
  v7 = 0;
  if ( v6 && sub_101645F0(v6, a2, a3, a4, &v7) )
    return v7;
  else
    return sub_10043EF0((_DWORD *)this, a2, a3, a4);
}
