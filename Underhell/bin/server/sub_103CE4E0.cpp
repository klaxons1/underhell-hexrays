void __thiscall sub_103CE4E0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // edx
  int v6; // ecx
  unsigned int v7; // eax
  float *v8; // eax
  double v9; // st7
  double v10; // st4
  double v11; // st5
  float v12; // [esp+0h] [ebp-8h]

  sub_1032F450(this);
  sub_10023E60((_DWORD *)this, (int)asc_1067DCBC, 3);
  v2 = *(_DWORD *)(this + 3836);
  if ( v2 != -1
    && (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 3836) & 0xFFF) + 1],
        v4 = v2 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(this + 3836) & 0xFFF) + 2] == v4)
    && *v3
    && (off_1061BE18[4 * (*(_DWORD *)(this + 3836) & 0xFFF) + 2] != v4 ? (v5 = 0) : (v5 = *v3),
        *(_DWORD *)(v5 + 800)
     && (off_1061BE18[4 * (*(_DWORD *)(this + 3836) & 0xFFF) + 2] != v4 ? (v6 = 0) : (v6 = *v3),
         *(_DWORD *)(v6 + 800) != 2)) )
  {
    sub_10023CB0((char *)this, 76);
  }
  else
  {
    sub_10023E00((char *)this, 76);
    v7 = *(_DWORD *)(this + 3836);
    if ( v7 != -1
      && off_1061BE18[4 * (*(_DWORD *)(this + 3836) & 0xFFF) + 2] == v7 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 3836) & 0xFFF) + 1] )
    {
      sub_10023CB0((char *)this, 77);
      *(_DWORD *)(this + 3836) = -1;
    }
  }
  if ( sub_10024070((_DWORD *)this, 78) )
  {
    if ( sub_1007E040(*(_DWORD **)(this + 2588)) )
    {
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this)
        || (v8 = (float *)sub_100217F0((void *)this),
            v9 = *(float *)(this + 3864) - *v8,
            v10 = *(float *)(this + 3868) - v8[1],
            v11 = *(float *)(this + 3872) - v8[2],
            v12 = v11 * v11 + v10 * v10 + v9 * v9,
            off_10689708(v12) > 60.0) )
      {
        sub_10023CB0((char *)this, 78);
      }
    }
  }
}
