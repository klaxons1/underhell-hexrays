int __thiscall sub_1019A0B0(_DWORD *this)
{
  int v1; // eax
  int v2; // edx
  int *v3; // eax
  int v4; // eax
  int v6[3]; // [esp+0h] [ebp-18h] BYREF
  int v7[3]; // [esp+Ch] [ebp-Ch] BYREF

  v1 = this[323];
  if ( v1 < 0 )
    return 0;
  if ( v1 >= this[315] )
    return 0;
  if ( v1 > this[321] )
    return 0;
  v2 = this[314] + 32 * v1;
  if ( *(_DWORD *)(v2 + 24) == v1 && *(_DWORD *)(v2 + 28) != v1 )
    return 0;
  v3 = (int *)(this[314] + 32 * v1);
  v6[0] = *v3;
  v6[1] = v3[1];
  v6[2] = v3[2];
  v7[0] = v3[3];
  v7[1] = v3[4];
  v7[2] = v3[5];
  this[323] = v3[7];
  v4 = sub_10184390(72);
  if ( v4 )
    return sub_101A0980(v4, (int)v6, (int)v7, 0);
  else
    return 0;
}
