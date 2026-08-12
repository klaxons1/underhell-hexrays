int __thiscall sub_100194B0(int *this, __int16 a2)
{
  int result; // eax
  int v4; // ecx
  unsigned __int16 v5; // dx
  int v6; // edx
  int v7; // ecx

  result = *this;
  if ( (*this & 0x100) == 0 )
  {
    *this = result | 1;
    result = sub_10153460();
    if ( *(_WORD *)(result + 2) == *(_WORD *)dword_106B324C )
    {
      v4 = dword_106B324C + 40 * *(unsigned __int16 *)result + 2;
      v5 = 0;
      if ( *(_WORD *)(dword_106B324C + 40 * *(unsigned __int16 *)result + 40) )
      {
        while ( *(_WORD *)(v4 + 2 * v5) != a2 )
        {
          if ( ++v5 >= *(_WORD *)(dword_106B324C + 40 * *(unsigned __int16 *)result + 40) )
            goto LABEL_6;
        }
      }
      else
      {
LABEL_6:
        v6 = *(unsigned __int16 *)(dword_106B324C + 40 * *(unsigned __int16 *)result + 40);
        if ( v6 == 19 )
        {
          *(_WORD *)(result + 2) = 0;
          *this |= 0x100u;
        }
        else
        {
          result = *(unsigned __int16 *)(dword_106B324C + 40 * *(unsigned __int16 *)result + 40);
          *(_WORD *)(v4 + 2 * v6) = a2;
          ++*(_WORD *)(v4 + 38);
        }
      }
    }
    else
    {
      v7 = *(unsigned __int16 *)(dword_106B324C + 4002);
      if ( v7 == 100 )
      {
        *(_WORD *)(result + 2) = 0;
        *this |= 0x100u;
      }
      else
      {
        *(_WORD *)result = v7;
        ++*(_WORD *)(dword_106B324C + 4002);
        *(_WORD *)(result + 2) = *(_WORD *)dword_106B324C;
        result = dword_106B324C + 40 * *(unsigned __int16 *)result + 2;
        *(_WORD *)result = a2;
        *(_WORD *)(result + 38) = 1;
      }
    }
  }
  return result;
}
