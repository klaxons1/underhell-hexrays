int __thiscall sub_100C2660(int this, float a2)
{
  int v2; // edi
  _DWORD *v4; // eax
  int result; // eax
  int v6; // ebx
  int *v7; // ecx
  double (__thiscall *v8)(int, int, int); // edx
  double v9; // st7
  double v10; // st7
  int v11; // edi
  _DWORD *v12; // eax
  int v13; // ebx
  int v14; // [esp+8h] [ebp-14h]
  float v15; // [esp+8h] [ebp-14h]
  int v16; // [esp+18h] [ebp-4h]
  float v17; // [esp+18h] [ebp-4h]

  v2 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v4 = *(_DWORD **)(this + 1100);
  if ( !v4 || (v16 = *(_DWORD *)(this + 1100), !*v4) )
    v16 = 0;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  if ( v16 )
  {
    sub_100C1B60();
    v6 = dword_106B31C8;
    if ( *(_DWORD *)(this + 124) != *(_DWORD *)(dword_106B31C8 + 12) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v7 = *(int **)(this + 24);
        if ( v7 )
          sub_100194B0(v7, 124);
      }
      *(float *)(this + 124) = *(float *)(v6 + 12);
    }
    v8 = *(double (__thiscall **)(int, int, int))(*(_DWORD *)this + 736);
    v14 = *(_DWORD *)(this + 908);
    *(float *)(this + 120) = *(float *)(this + 124) - a2;
    v9 = v8(this, v16, v14);
    if ( v9 <= 0.0 )
      v10 = 10.0;
    else
      v10 = 1.0 / v9;
    v11 = dword_10700AC8;
    v17 = v10 * *(float *)(this + 864);
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
      sub_100BD750((volatile signed __int32 *)this);
    v12 = *(_DWORD **)(this + 1100);
    if ( v12 && *v12 )
      v13 = *(_DWORD *)(this + 1100);
    else
      v13 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 104))(v11);
    v15 = v17 * a2;
    return sub_100C2520(this, v13, v15);
  }
  return result;
}
