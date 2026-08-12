void __thiscall sub_103D32D0(int this, int a2)
{
  int v3; // eax
  float *v4; // ecx
  float *v5; // edx
  int v6; // edx
  double v7; // st6
  float *v8; // edx
  int v9; // edx
  int v10; // ecx
  double v11; // st6
  float *v12; // ecx
  float v13; // [esp+0h] [ebp-Ch]

  if ( !*(_BYTE *)(this + 856) )
  {
    v3 = *(_DWORD *)(this + 832) - 1;
    *(float *)(this + 852) = 0.0;
    *(_BYTE *)(this + 856) = 1;
    if ( v3 >= 0 )
    {
      if ( v3 + 1 >= 4 )
      {
        v4 = (float *)(dword_106B31C8 + 12);
        do
        {
          *(float *)(*(_DWORD *)(this + 820) + 4 * v3) = *v4 + *(float *)(*(_DWORD *)(this + 820) + 4 * v3);
          v5 = (float *)(*(_DWORD *)(this + 820) + 4 * v3 - 4);
          *v5 = *v4 + *v5;
          *(float *)(*(_DWORD *)(this + 820) + 4 * v3 - 8) = *(float *)(*(_DWORD *)(this + 820) + 4 * v3 - 8) + *v4;
          v6 = *(_DWORD *)(this + 820);
          v7 = *(float *)(v6 + 4 * v3 - 12);
          v8 = (float *)(v6 + 4 * v3 - 12);
          v3 -= 4;
          *v8 = v7 + *v4;
        }
        while ( v3 >= 3 );
      }
      if ( v3 >= 0 )
      {
        v9 = dword_106B31C8;
        do
        {
          v10 = *(_DWORD *)(this + 820);
          v11 = *(float *)(v10 + 4 * v3);
          v12 = (float *)(v10 + 4 * v3--);
          *v12 = v11 + *(float *)(v9 + 12);
        }
        while ( v3 >= 0 );
      }
    }
    sub_100EC3F0((_DWORD *)this, (int)sub_103D2E20, 0.0, 0);
    v13 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0((int *)this, v13, 0);
  }
}
