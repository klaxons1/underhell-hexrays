__int16 __thiscall sub_10067C30(int this, int a2)
{
  int v2; // ebx
  __int16 v4; // di
  int v5; // edx
  _WORD *v6; // eax
  char *v7; // ecx
  int v9; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  sub_10065AF0((_WORD *)this, a2, &v9, &a2);
  v4 = sub_10065C00(this);
  sub_10066A00(this, v4, v9, a2);
  v5 = *(_DWORD *)(this + 4);
  ++*(_WORD *)(this + 18);
  v6 = (_WORD *)(v5 + 80 * v4 + 8);
  if ( v5 + 80 * v4 != -8 )
  {
    *v6 = -1;
    v7 = (char *)(v5 + 80 * v4 + 10);
    *v6 = *(_WORD *)v2;
    *v7 = 0;
    *(float *)(v5 + 80 * v4 + 76) = *(float *)(v2 + 68);
    if ( v2 == -2 )
    {
      *v7 = 0;
      return v4;
    }
    sub_104299C0(v7, (char *)(v2 + 2), 0x40u);
  }
  return v4;
}
