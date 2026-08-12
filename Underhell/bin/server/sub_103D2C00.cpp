void __thiscall sub_103D2C00(int this, int a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // esi
  double v5; // st7
  float *v6; // esi
  int v7; // esi
  int v8; // edx
  double v9; // st7
  float *v10; // edx

  if ( *(_BYTE *)(this + 856) )
  {
    v2 = *(_DWORD *)(this + 832) - 1;
    *(float *)(this + 852) = *(float *)(dword_106B31C8 + 12);
    *(_BYTE *)(this + 856) = 0;
    if ( v2 >= 0 )
    {
      if ( v2 + 1 >= 4 )
      {
        v3 = dword_106B31C8;
        do
        {
          *(float *)(*(_DWORD *)(this + 820) + 4 * v2) = *(float *)(*(_DWORD *)(this + 820) + 4 * v2)
                                                       - *(float *)(v3 + 12);
          *(float *)(*(_DWORD *)(this + 820) + 4 * v2 - 4) = *(float *)(*(_DWORD *)(this + 820) + 4 * v2 - 4)
                                                           - *(float *)(v3 + 12);
          *(float *)(*(_DWORD *)(this + 820) + 4 * v2 - 8) = *(float *)(*(_DWORD *)(this + 820) + 4 * v2 - 8)
                                                           - *(float *)(v3 + 12);
          v4 = *(_DWORD *)(this + 820);
          v5 = *(float *)(v4 + 4 * v2 - 12);
          v6 = (float *)(v4 + 4 * v2 - 12);
          v2 -= 4;
          *v6 = v5 - *(float *)(v3 + 12);
        }
        while ( v2 >= 3 );
      }
      if ( v2 >= 0 )
      {
        v7 = dword_106B31C8;
        do
        {
          v8 = *(_DWORD *)(this + 820);
          v9 = *(float *)(v8 + 4 * v2);
          v10 = (float *)(v8 + 4 * v2--);
          *v10 = v9 - *(float *)(v7 + 12);
        }
        while ( v2 >= 0 );
      }
    }
    sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
  }
}
