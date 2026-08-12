void __thiscall sub_10162420(int this, int a2)
{
  int v3; // ebx
  _DWORD *v4; // eax
  double v5; // st7
  float v6; // [esp+8h] [ebp-Ch]

  sub_1003CD40((_DWORD *)this, a2);
  if ( !a2 )
  {
    v3 = *(_DWORD *)(this + 1416);
    v4 = sub_100F0920();
    (*(void (__thiscall **)(int, _DWORD *, _DWORD))(v3 + 4))(this + 1416, v4, 0);
  }
  *(float *)(this + 1488) = *(float *)(this + 1440) / *(float *)(this + 1424);
  if ( *(float *)(this + 1432) >= (double)*(float *)(this + 1428) )
    v5 = *(float *)(this + 1432);
  else
    v5 = *(float *)(this + 1428);
  v6 = v5;
  sub_100EB4C0(this + 1188, v6);
}
