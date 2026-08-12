__int16 __thiscall sub_100A3670(int this, int a2)
{
  int v2; // ebx
  __int16 v4; // di
  int v5; // edx
  int v7; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  sub_1009B0E0((_WORD *)this, a2, &v7, &a2);
  v4 = sub_100A2310(this);
  sub_100A0E00(this, v4, v7, a2);
  v5 = *(_DWORD *)(this + 4);
  ++*(_WORD *)(this + 18);
  if ( v5 + 56 * v4 != -8 )
  {
    *(_DWORD *)(v5 + 56 * v4 + 8) = *(_DWORD *)v2;
    sub_100A1390((char *)(v5 + 56 * v4 + 12), (const char **)(v2 + 4));
  }
  return v4;
}
