int __thiscall sub_1007E780(int *this, unsigned __int16 a2)
{
  int result; // eax
  int v3; // esi
  int v4; // edx
  int v5; // eax
  bool v6; // zf
  int v7; // edi
  int v8; // eax
  int *v9; // esi
  int v10; // ecx
  int v11; // eax

  result = a2;
  if ( a2 < this[9] && a2 <= (unsigned int)this[15] )
  {
    v3 = this[8];
    v4 = 36 * a2;
    if ( *(unsigned __int16 *)(v3 + v4 + 32) != a2 || *(unsigned __int16 *)(v3 + v4 + 34) == a2 )
    {
      v5 = this[8];
      v6 = (*(_BYTE *)(v4 + v5 + 24) & 0x10) == 0;
      result = v4 + v5 + 24;
      if ( v6 )
      {
        *(_BYTE *)result |= 0x10u;
        v7 = this[89];
        v8 = this[87];
        v9 = this + 86;
        if ( v7 + 1 > v8 )
          sub_1007D060(v9, v7 - v8 + 1);
        ++v9[3];
        v10 = *v9;
        v11 = v9[3] - v7 - 1;
        v9[4] = *v9;
        if ( v11 > 0 )
          memcpy((void *)(v10 + 2 * v7 + 2), (const void *)(v10 + 2 * v7), 2 * v11);
        result = *v9 + 2 * v7;
        if ( result )
          *(_WORD *)result = a2;
      }
    }
  }
  return result;
}
