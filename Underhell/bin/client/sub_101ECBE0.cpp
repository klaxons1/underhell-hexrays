unsigned __int16 __thiscall sub_101ECBE0(int this, int a2)
{
  _DWORD *v2; // ebx
  unsigned __int16 v4; // di
  int v5; // edx
  int v7; // [esp+Ch] [ebp-4h] BYREF

  v2 = (_DWORD *)a2;
  sub_101EAEB0((_WORD *)this, a2, (unsigned __int16 *)&v7, &a2);
  v4 = sub_101EAFC0(this);
  sub_101EC900(this, v4, v7, a2);
  v5 = *(_DWORD *)(this + 4);
  ++*(_WORD *)(this + 18);
  if ( v5 + 12 * v4 != -8 )
    *(_DWORD *)(v5 + 12 * v4 + 8) = *v2;
  return v4;
}
