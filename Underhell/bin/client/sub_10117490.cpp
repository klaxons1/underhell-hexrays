int __thiscall sub_10117490(_DWORD *this, char *Destination, size_t Count, int a4)
{
  _DWORD *v4; // ecx
  char *v5; // ebx
  signed int v6; // eax
  int v7; // edx
  signed int v8; // esi

  v4 = (_DWORD *)this[6];
  if ( v4 )
    v5 = (char *)v4[1];
  else
    v5 = 0;
  v6 = a4;
  if ( !a4 )
    v6 = strlen(v5) + 1;
  if ( v4 && v4[3] != v4[2] )
  {
    v7 = v4[2];
    v8 = v4[3] - v7;
    if ( v8 )
    {
      if ( v6 <= v8 )
      {
        v4[1] += v6;
        v4[2] = v6 + v7;
        return sub_102282F0(Destination, v5, Count);
      }
      v4[2] = v4[3];
    }
    Warning("Restore underflow!\n");
  }
  return sub_102282F0(Destination, v5, Count);
}
