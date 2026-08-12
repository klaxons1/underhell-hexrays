char *__thiscall sub_10064D50(char *this, int a2)
{
  int v2; // edx
  char *result; // eax
  double v4; // st7
  char *v5; // edx
  int v6; // edi
  int v7; // eax
  int v8; // eax
  double v9; // st6
  char *v10; // ecx
  int v11; // eax

  v2 = 0;
  result = this;
  while ( result[12] )
  {
    ++v2;
    result += 20;
    if ( v2 >= 3 )
    {
      v4 = 3.4028235e38;
      v5 = 0;
      v6 = a2;
      if ( (this[13] & 2) == 0 )
      {
        v7 = *((_DWORD *)this + 2);
        if ( v7 < a2 )
        {
          v6 = *((_DWORD *)this + 2);
          goto LABEL_9;
        }
        if ( v7 == a2 )
        {
          v4 = *((float *)off_103DC81C + 3) - *(float *)this;
LABEL_9:
          v5 = this;
        }
      }
      if ( (this[33] & 2) == 0 )
      {
        v8 = *((_DWORD *)this + 7);
        if ( v8 >= v6 )
        {
          if ( v8 == v6 )
          {
            if ( v5 )
            {
              v9 = *((float *)off_103DC81C + 3) - *((float *)this + 5);
              if ( v9 > v4 )
              {
                v4 = v9;
                v5 = this + 20;
              }
            }
            else
            {
              v5 = this + 20;
              v4 = *((float *)off_103DC81C + 3) - *((float *)this + 5);
            }
          }
        }
        else
        {
          v5 = this + 20;
          v6 = *((_DWORD *)this + 7);
        }
      }
      v10 = this + 40;
      if ( (v10[13] & 2) == 0 )
      {
        v11 = *((_DWORD *)v10 + 2);
        if ( v11 < v6 )
          return v10;
        if ( v11 == v6 )
        {
          if ( v5 )
          {
            if ( *((float *)off_103DC81C + 3) - *(float *)v10 > v4 )
              return v10;
            return v5;
          }
          return v10;
        }
      }
      return v5;
    }
  }
  return result;
}
