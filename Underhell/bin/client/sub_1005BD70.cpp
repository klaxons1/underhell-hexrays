int __thiscall sub_1005BD70(int this, int a2, int *a3)
{
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int result; // eax
  unsigned __int16 v8; // bx
  int v9; // edx
  int v10; // ecx
  double v11; // st7

  if ( !*a3
    || (v4 = (unsigned __int16)(*a3 - 1), (unsigned __int16)v4 >= *(_WORD *)(this + 60))
    || (v5 = *(_DWORD *)(this + 12), v6 = 28 * v4, *(_WORD *)(v5 + 28 * v4 + 24) == (_WORD)v4)
    && *(_WORD *)(v5 + v6 + 26) != (_WORD)v4
    || (result = v5 + v6, *(_WORD *)(result + 14) != HIWORD(*a3)) )
  {
    v8 = sub_1005BCA0(this);
    v9 = 28 * v8;
    v10 = v9 + *(_DWORD *)(this + 12);
    *(float *)v10 = *(float *)(a2 + 12);
    *(float *)(v10 + 4) = *(float *)(a2 + 16);
    if ( *(float *)(a2 + 20) <= 0.0 )
      v11 = 8.0;
    else
      v11 = 1.0 / *(float *)(a2 + 20);
    *(float *)(v10 + 8) = v11;
    *(_DWORD *)(v10 + 20) = 0;
    *(_BYTE *)(v10 + 16) = *(_BYTE *)(a2 + 25);
    *a3 = (unsigned __int16)(v8 + 1) | (*(unsigned __int16 *)(*(_DWORD *)(this + 12) + v9 + 14) << 16);
    return v9 + *(_DWORD *)(this + 12);
  }
  return result;
}
