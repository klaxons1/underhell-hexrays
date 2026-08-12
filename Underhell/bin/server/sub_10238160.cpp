void __thiscall sub_10238160(int this)
{
  int v2; // edx
  double v3; // st7
  bool v4; // c0
  bool v5; // c3
  double v6; // st7
  int i; // edi
  float v8; // [esp+24h] [ebp-Ch]
  float v9; // [esp+28h] [ebp-8h]
  float v10; // [esp+2Ch] [ebp-4h]

  v2 = *(_DWORD *)(this + 808);
  if ( !v2 || 0.0 == *(float *)(this + 800) )
  {
LABEL_13:
    v6 = -1.0;
    goto LABEL_14;
  }
  v3 = ((double (__thiscall *)(int, int, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E8 + 48))(
         dword_106B31E8,
         v2,
         *(float *)(this + 800));
  v4 = v3 < 0.00101;
  v5 = v3 == 0.00101;
  v6 = *(float *)(this + 800);
  if ( v4 || v5 )
  {
LABEL_14:
    *(float *)(this + 804) = v6;
    return;
  }
  v9 = *(float *)(this + 800);
  v10 = v9 + v9;
  if ( ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E8 + 48))(
         *(_DWORD *)(this + 808),
         LODWORD(v10)) > 0.00101 )
  {
    while ( v10 <= 100000.0 )
    {
      v9 = v10;
      v10 = v10 + v10;
      if ( ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E8 + 48))(
             *(_DWORD *)(this + 808),
             LODWORD(v10)) <= 0.00101 )
        goto LABEL_7;
    }
    goto LABEL_13;
  }
LABEL_7:
  for ( i = 3; i >= 0; --i )
  {
    v8 = (v10 + v9) * 0.5;
    if ( ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E8 + 48))(
           *(_DWORD *)(this + 808),
           LODWORD(v8)) > 0.00101 )
      v9 = (v10 + v9) * 0.5;
    else
      v10 = (v10 + v9) * 0.5;
  }
  *(float *)(this + 804) = v10;
}
