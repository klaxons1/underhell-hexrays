int __thiscall sub_10078350(int this, int a2, int a3, int a4, int a5)
{
  int v6; // eax
  int v7; // eax

  if ( fabs(*(float *)(a3 + 8)) >= 0.1 )
  {
    v6 = 34;
    if ( *(float *)(a3 + 8) <= -0.01 )
      v6 = 35;
  }
  else
  {
    v6 = sub_1007DE30(*(_DWORD *)(*(_DWORD *)(this + 4) + 2588));
  }
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1416))(*(_DWORD *)(this + 4), v6);
  v7 = sub_100BDCE0(36);
  *(_DWORD *)(this + 52) = v7;
  if ( v7 == -1 )
  {
    *(float *)(this + 56) = 0.0;
    *(float *)(this + 60) = 0.0;
    *(float *)(this + 64) = 0.0;
  }
  else
  {
    sub_100BE180(v7, this + 56);
  }
  sub_100EA940(1024);
  sub_10112C00(2);
  *(float *)(*(_DWORD *)(this + 4) + 552) = 0.0;
  return sub_101C73D0(0);
}
