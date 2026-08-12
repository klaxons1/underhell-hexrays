void __thiscall sub_1005E590(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // esi
  int v5; // ecx

  v2 = *(_DWORD *)(this[1] + 2888);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this[1] + 2888) & 0xFFF) + 1];
    if ( v3[1] == v2 >> 12 )
    {
      v4 = *v3;
      if ( *v3 )
      {
        if ( (unsigned __int8)sub_10070BB0(*v3) && (unsigned __int8)sub_10070540(this[1]) )
          sub_10070510(0.0);
        v5 = sub_10070090(v4);
        if ( v5 )
        {
          if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(v5 + 92) )
            *(float *)(v5 + 92) = *(float *)(dword_106B31C8 + 12);
        }
        sub_10044830((_DWORD *)this[1], 0.0);
      }
    }
  }
}
