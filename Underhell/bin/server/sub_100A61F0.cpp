int __thiscall sub_100A61F0(int this, int a2, char a3)
{
  int result; // eax

  unknown_libname_2(a2);
  result = sub_100B99B0(this);
  if ( result )
  {
    *(float *)(result + 20) = -1.0;
    if ( a3 )
    {
      *(_BYTE *)(this + 48) = 0;
      *(_DWORD *)(result + 32) |= 8u;
      *(_BYTE *)(this + 48) = 1;
      *(float *)(this + 52) = *(float *)result + *(float *)(this + 20);
      *(float *)(this + 56) = *(float *)(this + 24) + *(float *)(result + 4);
      *(float *)(this + 60) = *(float *)(this + 28) + *(float *)(result + 8);
    }
  }
  return result;
}
