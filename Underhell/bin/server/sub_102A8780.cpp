bool __thiscall sub_102A8780(int this)
{
  unsigned int v1; // ecx
  int *v2; // eax
  unsigned int v3; // ecx
  int v4; // eax
  bool result; // al

  result = 0;
  if ( *(_BYTE *)(this + 16) )
  {
    v1 = *(_DWORD *)(this + 40);
    if ( v1 != -1 )
    {
      v2 = &off_1061BE18[4 * (v1 & 0xFFF) + 1];
      v3 = v1 >> 12;
      if ( v2[1] == v3 )
      {
        if ( *v2 )
        {
          v4 = v2[1] == v3 ? *v2 : 0;
          if ( sub_102A9F50(v4) )
            return 1;
        }
      }
    }
  }
  return result;
}
