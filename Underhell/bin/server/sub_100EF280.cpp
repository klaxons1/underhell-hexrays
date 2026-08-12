void __thiscall sub_100EF280(int this)
{
  int v2; // edx
  double v3; // st7
  int *v4; // ecx
  int *v5; // ecx
  float v6; // [esp+8h] [ebp-14h]
  float v7; // [esp+18h] [ebp-4h]

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  sub_10112C00(2);
  sub_101129A0(*(unsigned __int16 *)(this + 356) | 0x10);
  sub_100E0970(this, v2, 0, 0);
  if ( *(_BYTE *)(this + 225) != 2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 2;
  }
  if ( *(_DWORD *)(this + 220) != 80000 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = 80000;
  }
  v3 = 1.0;
  if ( *(_DWORD *)(this + 864) != COERCE_INT(1.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
      {
        sub_100194B0(v4, 864);
        v3 = 1.0;
      }
    }
    *(float *)(this + 864) = v3;
  }
  *(float *)(this + 800) = 0.0;
  v6 = v3 + *(float *)(dword_106B31C8 + 12);
  sub_100EC4A0((int *)this, v6, 0);
  sub_100C2AB0(this);
  v7 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         0.0,
         1.0);
  if ( *(_DWORD *)(this + 904) != LODWORD(v7) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 904) = v7;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 904);
      *(float *)(this + 904) = v7;
    }
  }
}
