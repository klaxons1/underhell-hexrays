__int16 __thiscall sub_100A3750(int this, int a2)
{
  _DWORD *v2; // ebx
  __int16 v4; // di
  int v5; // edx
  int v7; // [esp+Ch] [ebp-4h] BYREF

  v2 = (_DWORD *)a2;
  sub_1009B1F0((_WORD *)this, a2, &v7, &a2);
  v4 = sub_100A2440(this);
  sub_100A0E80(this, v4, v7, a2);
  v5 = *(_DWORD *)(this + 4);
  ++*(_WORD *)(this + 18);
  if ( v5 + 60 * v4 != -8 )
  {
    *(_DWORD *)(v5 + 60 * v4 + 8) = *v2;
    sub_100A16A0((int *)(v5 + 60 * v4 + 12), (int)(v2 + 1));
  }
  return v4;
}
