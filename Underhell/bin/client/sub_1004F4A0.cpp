int __thiscall sub_1004F4A0(_DWORD *this, int a2)
{
  _DWORD *v2; // ebx
  int result; // eax
  char *v4; // esi
  int v5; // edi
  char *v6; // edx
  _BYTE *v7; // ebx

  v2 = this;
  result = sub_100347D0((int)this, a2);
  if ( !a2 )
  {
    v4 = (char *)(v2 - 2);
    v2[297] = 16;
    v2[298] = 16;
    v5 = 0;
    v6 = (char *)(v2 - 2);
    while ( 1 )
    {
      result = 0;
      v7 = (char *)v2 + v5 + 1300;
      do
      {
        if ( v5 < *((_DWORD *)v4 + 299) )
        {
          if ( result < *((_DWORD *)v4 + 300) && v5 >= 0 && result >= 0 )
            v6[result + 1788] |= 1u;
          if ( v5 < *((_DWORD *)v4 + 299) && result < *((_DWORD *)v4 + 300) && v5 >= 0 && result >= 0 )
            v6[result + 1788] &= ~2u;
        }
        if ( *(v7 - 32) != 1 )
          *(v7 - 32) = 1;
        if ( v5 < *((_DWORD *)v4 + 299) )
        {
          if ( result + 1 < *((_DWORD *)v4 + 300) && v5 >= 0 && result + 1 >= 0 )
            v6[result + 1789] |= 1u;
          if ( v5 < *((_DWORD *)v4 + 299) && result + 1 < *((_DWORD *)v4 + 300) && v5 >= 0 && result + 1 >= 0 )
            v6[result + 1789] &= ~2u;
        }
        if ( *(v7 - 16) != 1 )
          *(v7 - 16) = 1;
        if ( v5 < *((_DWORD *)v4 + 299) )
        {
          if ( result + 2 < *((_DWORD *)v4 + 300) && v5 >= 0 && result + 2 >= 0 )
            v6[result + 1790] |= 1u;
          if ( v5 < *((_DWORD *)v4 + 299) && result + 2 < *((_DWORD *)v4 + 300) && v5 >= 0 && result + 2 >= 0 )
            v6[result + 1790] &= ~2u;
        }
        if ( *v7 != 1 )
          *v7 = 1;
        if ( v5 < *((_DWORD *)v4 + 299) )
        {
          if ( result + 3 < *((_DWORD *)v4 + 300) && v5 >= 0 && result + 3 >= 0 )
            v6[result + 1791] |= 1u;
          if ( v5 < *((_DWORD *)v4 + 299) && result + 3 < *((_DWORD *)v4 + 300) && v5 >= 0 && result + 3 >= 0 )
            v6[result + 1791] &= ~2u;
        }
        if ( v7[16] != 1 )
          v7[16] = 1;
        result += 4;
        v7 += 64;
      }
      while ( result < 16 );
      ++v5;
      v6 += 16;
      if ( v5 >= 16 )
        break;
      v2 = this;
    }
  }
  return result;
}
