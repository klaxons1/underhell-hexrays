__int16 __thiscall sub_1008AD20(int this, int a2)
{
  _WORD *v2; // ebx
  unsigned __int16 v4; // ax
  int v5; // edi
  int v6; // edx
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v2 = (_WORD *)a2;
  sub_10086460((_WORD *)this, a2, (unsigned __int16 *)&v8, &a2);
  v4 = sub_10086680(this);
  v5 = v4;
  sub_10088270(this, v4, v8, a2);
  v6 = *(_DWORD *)(this + 4);
  ++*(_WORD *)(this + 18);
  if ( v6 + 10 * v5 != -8 )
    *(_WORD *)(v6 + 10 * v5 + 8) = *v2;
  return v5;
}
