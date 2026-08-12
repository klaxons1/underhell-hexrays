void __thiscall sub_101F9D00(int this, int a2, char a3, int a4)
{
  int v5; // ecx
  double v6; // st7
  bool v7; // zf
  int v8; // ecx
  int v9; // ebp
  int v10; // ebx
  long double v11; // st7
  float *v12; // edi
  int i; // edi
  int v14; // ecx
  float v15; // [esp+10h] [ebp-18h]
  int v16; // [esp+24h] [ebp-4h]

  v5 = *(_DWORD *)(this + 64);
  if ( v5 )
  {
    v6 = *(float *)(v5 + 540) + *((float *)off_103EE614 + 67);
    if ( v6 < *(float *)(this + 52) )
      v6 = *(float *)(this + 52);
    v7 = *(_DWORD *)(this + 40) == 0;
    *(float *)(this + 52) = v6;
    if ( !v7 )
    {
      if ( !a3
        || ((*(_BYTE *)(v5 + 846) & 1) != 0 ? (v8 = *(_DWORD *)(v5 + 316)) : (v8 = 0),
            (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 68))(v8)) )
      {
        v9 = 0;
        v16 = *(_DWORD *)(*(_DWORD *)(this + 64) + 600);
        if ( v16 > 0 )
        {
          do
          {
            v10 = *(_DWORD *)(this + 64);
            v11 = *(float *)(this + 36);
            v12 = *(float **)(*(_DWORD *)(v10 + 588) + 4 * v9);
            if ( v12[5] > 0.0 )
              v11 = fmod(1.0 / v12[5] * *(float *)(this + 36), 1.0);
            v15 = v11;
            if ( sub_101F7DA0(v12[1], v12[2], v12[3], v12[4], v15) > 0.0 )
              (*(void (__thiscall **)(float *, int, int, int))(*(_DWORD *)v12 + 36))(
                v12,
                a2,
                this,
                *(_DWORD *)(this + 5976) + *(_DWORD *)(*(_DWORD *)(v10 + 728) + 4 * v9));
            ++v9;
          }
          while ( v9 < v16 );
        }
      }
    }
    for ( i = *(_DWORD *)(this + 6008); i; i = *(_DWORD *)(i + 5980) )
      sub_101F9D00(a2, a3, a4);
    v14 = *(_DWORD *)(this + 6680);
    if ( v14 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 32))(v14, this);
  }
}
