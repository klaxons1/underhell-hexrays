int __cdecl sub_10072DB0(int a1, int a2, int a3, float a4, int *a5)
{
  int v6; // eax
  int *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // esi
  _DWORD v12[5]; // [esp+10h] [ebp-58h] BYREF
  int v13; // [esp+24h] [ebp-44h]
  int v14; // [esp+28h] [ebp-40h]
  int v15; // [esp+2Ch] [ebp-3Ch]
  int v16; // [esp+30h] [ebp-38h]
  int v17[10]; // [esp+34h] [ebp-34h] BYREF
  int v18[3]; // [esp+5Ch] [ebp-Ch] BYREF

  if ( !a1 )
    return 0;
  sub_10072560(v12);
  v14 = a2;
  v6 = v12[0];
  v15 = 0;
  v12[3] = 0;
  if ( v12[2] >= 0 )
  {
    if ( v12[0] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v12[0]);
      v6 = 0;
      v12[0] = 0;
    }
    v12[1] = 0;
  }
  v13 |= a3;
  v12[4] = v6;
  if ( (a3 & 0x10) != 0 )
    v16 = *(_DWORD *)(a1 + 2808);
  v7 = a5;
  if ( !a5 )
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v7 = (int *)(a1 + 580);
  }
  v8 = *v7;
  v9 = v7[1];
  v10 = v7[2];
  v18[0] = v8;
  v18[1] = v9;
  v18[2] = v10;
  sub_100726F0(v17, (float *)v18, a4);
  if ( (a3 & 4) != 0 )
    v11 = sub_10072880((float *)a1, (float *)v18, v12);
  else
    v11 = sub_10072A50((float *)a1, (float *)v18, v12);
  sub_100725D0(v12);
  return v11;
}
