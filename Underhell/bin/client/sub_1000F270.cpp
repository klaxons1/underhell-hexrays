int __thiscall sub_1000F270(_DWORD *this, int a2)
{
  int v3; // ebx
  int i; // edi

  v3 = 0;
  if ( (int)this[52] <= 0 )
    return -1;
  for ( i = 0; sub_10227B20(*(_DWORD *)(this[49] + i + 16), a2, 32); i += 32 )
  {
    if ( ++v3 >= this[52] )
      return -1;
  }
  return v3;
}
