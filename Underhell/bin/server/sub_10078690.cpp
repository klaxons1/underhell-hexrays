void __thiscall sub_10078690(int this, int a2, float a3, float a4)
{
  double v5; // st7
  double v6; // st6
  float v7; // [esp+4h] [ebp-Ch]
  float v8; // [esp+8h] [ebp-8h]
  float v9; // [esp+18h] [ebp+8h]

  v5 = ((double (__thiscall *)(_DWORD, int))*(_DWORD *)(**(_DWORD **)(this + 4) + 1696))(*(_DWORD *)(this + 4), a2) + a4;
  v6 = a3;
  if ( a3 <= 0.0 )
    goto LABEL_6;
  v8 = v6 * 0.5;
  v7 = -(v6 * 0.5);
  v9 = v5;
  v5 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         LODWORD(v7),
         LODWORD(v8))
     + v9;
  if ( v5 < 0.0 )
  {
    *(float *)(this + 20) = v5 + 360.0;
    return;
  }
  if ( v5 < 360.0 )
LABEL_6:
    *(float *)(this + 20) = v5;
  else
    *(float *)(this + 20) = v5 - 360.0;
}
