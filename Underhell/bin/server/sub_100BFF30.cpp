double __thiscall sub_100BFF30(int this, int a2, float a3)
{
  int v3; // esi
  _DWORD *v5; // eax
  bool v6; // zf
  double result; // st7
  int v8; // esi
  double v9; // st6
  int *v10; // ecx
  int v11; // [esp+14h] [ebp-8h] BYREF
  int v12; // [esp+18h] [ebp-4h]

  v3 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v5 = *(_DWORD **)(this + 1100);
  if ( !v5 || (v6 = *v5 == 0, v12 = *(_DWORD *)(this + 1100), v6) )
    v12 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  result = a3;
  sub_101000E0(v12, a2, a3, (int)&v11);
  v8 = this + 1008;
  if ( *(_DWORD *)(this + 4 * a2 + 1008) != v11 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      v9 = *(float *)&v11;
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(v8 + 4 * a2) = v9;
    }
    else
    {
      v10 = *(int **)(this + 24);
      if ( v10 )
      {
        sub_100194B0(v10, 4 * a2 + 1008);
        result = a3;
      }
      *(float *)(v8 + 4 * a2) = *(float *)&v11;
    }
  }
  return result;
}
