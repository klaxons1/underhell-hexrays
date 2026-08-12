BOOL __thiscall sub_103216F0(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ecx
  int v6; // eax
  BOOL result; // eax

  v3 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  result = 0;
  if ( v3 != -1 )
  {
    v4 = &dword_1069E3E4[4 * (v3 & 0xFFF)];
    if ( v4[1] == v3 >> 12 )
    {
      v5 = *v4;
      if ( v5 )
      {
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 20))(v5);
        if ( v6 )
        {
          *(_DWORD *)(this[1] + 4 * this[3]++) = v6;
          if ( this[3] >= this[2] )
            return 1;
        }
      }
    }
  }
  return result;
}
