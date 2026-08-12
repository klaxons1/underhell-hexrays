int __thiscall sub_100CAFA0(int this, int a2)
{
  int result; // eax
  int v4; // edi
  const char *v5; // ecx
  const char *v6; // eax
  int v7; // edx
  int v8; // edx
  int v9; // edi
  unsigned int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // edi
  _DWORD *v15; // eax
  _DWORD *v16; // ecx
  int v17; // [esp+8h] [ebp-4h]
  int v18; // [esp+14h] [ebp+8h]

  result = sub_100BDCB0((volatile signed __int32 *)this, a2);
  v4 = result;
  v17 = result;
  if ( result )
  {
    if ( *(_DWORD *)(dword_106B31C8 + 72) == 2 )
    {
      v5 = *(const char **)(this + 92);
      if ( !v5 )
        v5 = String;
      v6 = *(const char **)(this + 260);
      if ( !v6 )
        v6 = String;
      DevMsg(2, "%s (%s) removing class relationships due to level transition\n", v6, v5);
      v7 = *(_DWORD *)(this + 1772) - 1;
      v18 = v7;
      if ( v7 >= 0 )
      {
        v8 = 16 * v7;
        do
        {
          v9 = *(_DWORD *)(this + 1760);
          v10 = *(_DWORD *)(v9 + v8);
          if ( v10 == -1
            || off_1061BE18[4 * (*(_DWORD *)(v9 + v8) & 0xFFF) + 2] != v10 >> 12
            || !off_1061BE18[4 * (*(_DWORD *)(v9 + v8) & 0xFFF) + 1] )
          {
            if ( *(_DWORD *)(v9 + v8 + 4) )
            {
              v11 = *(_DWORD *)(this + 1772);
              if ( v11 > 0 )
              {
                v12 = *(_DWORD *)(this + 1760);
                v13 = 2 * v11;
                v14 = *(_DWORD *)(v9 + 8 * v13 - 16);
                v15 = (_DWORD *)(v12 + 8 * v13 - 16);
                v16 = (_DWORD *)(v8 + v12);
                *v16 = v14;
                v16[1] = v15[1];
                v16[2] = v15[2];
                v16[3] = v15[3];
                --*(_DWORD *)(this + 1772);
              }
            }
          }
          v8 -= 16;
          --v18;
        }
        while ( v18 >= 0 );
        return v17;
      }
    }
    return v4;
  }
  return result;
}
