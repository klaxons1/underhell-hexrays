int __thiscall sub_101DD9D0(void *this, int a2)
{
  int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // eax
  int v7; // ecx
  int v8; // eax
  float v9; // [esp+0h] [ebp-1Ch]

  if ( (*((_BYTE *)this + 252) & 1) != 0 )
    return 0;
  v4 = sub_10149BD0((int)this, a2);
  v5 = *(_DWORD *)(a2 + 40);
  if ( v5 != -1
    && off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] == v5 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1] )
  {
    v6 = *(_DWORD *)(a2 + 44);
    if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v6 >> 12 )
      v7 = 0;
    else
      v7 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
    sub_1010DD80((_DWORD *)this + 253, __SPAIR64__((unsigned int)this, v7), 0.0);
  }
  if ( *((int *)this + 55) > 0 )
  {
    if ( 0.0 != *((float *)this + 248) )
    {
      v9 = *(float *)(a2 + 8) * *(float *)(a2 + 8)
         + *(float *)(a2 + 4) * *(float *)(a2 + 4)
         + *(float *)(a2 + 12) * *(float *)(a2 + 12);
      if ( off_10689708(v9) >= *((float *)this + 248) )
      {
        if ( *((_DWORD *)this + 106) )
          sub_101DCE10((int)this);
      }
    }
    v8 = *((_DWORD *)this + 247);
    if ( v8 > 0 && *((_DWORD *)this + 55) < v8 )
    {
      sub_101DCE10((int)this);
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 600))(this, a2);
    }
  }
  return v4;
}
