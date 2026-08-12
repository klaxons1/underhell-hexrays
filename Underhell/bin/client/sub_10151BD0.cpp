void __thiscall sub_10151BD0(int this)
{
  double i; // st7
  float v3; // [esp+4h] [ebp-4h]

  if ( *(_BYTE *)(this + 1204) )
  {
    for ( i = *((float *)off_103DC81C + 4); i >= *(float *)(this + 1216); i = v3 )
    {
      v3 = i - *(float *)(this + 1216);
      *(float *)(this + 1216) = *(float *)(this + 1212);
      sub_101514F0((_DWORD *)this);
    }
    *(float *)(this + 1216) = *(float *)(this + 1216) - i;
  }
}
