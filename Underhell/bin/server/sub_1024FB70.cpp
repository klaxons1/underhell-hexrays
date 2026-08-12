int __thiscall sub_1024FB70(int this, int a2)
{
  int v3; // ecx
  int v4; // edi
  int v5; // edx
  int v6; // eax
  double v7; // st6
  double v8; // st5
  double v9; // st7
  int v10; // esi
  float v12; // [esp+0h] [ebp-Ch]

  if ( !a2 )
    return 0;
  v3 = *(_DWORD *)(this + 976);
  if ( !v3 )
    return 0;
  v4 = *(_DWORD *)(v3 + 800);
  if ( v4 != a2 )
  {
    v5 = *(_DWORD *)(a2 + 804);
    if ( !v5 || v4 != v5 )
    {
      v6 = *(_DWORD *)(a2 + 800);
      if ( !v6 || v4 != v6 )
        return 0;
    }
  }
  if ( 0.0 != *(float *)(v3 + 108) )
    return 1;
  v7 = *(float *)(this + 720) - *(float *)(v3 + 720);
  v8 = *(float *)(this + 716) - *(float *)(v3 + 716);
  v12 = v8 * v8 + v7 * v7;
  v9 = off_10689708(v12);
  v10 = *(_DWORD *)(this + 976);
  if ( v9 < *(float *)(v10 + 804) )
    return 2;
  return *(float *)(v10 + 804) + 150.0 >= v9;
}
