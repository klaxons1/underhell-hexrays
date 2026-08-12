float *__thiscall sub_1016A770(int this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  void (__thiscall *v5)(int); // eax
  _DWORD *v6; // eax
  int v7; // ebx
  float *result; // eax
  int v9; // ebx
  int *v10; // ecx
  float v11; // [esp+0h] [ebp-1Ch]
  double v12; // [esp+14h] [ebp-8h] BYREF

  v11 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v11, 0);
  v2 = *(_DWORD *)(this + 3636);
  *(_DWORD *)(this + 3632) += v2;
  v3 = *(_DWORD *)(this + 3632);
  if ( v3 > *(_DWORD *)(this + 3628) || v3 < *(_DWORD *)(this + 3624) )
    *(_DWORD *)(this + 3636) = -v2;
  v4 = dword_10700AC8;
  v5 = *(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100);
  *((float *)&v12 + 1) = (float)*(int *)(this + 3632);
  v5(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v6 = *(_DWORD **)(this + 1100);
  if ( v6 && *v6 )
    v7 = *(_DWORD *)(this + 1100);
  else
    v7 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
  sub_100BE7D0((_DWORD *)this, v7, 0, *((float *)&v12 + 1));
  result = (float *)Msg("Current Blend: %d\n", *(_DWORD *)(this + 3632));
  if ( *(_BYTE *)(this + 896) && !*(_BYTE *)(this + 897) )
  {
    v9 = dword_106B31C8;
    if ( *(_DWORD *)(this + 124) != *(_DWORD *)(dword_106B31C8 + 12) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v10 = *(int **)(this + 24);
        if ( v10 )
          sub_100194B0(v10, 124);
      }
      *(float *)(this + 124) = *(float *)(v9 + 12);
    }
    v12 = 1.0;
    sub_10045730((float *)(this + 864), &v12);
    *(float *)(this + 804) = 0.0;
    *(_BYTE *)(this + 896) = 0;
    HIDWORD(v12) = 0;
    result = sub_100EE8F0((float *)(this + 904), (int *)&v12 + 1);
    if ( !*(_DWORD *)(this + 3620) )
    {
      v12 = 0.0;
      return sub_10045730((float *)(this + 864), &v12);
    }
  }
  return result;
}
