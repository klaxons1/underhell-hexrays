char __thiscall sub_100B2610(void *this, int a2, int a3, int a4, int *a5)
{
  int v5; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  int v10; // [esp+18h] [ebp+10h]
  int v11; // [esp+18h] [ebp+10h]

  v5 = a3;
  if ( *a5 >= a3 && *a5 <= a4 )
    return 1;
  if ( a3 > a4 )
    return 0;
  while ( ((1 << (v5 & 0x1F)) & sub_100B2250((int)this, a2)[1]) != 0 )
  {
    if ( ++v5 > a4 )
      return 0;
  }
  if ( *a5 != -1 )
  {
    v10 = *a5;
    if ( ((1 << (v10 & 0x1F)) & sub_100B2250((int)this, a2)[1]) == 0 )
      DevMsg("ERROR! Vacating an empty slot!\n");
    v11 = *a5;
    v8 = sub_100B2250((int)this, a2);
    v8[1] &= ~(1 << (v11 & 0x1F));
  }
  v9 = sub_100B2250((int)this, a2);
  v9[1] |= 1 << (v5 & 0x1F);
  *a5 = v5;
  return 1;
}
