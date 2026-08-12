int __thiscall sub_102FE0B0(int this, int a2, int a3, int a4)
{
  double v5; // st7
  double v6; // st6
  double v7; // st7
  int result; // eax
  float v9; // [esp+4h] [ebp-Ch]
  float v10; // [esp+8h] [ebp-8h]

  if ( *(int *)(this + 3812) < 2 || sub_102FDDD0(this) )
  {
    if ( a2 == 35 )
      return 113;
    else
      return sub_101646F0(this, a2, a3, a4);
  }
  else
  {
    v5 = 0.0;
    v9 = 0.0;
    v6 = 0.0;
    v10 = 0.0;
    while ( v6 == v5 )
    {
      v9 = (float)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -1, 1);
      v7 = (double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -1, 1);
      v10 = v7;
      if ( 0.0 != v9 )
        break;
      v6 = v7;
      v5 = 0.0;
    }
    off_10689714();
    sub_101C73D0((unsigned int *)this, 0);
    result = 89;
    *(float *)(this + 4040) = v9 * 512.0;
    *(float *)(this + 4044) = v10 * 512.0;
    *(float *)(this + 4048) = 512.0 * (float)0.0 + 256.0;
    *(_BYTE *)(this + 4128) = 1;
  }
  return result;
}
