int __thiscall sub_102805A0(int this, int a2, int a3)
{
  int v4; // ebx
  int *v5; // ecx
  int v6; // eax
  float v8[3]; // [esp+Ch] [ebp-24h] BYREF
  float v9[3]; // [esp+18h] [ebp-18h] BYREF
  _BYTE v10[12]; // [esp+24h] [ebp-Ch] BYREF

  v4 = *(_DWORD *)(this + 1200) + 1;
  if ( *(_BYTE *)(this + 84) )
  {
    *(_BYTE *)(this + 88) |= 1u;
  }
  else
  {
    v5 = *(int **)(this + 24);
    if ( v5 )
      sub_100194B0(v5, 1200);
  }
  *(_DWORD *)(this + 1200) = v4;
  v6 = sub_100BEF30(this, "muzzle");
  sub_100BCCA0((void *)this, v6, (int)v8, (int)v10);
  sub_10422220(v10, v9);
  return sub_10277020((int *)this, a2, v8, v9);
}
