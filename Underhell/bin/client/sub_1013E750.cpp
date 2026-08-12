double sub_1013E750()
{
  int v0; // ecx

  if ( *((int *)off_103DC81C + 5) > 1 )
  {
    v0 = sub_100422D0();
    if ( v0 )
    {
      if ( *(float *)(v0 + 3952) > 0.0 )
        return *(float *)(v0 + 3952);
    }
  }
  if ( byte_1043A87A )
    return flt_1043A884;
  return *(float *)(dword_1043A8FC + 44);
}
