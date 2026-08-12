int __thiscall sub_100CEF50(_DWORD *this)
{
  int result; // eax
  int v3; // esi
  int v4; // eax
  int v5; // edi
  bool v6; // sf
  int v7; // eax
  int v8; // edx
  int v9; // [esp+4h] [ebp-4h]

  result = this[7];
  if ( result != -1 )
  {
    v3 = (this[2] > 0) - 1;
    if ( (int)this[2] > 0 )
    {
      do
      {
        if ( v3 >= 0 && v3 < this[2] && v3 <= result )
        {
          if ( (dword_10430EBC & 1) == 0 )
          {
            dword_10430EBC |= 1u;
            dword_10430EAC = -1;
            dword_10430EB0 = -1;
            dword_10430EB4 = -1;
            dword_10430EB8 = 1;
          }
          if ( *(_DWORD *)(this[1] + 36 * v3) != v3 )
          {
            v4 = this[1];
            v5 = 36 * v3;
            v6 = *(int *)(v4 + 36 * v3 + 28) < 0;
            v7 = v4 + 36 * v3 + 16;
            v9 = v7;
            if ( !v6 )
            {
              v8 = *(_DWORD *)(v7 + 4);
              if ( v8 )
              {
                (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v8);
                v7 = v9;
                *(_DWORD *)(v9 + 4) = 0;
              }
              *(_DWORD *)(v7 + 8) = 0;
            }
            *(_DWORD *)(this[1] + v5 + 4) = this[6];
            *(_DWORD *)(v5 + this[1]) = v3;
            this[6] = v3;
          }
        }
        result = this[7];
        if ( v3 == result )
          break;
        if ( ++v3 < 0 || v3 >= this[2] )
          v3 = -1;
      }
      while ( v3 != -1 );
    }
    this[4] = -1;
    this[5] = 0;
  }
  return result;
}
