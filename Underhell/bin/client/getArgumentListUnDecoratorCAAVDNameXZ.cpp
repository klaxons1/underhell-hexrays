DName *__cdecl UnDecorator::getArgumentList(DName *a1)
{
  char *v1; // edi
  unsigned int v2; // eax
  int v3; // eax
  _BYTE v5[8]; // [esp+8h] [ebp-1Ch] BYREF
  int v6[2]; // [esp+10h] [ebp-14h] BYREF
  int v7; // [esp+18h] [ebp-Ch] BYREF
  int v8; // [esp+1Ch] [ebp-8h]
  int v9; // [esp+20h] [ebp-4h]

  *((_BYTE *)a1 + 4) = 0;
  *((_DWORD *)a1 + 1) &= 0xFFFF00FF;
  v9 = 1;
  *(_DWORD *)a1 = 0;
  if ( !*((_BYTE *)a1 + 4) )
  {
    while ( *dword_10482860 != 64 && *dword_10482860 != 90 )
    {
      if ( v9 )
        v9 = 0;
      else
        DName::operator+=(a1, 44);
      v1 = dword_10482860;
      if ( !*dword_10482860 )
      {
        DName::operator+=((int **)a1, 1);
        return a1;
      }
      v2 = *dword_10482860 - 48;
      if ( v2 > 9 )
      {
        v8 &= 0xFFFF0000;
        v7 = 0;
        UnDecorator::getPrimaryDataType(v6, &v7);
        if ( dword_10482860 - v1 > 1 && *(_DWORD *)dword_10482854 != 9 )
          Replicator::operator+=((_DWORD *)dword_10482854, v6);
        DName::operator+=(a1, (int)v6);
        if ( dword_10482860 == v1 )
        {
          *((_DWORD *)a1 + 1) &= 0xFFFF00FF;
          *((_BYTE *)a1 + 4) = 2;
          *(_DWORD *)a1 = 0;
        }
      }
      else
      {
        ++dword_10482860;
        v3 = Replicator::operator[]((_DWORD *)dword_10482854, (int)v5, v2);
        DName::operator+=(a1, v3);
      }
      if ( *((_BYTE *)a1 + 4) )
        return a1;
    }
  }
  return a1;
}
