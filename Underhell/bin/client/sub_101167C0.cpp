float *__thiscall sub_101167C0(float *this, int a2, int a3, int a4, int a5)
{
  int v6; // eax
  int v7; // ecx

  *(_DWORD *)this = &CBaseRopePhysics::`vftable';
  sub_10120200(this + 8);
  this[6] = 1.0;
  this[5] = 1.0;
  *((_DWORD *)this + 7) = a5;
  *((_DWORD *)this + 2) = a2;
  *((_DWORD *)this + 4) = a4;
  sub_1011FF50(0.02);
  if ( a3 > 0 )
  {
    v6 = a2 + 20;
    v7 = a3;
    do
    {
      *(float *)(v6 - 20) = 0.0;
      v6 += 36;
      --v7;
      *(float *)(v6 - 52) = 0.0;
      *(float *)(v6 - 48) = 0.0;
      *(float *)(v6 - 44) = 0.0;
      *(float *)(v6 - 40) = 0.0;
      *(float *)(v6 - 36) = 0.0;
      *(float *)(v6 - 32) = 0.0;
      *(float *)(v6 - 28) = 0.0;
      *(float *)(v6 - 24) = 0.0;
    }
    while ( v7 );
  }
  sub_10116570((int)this, a3);
  this[1] = 0.0;
  return this;
}
