void __thiscall sub_1016B9E0(int *this)
{
  int v2; // esi
  int *v3; // edi
  _DWORD *v4; // eax
  int v5; // esi
  int *v6; // edi
  _DWORD *v7; // eax
  int v8; // esi
  int *v9; // edi
  _DWORD *v10; // eax
  int v11; // esi
  int *v12; // edi
  _DWORD *v13; // eax
  char *v14; // [esp-4h] [ebp-10h]
  char *v15; // [esp-4h] [ebp-10h]
  char *v16; // [esp-4h] [ebp-10h]
  char *v17; // [esp-4h] [ebp-10h]

  v2 = 0;
  v3 = this + 39;
  do
  {
    if ( !*v3 )
    {
      v14 = sub_10076640("effects/muzzleflash%d_noz", v2 + 1);
      v4 = sub_100F0920();
      *v3 = sub_100F0950((int)v4, (int)v3, v2, v14);
    }
    ++v2;
    ++v3;
  }
  while ( v2 < 4 );
  v5 = 0;
  v6 = this + 43;
  do
  {
    if ( !*v6 )
    {
      v15 = sub_10076640("effects/muzzleflash%d", v5 + 1);
      v7 = sub_100F0920();
      *v6 = sub_100F0950((int)v7, (int)v6, v5, v15);
    }
    ++v5;
    ++v6;
  }
  while ( v5 < 4 );
  v8 = 0;
  v9 = this + 47;
  do
  {
    if ( !*v9 )
    {
      v16 = sub_10076640("effects/combinemuzzle%d_noz", v8 + 1);
      v10 = sub_100F0920();
      *v9 = sub_100F0950((int)v10, (int)v9, v8, v16);
    }
    ++v8;
    ++v9;
  }
  while ( v8 < 2 );
  v11 = 0;
  v12 = this + 49;
  do
  {
    if ( !*v12 )
    {
      v17 = sub_10076640("effects/combinemuzzle%d", v11 + 1);
      v13 = sub_100F0920();
      *v12 = sub_100F0950((int)v13, (int)v12, v11, v17);
    }
    ++v11;
    ++v12;
  }
  while ( v11 < 2 );
}
