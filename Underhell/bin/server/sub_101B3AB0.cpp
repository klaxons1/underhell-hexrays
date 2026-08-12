int __thiscall sub_101B3AB0(int this, int a2, unsigned int a3)
{
  int v5; // ebx
  double v6; // st7
  unsigned int v7; // edx
  int *v8; // ecx

  if ( *(float *)(this + 964) == flt_106F1CA8
    && *(float *)(this + 968) == flt_106F1CAC
    && *(float *)(this + 972) == flt_106F1CB0 )
  {
    DevMsg("ERROR: Hinge with bad data!!!\n");
    return 0;
  }
  else
  {
    *(_BYTE *)(this + 1012) = 1;
    *(float *)(this + 996) = 0.0;
    *(float *)(this + 1000) = 0.0;
    v5 = a3;
    *(float *)(this + 992) = 1.0;
    *(float *)(this + 1004) = 1.0;
    *(float *)(this + 1008) = 1.0;
    *(float *)(this + 996) = *(float *)(this + 820) * 0.45454544;
    *(float *)(this + 1000) = 0.45454544 * *(float *)(this + 824);
    *(_BYTE *)(this + 1012) = (*(_DWORD *)(this + 248) & 4) == 0;
    *(float *)(this + 1004) = *(float *)(v5 + 36);
    *(float *)(this + 1008) = *(float *)(v5 + 40);
    *(float *)(this + 992) = 1.0;
    v6 = *(float *)(this + 1016) * 1000.0;
    *(float *)(this + 976) = 0.0;
    *(float *)(this + 980) = 0.0;
    *(float *)(this + 984) = 0.0;
    *(float *)(this + 988) = v6;
    if ( sub_101B1750((_DWORD *)this, v5, (int *)&a3) )
    {
      (*(void (__thiscall **)(_DWORD, unsigned int))(**(_DWORD **)(v5 + 28) + 308))(*(_DWORD *)(v5 + 28), a3);
    }
    else
    {
      v7 = *(_DWORD *)(this + 248) & 0xFFFFFFF7;
      a3 = v7;
      if ( *(_DWORD *)(this + 248) != v7 )
      {
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
        }
        else
        {
          v8 = *(int **)(this + 24);
          if ( v8 )
          {
            sub_100194B0(v8, 248);
            v7 = a3;
          }
        }
        *(_DWORD *)(this + 248) = v7;
      }
    }
    return (*(int (__thiscall **)(int, _DWORD, _DWORD, int, int))(*(_DWORD *)dword_106BAFF4 + 64))(
             dword_106BAFF4,
             *(_DWORD *)(v5 + 24),
             *(_DWORD *)(v5 + 28),
             a2,
             this + 952);
  }
}
