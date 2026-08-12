int __thiscall sub_102EF420(int this)
{
  int v2; // edi
  int *v3; // ecx
  int result; // eax

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CItem_DynamicResupply::`vftable';
  v2 = *(_DWORD *)(this + 248) | 1;
  if ( *(_DWORD *)(this + 248) != v2 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 248);
    }
    *(_DWORD *)(this + 248) = v2;
  }
  *(float *)(this + 804) = 1.0;
  *(_DWORD *)(this + 800) = 1;
  *(_BYTE *)(this + 852) = 1;
  *(float *)(this + 808) = 0.30000001;
  result = this;
  *(float *)(this + 812) = 0.5;
  *(float *)(this + 816) = 0.5;
  *(float *)(this + 820) = 0.1;
  *(float *)(this + 824) = 0.40000001;
  *(float *)(this + 828) = 0.5;
  *(float *)(this + 832) = 0.0;
  *(float *)(this + 840) = 0.0;
  *(float *)(this + 844) = 0.0;
  *(float *)(this + 848) = 0.0;
  *(float *)(this + 836) = 0.1;
  return result;
}
