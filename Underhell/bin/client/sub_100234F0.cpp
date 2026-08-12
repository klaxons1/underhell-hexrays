int __thiscall sub_100234F0(int *this, int a2, int a3, int a4)
{
  int v5; // esi
  int v6; // ebx
  _DWORD v8[4]; // [esp+8h] [ebp-14h] BYREF
  int *v9; // [esp+18h] [ebp-4h]

  v9 = sub_1001ACB0(&dword_10403328);
  if ( !v9 )
  {
    v9 = (int *)sub_100DDA40(6144);
    if ( ((unsigned __int8)v9 & 7) != 0 )
      __debugbreak();
  }
  v5 = 0;
  memset(v8, 0, sizeof(v8));
  if ( this[1031] > 0 )
  {
    v6 = 0;
    do
    {
      sub_10022A50(this, *(_DWORD *)(a2 + 168) + v6 + a2, v5++, a3, a4, (int)v9, (int)v8);
      v6 += 32;
    }
    while ( v5 < this[1031] );
  }
  return sub_1001AC40(&dword_10403328, v9);
}
