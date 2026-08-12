int __thiscall sub_103A75B0(int this, int a2)
{
  bool v3; // zf
  float *v4; // eax
  double v5; // st7
  float v7[3]; // [esp+Ch] [ebp-Ch] BYREF

  sub_101B5140((float *)(this + 3684), a2);
  sub_103A5280(this);
  if ( *(_DWORD *)(this + 2336) != 4 )
    sub_100218B0((_DWORD *)this, 0);
  sub_10044830((_DWORD *)this, 5.0);
  *(float *)(this + 3856) = flt_106F1CA8;
  *(float *)(this + 3860) = flt_106F1CAC;
  *(float *)(this + 3864) = flt_106F1CB0;
  sub_10023CB0((char *)this, 36);
  sub_103A6AF0((_DWORD *)this);
  sub_1025FAC0(*(_DWORD *)(this + 3888));
  v3 = *(_BYTE *)(this + 3968) == 0;
  *(_DWORD *)(this + 3888) = 0;
  if ( v3
    && (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this)
    && (*(_DWORD *)(a2 + 64) & 0x4000000) == 0
    && (v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this),
        v7[0] = *(float *)(this + 716) - v4[179],
        v7[1] = *(float *)(this + 720) - v4[180],
        v5 = *(float *)(this + 724) - v4[181],
        v7[2] = v5,
        v5 > 120.0)
    && (sub_100D7A40(v7), v5 > 360.0) )
  {
    return (*(int (__thiscall **)(int))(*(_DWORD *)this + 2260))(this);
  }
  else
  {
    return (*(int (__thiscall **)(int))(*(_DWORD *)this + 2264))(this);
  }
}
