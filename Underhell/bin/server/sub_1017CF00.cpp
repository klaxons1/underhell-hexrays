void __thiscall sub_1017CF00(unsigned int this, int a2)
{
  unsigned int *v3; // ecx
  double v4; // st7
  double v5; // st6
  double v6; // st7
  int v7; // eax
  double v8; // st6
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // [esp+14h] [ebp-4h]

  v3 = (unsigned int *)a2;
  if ( *(_DWORD *)(a2 + 24) == 1 )
    v4 = *(float *)(a2 + 8);
  else
    v4 = 0.0;
  if ( v4 <= *(float *)(this + 804) )
  {
    if ( v4 >= *(float *)(this + 800) )
      v5 = v4;
    else
      v5 = *(float *)(this + 800);
  }
  else
  {
    v5 = *(float *)(this + 804);
  }
  if ( v5 == v4 || (*(_BYTE *)(this + 248) & 1) == 0 )
  {
    v6 = v5 - *(float *)(this + 800);
    v7 = *(unsigned __int8 *)(this + 808);
    v8 = *(float *)(this + 804) - *(float *)(this + 800);
    a2 = *(unsigned __int8 *)(this + 812) - v7;
    v9 = *v3;
    LOBYTE(v12) = (int)((double)a2 * v6 / v8 + (double)v7);
    v10 = *(unsigned __int8 *)(this + 809);
    a2 = *(unsigned __int8 *)(this + 813) - v10;
    BYTE1(v12) = (int)((double)a2 * v6 / v8 + (double)v10);
    v11 = *(unsigned __int8 *)(this + 810);
    a2 = *(unsigned __int8 *)(this + 814) - v11;
    BYTE2(v12) = (int)((double)a2 * v6 / v8 + (double)v11);
    HIBYTE(v12) = (int)(v6 * (double)(*(unsigned __int8 *)(this + 815) - *(unsigned __int8 *)(this + 811)) / v8
                      + (double)*(unsigned __int8 *)(this + 811));
    a2 = v12;
    sub_1010C270((float *)(this + 816), 9, (__int16 *)&a2);
    sub_1010DA50(
      (_DWORD *)(this + 816),
      *(_DWORD *)(this + 816),
      *(_DWORD *)(this + 820),
      *(_DWORD *)(this + 824),
      *(_DWORD *)(this + 828),
      *(_DWORD *)(this + 832),
      __SPAIR64__(this, v9),
      0.0);
  }
}
