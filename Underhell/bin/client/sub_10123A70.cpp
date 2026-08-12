int __thiscall sub_10123A70(int this, int a2)
{
  double v3; // st7
  int v4; // eax

  sub_1003CD40((_DWORD *)this, a2);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)(this - 8) + 408))(this - 8, -1293.0);
  if ( !a2 )
  {
    v3 = *(float *)(this + 1228);
    v4 = *(_DWORD *)(this + 1220);
    *(float *)(this + 1260) = *(float *)(this + 1228);
    *(_DWORD *)(this + 1272) = v4;
    *(float *)(this + 1256) = v3;
    *(_DWORD *)(this + 1268) = v4;
  }
  return sub_10039310(this - 8);
}
