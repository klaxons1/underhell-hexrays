int __thiscall sub_1027F4E0(int this)
{
  int result; // eax
  int v3; // edi
  void (__thiscall *v4)(int, int, _DWORD); // edx
  double v5; // st7
  int *v6; // ecx
  int *v7; // ecx
  float v8; // [esp+Ch] [ebp-4h]
  float v9; // [esp+Ch] [ebp-4h]

  result = sub_100D1940((_DWORD *)this);
  v3 = result;
  if ( result )
  {
    v4 = *(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 1132);
    *(_BYTE *)(this + 1392) = 0;
    v4(this, 12, 0.0);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 944))(this, 254);
    sub_100D18C0(this);
    v5 = *(float *)(dword_106B31C8 + 12) + 0.0;
    v8 = v5;
    if ( *(_DWORD *)(v3 + 1672) != LODWORD(v8) )
    {
      if ( *(_BYTE *)(v3 + 84) )
      {
        *(_BYTE *)(v3 + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(v3 + 24);
        if ( v6 )
          sub_100194B0(v6, 1672);
      }
      v5 = v8;
      *(float *)(v3 + 1672) = v8;
    }
    sub_100D18C0(this);
    result = dword_106B31C8;
    v9 = v5 + *(float *)(dword_106B31C8 + 12);
    if ( *(_DWORD *)(this + 1132) != LODWORD(v9) )
    {
      result = this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(float *)(this + 1132) = v9;
      }
      else
      {
        v7 = *(int **)(this + 24);
        if ( v7 )
          result = sub_100194B0(v7, 1132);
        *(float *)(this + 1132) = v9;
      }
    }
  }
  return result;
}
