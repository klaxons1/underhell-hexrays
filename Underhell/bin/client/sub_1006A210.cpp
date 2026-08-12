void __thiscall sub_1006A210(int this, float a2)
{
  double v3; // st7
  int v4; // edx
  int v5; // edi
  int v6; // ecx
  bool v7; // c0
  float v8; // ecx
  int v9; // ebx
  double v10; // st7
  double v11; // st6
  float *v12; // ecx
  int v13; // [esp+4h] [ebp-4h]

  v3 = a2;
  if ( a2 >= (double)*(float *)(this + 200) )
  {
    v4 = *(_DWORD *)(this + 192) - 1;
    v13 = v4;
    *(float *)(this + 200) = v3 + 3600.0;
    if ( v4 >= 0 )
    {
      v5 = v4 << 6;
      do
      {
        v6 = *(_DWORD *)(this + 180);
        v7 = v3 < *(float *)(v6 + v5 + 12);
        LODWORD(v8) = v5 + v6;
        if ( !v7 )
        {
          sub_1006A0C0((void *)this, v8);
          v9 = *(_DWORD *)(this + 180);
          v10 = sub_100DA430(v9 + v5 + 16);
          v4 = v13;
          v11 = v10 + a2;
          v3 = a2;
          *(float *)(v9 + v5 + 12) = v11;
        }
        v12 = (float *)(*(_DWORD *)(this + 180) + v5 + 12);
        if ( *(float *)(this + 200) > (double)*v12 )
          *(float *)(this + 200) = *v12;
        --v4;
        v5 -= 64;
        v13 = v4;
      }
      while ( v4 >= 0 );
    }
  }
}
