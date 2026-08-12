int __thiscall sub_10246420(_DWORD *this, int a2)
{
  char *v3; // eax
  int result; // eax
  int v5; // ebp
  int v6; // ebx
  int v7; // edi

  v3 = (char *)sub_10230460(dword_1047CCCC, *(_WORD *)(a2 + 6));
  result = sub_10236790(this, v3);
  v5 = result;
  if ( result )
  {
    v6 = 0;
    if ( (int)this[61] > 0 )
    {
      v7 = 0;
      do
      {
        result = sub_10237C80((_DWORD *)(v7 + this[58]));
        if ( result == v5 )
        {
          result = this[58];
          if ( *(_WORD *)(result + v7 + 4) != *(_WORD *)(a2 + 4) )
          {
            result = this[61] - v6 - 1;
            if ( result > 0 )
              result = (int)memcpy((void *)(v7 + this[58]), (const void *)(v7 + this[58] + 68), 68 * result);
            --this[61];
            --v6;
            v7 -= 68;
          }
        }
        ++v6;
        v7 += 68;
      }
      while ( v6 < this[61] );
    }
  }
  return result;
}
