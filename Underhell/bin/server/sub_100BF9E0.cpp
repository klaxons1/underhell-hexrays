double __thiscall sub_100BF9E0(int this, int a2)
{
  int v2; // esi
  _DWORD *v4; // eax
  int v5; // edi
  double result; // st7
  float v7; // [esp+8h] [ebp-1Ch]
  int v8; // [esp+18h] [ebp-Ch] BYREF
  float v9; // [esp+1Ch] [ebp-8h]
  float v10; // [esp+20h] [ebp-4h]

  v2 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v4 = *(_DWORD **)(this + 1100);
  if ( v4 && *v4 )
    v5 = *(_DWORD *)(this + 1100);
  else
    v5 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  result = 0.0;
  if ( v5 )
  {
    sub_10100C30(v5, a2, 0.0, this + 912, (int)&v8);
    v7 = *(float *)&v8 * *(float *)&v8 + v9 * v9 + v10 * v10;
    return off_10689708(v7);
  }
  return result;
}
