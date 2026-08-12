void __thiscall sub_1005E520(_DWORD *this)
{
  unsigned int v1; // eax
  int *v2; // ecx
  int v3; // esi

  v1 = *(_DWORD *)(this[1] + 2888);
  if ( v1 != -1 )
  {
    v2 = &off_1061BE18[4 * (*(_DWORD *)(this[1] + 2888) & 0xFFF) + 1];
    if ( v2[1] == v1 >> 12 )
    {
      v3 = *v2;
      if ( *v2 )
      {
        if ( sub_10070090(*v2) )
        {
          if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(sub_10070090(v3) + 92) )
            *(float *)(sub_10070090(v3) + 92) = *(float *)(dword_106B31C8 + 12);
        }
      }
    }
  }
}
