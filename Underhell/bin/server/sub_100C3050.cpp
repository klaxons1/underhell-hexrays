int __thiscall sub_100C3050(int this, float a2)
{
  float v2; // edi
  volatile signed __int32 v4; // ebx
  int v5; // eax
  int v6; // ecx
  int *v7; // ecx
  float v8; // edx
  int *v9; // ecx

  v2 = a2;
  *(_DWORD *)(this + 460) = *(_DWORD *)(*(int (__thiscall **)(float, float *))(*(_DWORD *)LODWORD(a2) + 28))(
                                         COERCE_FLOAT(LODWORD(a2)),
                                         &a2);
  sub_100D8500(this);
  v4 = *(_DWORD *)this;
  v5 = (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v2) + 24))(COERCE_FLOAT(LODWORD(v2)));
  (*(void (__thiscall **)(int, int))(v4 + 32))(this, v5);
  v6 = *(_DWORD *)(this + 904);
  a2 = *(float *)(LODWORD(v2) + 904);
  if ( v6 != LODWORD(a2) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        sub_100194B0(v7, 904);
    }
    *(float *)(this + 904) = a2;
  }
  sub_100EAAB0(this, *(_DWORD *)(LODWORD(v2) + 192) | 8);
  v8 = *(float *)(LODWORD(v2) + 908);
  a2 = v8;
  if ( *(_DWORD *)(this + 908) != LODWORD(v8) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v9 = *(int **)(this + 24);
      if ( v9 )
      {
        sub_100194B0(v9, 908);
        v8 = a2;
      }
    }
    *(float *)(this + 908) = v8;
  }
  *(_DWORD *)(this + 124) = *(_DWORD *)(LODWORD(v2) + 124);
  *(_DWORD *)(this + 852) = *(_DWORD *)(LODWORD(v2) + 852);
  *(_DWORD *)(this + 848) = *(_DWORD *)(LODWORD(v2) + 848);
  return sub_100BD750((volatile signed __int32 *)this);
}
