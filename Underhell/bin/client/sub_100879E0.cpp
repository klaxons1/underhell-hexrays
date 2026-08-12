int __fastcall sub_100879E0(int *a1)
{
  int result; // eax
  unsigned __int16 v2; // bx
  int v3; // ecx
  int v4; // esi
  unsigned __int16 v5; // di
  int v6; // esi
  unsigned __int16 v7; // ax
  __int16 v8; // ax
  int *v9; // [esp+0h] [ebp-4h]

  result = 0xFFFF;
  v9 = a1;
  if ( *((_WORD *)a1 + 10) != 0xFFFF )
  {
    v2 = *((_WORD *)a1 + 6);
    if ( v2 != 0xFFFF )
    {
      do
      {
        v3 = *a1;
        v4 = 168 * v2;
        v5 = *(_WORD *)(v4 + v3 + 166);
        v6 = v3 + v4;
        sub_10233380(v6 + 152);
        *(_WORD *)(v6 + 164) = v2;
        if ( v5 == 0xFFFF )
          v7 = *((_WORD *)v9 + 8);
        else
          v7 = v5;
        a1 = v9;
        *(_WORD *)(v6 + 166) = v7;
        v2 = v5;
      }
      while ( v5 != 0xFFFF );
    }
    v8 = *((_WORD *)a1 + 6);
    if ( v8 != -1 )
      *((_WORD *)a1 + 8) = v8;
    result = 0;
    a1[3] = -1;
    *((_WORD *)a1 + 9) = 0;
  }
  return result;
}
