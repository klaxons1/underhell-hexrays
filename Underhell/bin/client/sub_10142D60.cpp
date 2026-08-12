double sub_10142D60()
{
  int v0; // ecx

  v0 = sub_100422D0();
  if ( !v0 )
    return 0.0;
  if ( !*(_DWORD *)(dword_1043C1A4 + 48) || -1.0 == *(float *)(dword_1043C30C + 44) )
    return *(float *)(v0 + 3748);
  return *(float *)(dword_1043C30C + 44);
}
