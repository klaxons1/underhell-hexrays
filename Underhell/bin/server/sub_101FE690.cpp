void __thiscall sub_101FE690(unsigned int this)
{
  int i; // ebx
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // edi
  double v6; // st4
  double v7; // st7
  double v8; // st4
  double v9; // st5
  float v10; // [esp+0h] [ebp-10h]

  for ( i = *(_DWORD *)(this + 828) - 1; i >= 0; --i )
  {
    v3 = *(_DWORD *)(*(_DWORD *)(this + 816) + 4 * i);
    if ( v3 != -1 )
    {
      v4 = &off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 816) + 4 * i) & 0xFFF) + 1];
      if ( off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 816) + 4 * i) & 0xFFF) + 2] == v3 >> 12 )
      {
        v5 = *v4;
        if ( *v4 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(*v4) )
          {
            if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
              sub_100DAE60(this);
            if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
              sub_100DAE60(v5);
            v6 = *(float *)(v5 + 580) - *(float *)(this + 580);
            v7 = v6 * v6;
            v8 = *(float *)(v5 + 584) - *(float *)(this + 584);
            v9 = *(float *)(v5 + 588) - *(float *)(this + 588);
            if ( v9 * v9 + v8 * v8 + v7 > *(float *)(this + 812) )
            {
              sub_101EE850(v5);
              if ( *(_DWORD *)(this + 828) - i - 1 > 0 )
                memcpy(
                  (void *)(*(_DWORD *)(this + 816) + 4 * i),
                  (const void *)(*(_DWORD *)(this + 816) + 4 * i + 4),
                  4 * (*(_DWORD *)(this + 828) - i - 1));
              --*(_DWORD *)(this + 828);
              sub_1010DD80((_DWORD *)(this + 836), __SPAIR64__(v5, this), 0.0);
            }
          }
        }
      }
    }
  }
  if ( *(_DWORD *)(this + 828) )
  {
    v10 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0((int *)this, v10, 0);
  }
}
