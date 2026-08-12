void __thiscall sub_10046DC0(int this, char a2)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  double v9; // st7

  v3 = *(_DWORD *)(this + 3788);
  if ( v3 != -1 )
  {
    v4 = (int *)((char *)off_103DCD74 + 16 * (v3 & 0xFFF) + 4);
    v5 = v3 >> 12;
    if ( v4[1] == v5 )
    {
      if ( *v4 )
      {
        if ( v4[1] == v5 )
          v6 = *v4;
        else
          v6 = 0;
        v7 = *(_DWORD *)(this + 3372);
        *(float *)(this + 3800) = *(float *)(this + 3388);
        v8 = v6 + 1192;
        *(float *)(this + 3804) = *(float *)(this + 3392);
        *(_DWORD *)(this + 3796) = v7;
        *(_DWORD *)(this + 3808) = *(_DWORD *)(v8 + 16);
        *(float *)(this + 3812) = *(float *)(v8 + 32);
        *(float *)(this + 3816) = *(float *)(v8 + 36);
        if ( a2 )
          v9 = -1.0;
        else
          v9 = *((float *)off_103DC81C + 3);
        *(float *)(this + 3792) = v9;
        sub_10046400((float *)(this + 3356), v8);
        sub_10046930(this);
      }
    }
  }
}
