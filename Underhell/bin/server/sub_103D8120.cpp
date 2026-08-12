int __thiscall sub_103D8120(int this)
{
  double v1; // st7
  float *v3; // esi
  double v4; // st6
  double v5; // st6
  int *v6; // ecx
  void (__noreturn ***v7)(); // eax
  float v9; // [esp+4h] [ebp-14h]
  float v10; // [esp+14h] [ebp-4h]

  v1 = 1.0;
  v3 = (float *)(this + 864);
  if ( *(_BYTE *)(this + 1120) )
  {
    v5 = *v3 + 0.02;
    if ( v5 < 1.0 )
      v1 = v5;
  }
  else
  {
    v1 = 0.0;
    v4 = *v3 - 0.02;
    if ( v4 > 0.0 )
      v1 = v4;
  }
  v10 = v1;
  if ( *(_DWORD *)v3 != LODWORD(v10) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 864);
    }
    *v3 = v10;
  }
  v7 = sub_1023DBA0();
  v9 = *v3 * 100.0;
  return ((int (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD, _DWORD))(*v7)[2])(
           v7,
           *(_DWORD *)(this + 1128),
           1.0,
           LODWORD(v9),
           0.0);
}
