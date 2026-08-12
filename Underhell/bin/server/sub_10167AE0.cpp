int __thiscall sub_10167AE0(_DWORD *this)
{
  int result; // eax
  int v3; // edi
  int v4; // eax
  const char *v5; // eax
  const char *v6; // [esp-Ch] [ebp-1Ch]
  const char *v7; // [esp-8h] [ebp-18h]
  int v8; // [esp-4h] [ebp-14h]
  int v9; // [esp+Ch] [ebp-4h]

  result = Msg("-- Globals --\n");
  v3 = 0;
  v9 = 0;
  if ( (int)this[21] > 0 )
  {
    do
    {
      v4 = this[18];
      v8 = *(_DWORD *)(v4 + v3 + 8);
      v7 = off_10628C7C[*(_DWORD *)(v4 + v3 + 4)];
      v6 = (const char *)sub_1042EE50(*(_WORD *)(v4 + v3 + 2));
      v5 = (const char *)sub_1042EE50(*(_WORD *)(v3 + this[18]));
      Msg("%s: %s (%s) = %d\n", v5, v6, v7, v8);
      result = v9 + 1;
      v3 += 12;
      v9 = result;
    }
    while ( result < this[21] );
  }
  return result;
}
