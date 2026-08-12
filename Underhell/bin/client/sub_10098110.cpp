int __stdcall sub_10098110(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, unsigned int *a5)
{
  int v5; // esi
  int v6; // edi
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // ecx
  int v12; // ecx
  int result; // eax
  _BYTE v14[26]; // [esp+Ch] [ebp-4Ch] BYREF
  unsigned __int16 v15; // [esp+26h] [ebp-32h]
  char v16; // [esp+30h] [ebp-28h]
  char v17; // [esp+31h] [ebp-27h]
  char v18; // [esp+32h] [ebp-26h]
  char v19; // [esp+33h] [ebp-25h]
  char v20; // [esp+34h] [ebp-24h]
  char v21; // [esp+38h] [ebp-20h]
  int v22; // [esp+40h] [ebp-18h]
  int i; // [esp+44h] [ebp-14h]
  int v24; // [esp+48h] [ebp-10h]
  int v25; // [esp+4Ch] [ebp-Ch]
  int v26; // [esp+50h] [ebp-8h]
  int v27; // [esp+54h] [ebp-4h]

  v5 = 0;
  v22 = a1[3];
  v25 = 0;
  v6 = 0;
  v24 = -1;
  v7 = 0;
  v27 = 0;
  v26 = 0;
  for ( i = sub_10097990(a1) - 1; i >= 0; --i )
  {
    sub_1022E7D0(v14, 0x34u);
    if ( v24 != v15 )
    {
      v6 += -v6 & 3;
      if ( v26 <= v5 )
        v26 = v5;
      if ( v27 <= v7 )
        v27 = v7;
      v7 = 0;
      v5 = 0;
      v24 = v15;
    }
    if ( !*(_DWORD *)(dword_1042CE24 + 48) || v21 != 1 || v16 || v20 != 2 || v18 || v19 || v17 )
    {
      v9 = *(_DWORD *)(dword_1042CDDC + 48);
      v25 += v9;
      v7 += v9;
    }
    else
    {
      v8 = *(_DWORD *)(dword_1042CDDC + 48);
      v6 += v8;
      v5 += v8;
    }
  }
  v10 = (-v6 & 3) + v6;
  if ( v26 <= v5 )
    v26 = v5;
  if ( v27 <= v7 )
    v27 = v7;
  sub_1022E490(0, v22);
  v11 = v25;
  *a3 = v10;
  *a2 = v11;
  v12 = v26;
  result = v27;
  *a4 = v27;
  *a5 = (v12 + 3) & 0xFFFFFFFC;
  return result;
}
