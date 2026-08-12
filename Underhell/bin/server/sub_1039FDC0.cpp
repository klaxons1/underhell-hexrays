void __thiscall sub_1039FDC0(int this, int a2)
{
  double v3; // st7
  int *v4; // ecx
  float v5; // [esp+4h] [ebp-4h]

  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 3816) )
  {
    if ( *(_DWORD *)(this + 3832) )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF4 + 88))(dword_106BAFF4, *(_DWORD *)(this + 3832));
      *(_DWORD *)(this + 3832) = 0;
    }
    sub_1010C110(dword_10614CA8, this, "JoltVehicle");
    *(_DWORD *)(this + 3812) = -1;
    sub_1039FCC0((_DWORD *)this);
    *(float *)(this + 3740) = 0.0;
    *(float *)(this + 3744) = 0.0;
    *(float *)(this + 3748) = 0.0;
    if ( *(_BYTE *)(this + 3829) )
      v3 = 0.1;
    else
      v3 = *(float *)(dword_106EA74C + 44);
    v5 = v3 + *(float *)(dword_106B31C8 + 12);
    if ( *(_DWORD *)(this + 3804) != LODWORD(v5) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(float *)(this + 3804) = v5;
      }
      else
      {
        v4 = *(int **)(this + 24);
        if ( v4 )
          sub_100194B0(v4, 3804);
        *(float *)(this + 3804) = v5;
      }
    }
  }
}
