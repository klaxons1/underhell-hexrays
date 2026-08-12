char __cdecl sub_1014C050(int a1)
{
  char v1; // bl
  char v2; // al
  char v3; // dl
  _BYTE *v4; // ecx
  int v5; // esi
  char v6; // bl
  char v8; // [esp+Ah] [ebp-2h]
  char v9; // [esp+Bh] [ebp-1h]

  v1 = 0;
  v2 = 0;
  v3 = 0;
  v9 = 0;
  v4 = (_BYTE *)(a1 + 1);
  v5 = 8;
  while ( 1 )
  {
    v2 += *(v4 - 1);
    v3 += v4[2];
    v8 = *v4 + v1;
    v6 = v4[1] + v9;
    v4 += 4;
    --v5;
    v9 = v6;
    if ( !v5 )
      break;
    v1 = v8;
  }
  return v8 + v6 + v3 + v2;
}
