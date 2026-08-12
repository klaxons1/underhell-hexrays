__int16 __thiscall sub_1005B6A0(int this, int a2, int a3)
{
  __int16 result; // ax
  unsigned __int16 v5; // ax
  int v6; // esi
  _DWORD *v7; // edi
  int v8; // eax

  result = sub_1005AC70((_DWORD *)this, a2, a3);
  if ( result == -1 )
  {
    v5 = *(_WORD *)(this + 124);
    v6 = *(unsigned __int16 *)(*(_DWORD *)(this + 80) + 10 * v5);
    v7 = (_DWORD *)(this + 68);
    if ( (_WORD)v6 == 0xFFFF )
    {
      LOWORD(v6) = sub_1005B440(v7);
    }
    else
    {
      sub_1005ADF0(v7, v5, v6);
      sub_1005A9C0((_DWORD *)(*v7 + 40 * v6));
    }
    sub_1005AF80(v7, *(_WORD *)(a2 + 12), 0xFFFFu, v6);
    v8 = *v7 + 40 * (unsigned __int16)v6;
    *(_WORD *)(v8 + 32) &= 0xFFF8u;
    *(float *)(v8 + 16) = 0.0;
    *(_WORD *)(v8 + 34) = a3;
    *(_DWORD *)(v8 + 12) = -1;
    *(float *)(v8 + 20) = 1.0;
    return v6;
  }
  return result;
}
