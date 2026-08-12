int __thiscall sub_10394C50(char *this, int a2)
{
  int result; // eax
  int *v3; // edi
  int v4; // esi
  int v5; // ebx

  result = (*(int (__fastcall **)(char *))(*(_DWORD *)this + 44))(this);
  v3 = (int *)result;
  if ( result )
  {
    do
    {
      result = v3[1];
      if ( result > 0 )
      {
        v4 = 0;
        v5 = v3[1];
        do
        {
          result = *v3;
          if ( *(_DWORD *)(*v3 + v4) == 11 && (*(_BYTE *)(result + v4 + 18) & 0x10) != 0 )
            result = sub_1010BBE0(&this[*(_DWORD *)(result + v4 + 8)]);
          v4 += 52;
          --v5;
        }
        while ( v5 );
      }
      v3 = (int *)v3[3];
    }
    while ( v3 );
  }
  return result;
}
