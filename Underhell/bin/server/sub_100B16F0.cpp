int __thiscall sub_100B16F0(int *this, char a2)
{
  int v2; // edi
  int *v3; // edx
  _DWORD *v4; // ebx
  int *v5; // ecx
  int v6; // esi
  int v9; // [esp+8h] [ebp-4h]

  v2 = 0;
  v3 = this;
  v9 = 0;
  if ( a2 && this[18] > 0 )
  {
    v4 = this + 2;
    do
    {
      if ( *v4 != -1 )
      {
        v5 = &off_1061BE18[4 * (*v4 & 0xFFF) + 1];
        if ( off_1061BE18[4 * (*v4 & 0xFFF) + 2] == *v4 >> 12 )
        {
          v6 = *v5;
          if ( *v5 )
          {
            if ( (*(_BYTE *)(v6 + 306) || (*(int (__thiscall **)(int))(*(_DWORD *)(v6 + 320) + 44))(v6 + 320))
              && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 1916))(v6) )
            {
              v3 = this;
              goto LABEL_13;
            }
            v3 = this;
          }
        }
      }
      ++v9;
LABEL_13:
      ++v2;
      ++v4;
    }
    while ( v2 < v3[18] );
  }
  return v3[18] - v9;
}
