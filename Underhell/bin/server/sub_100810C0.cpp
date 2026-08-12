int __thiscall sub_100810C0(float *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // ecx

  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 40))(this);
  v2 = *((_DWORD *)this + 1);
  this[19] = 0.0;
  this[21] = 0.0;
  this[22] = 0.0;
  this[20] = 0.0;
  *(_DWORD *)(v2 + 2716) &= ~0x20u;
  v3 = **((_DWORD **)this + 9);
  if ( v3 )
  {
    sub_1007EB60(this);
    v4 = *((_DWORD *)this + 9);
    this[12] = *(float *)(v4 + 8);
    *((_DWORD *)this + 13) = sub_100A5FB0(v4);
    v5 = dword_106B31C8;
    do
    {
      v6 = *(_DWORD *)(v3 + 16);
      if ( v6 != -1 )
      {
        v7 = *((_DWORD *)this + 8);
        if ( v6 < 0 || v6 >= *(_DWORD *)(v7 + 4) )
        {
          ++dword_10691DE0;
        }
        else
        {
          v8 = *(_DWORD *)(*(_DWORD *)(v7 + 8) + 4 * v6);
          if ( v8 && *(float *)(v5 + 12) < (double)*(float *)(v8 + 92) )
          {
            *(float *)(v8 + 92) = *(float *)(v5 + 12);
            v5 = dword_106B31C8;
          }
        }
      }
      v3 = *(_DWORD *)(v3 + 40);
    }
    while ( v3 );
  }
  return sub_100A6340(*((_DWORD *)this + 9));
}
