void __thiscall sub_10093040(int this, int a2, int a3)
{
  int v4; // eax

  sub_10019430((void *)this, a2, a3);
  if ( a2 == 3 )
    sub_10092A80(-1.0, 0);
  v4 = *(_DWORD *)(this + 2324);
  if ( v4 == 1 || v4 == 2 )
    *(float *)(this + 4388) = RandomFloat(5.0, 10.0) + *(float *)(dword_106B31C8 + 12);
  else
    *(float *)(this + 4388) = 0.0;
}
