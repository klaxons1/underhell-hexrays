__int16 __thiscall sub_10073460(int this, int a2)
{
  _DWORD *v2; // ebx
  unsigned __int16 v4; // ax
  int v5; // edi
  int v6; // edx
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v2 = (_DWORD *)a2;
  sub_10070D10((_WORD *)this, a2, (unsigned __int16 *)&v8, &a2);
  v4 = sub_10072940(this);
  v5 = v4;
  sub_100724E0(this, v4, v8, a2);
  v6 = *(_DWORD *)(this + 4);
  ++*(_WORD *)(this + 18);
  if ( 32 * v5 + v6 != -8 )
  {
    *(_DWORD *)(32 * v5 + v6 + 8) = *v2;
    *(_DWORD *)(32 * v5 + v6 + 12) = 0;
    *(_DWORD *)(32 * v5 + v6 + 16) = 0;
    *(_DWORD *)(32 * v5 + v6 + 20) = 0;
    *(_DWORD *)(32 * v5 + v6 + 24) = 0;
    *(_DWORD *)(32 * v5 + v6 + 28) = 0;
    sub_100732A0((const void **)(32 * v5 + v6 + 12), v2[1], v2[4]);
  }
  return v5;
}
