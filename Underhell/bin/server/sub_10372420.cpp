void __cdecl sub_10372420(int a1)
{
  int v1; // eax
  int v2; // ecx
  int v3; // esi
  int v4; // eax
  int v5; // eax
  double v6; // st6
  double v7; // st5
  int v8; // [esp+0h] [ebp-Ch]
  int v9; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v9 = sub_1002A680(&dword_10690DF8);
  v1 = sub_1016BFB0(&dword_10690DF8);
  v2 = 0;
  v8 = v1;
  for ( i = 0; v2 < v8; i = v2 )
  {
    v3 = *(_DWORD *)(v9 + 4 * v2);
    if ( v3 )
    {
      if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v3 + 220))(*(_DWORD *)(v9 + 4 * v2)) == 25
        && !*(_BYTE *)(v3 + 224) )
      {
        if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 368))(v3)
          || (v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 368))(v3)) == 0
          || (v5 = *(_DWORD *)(v4 + 92), v5 != dword_106E8514) && v5 != dword_106E8510 )
        {
          if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
            sub_100DAE60(a1);
          if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
            sub_100DAE60(v3);
          v6 = *(float *)(v3 + 584) - *(float *)(a1 + 584);
          v7 = *(float *)(v3 + 580) - *(float *)(a1 + 580);
          if ( v7 * v7 + v6 * v6 < 9437184.0 )
          {
            sub_100285C0((_DWORD *)v3, (_DWORD *)a1, 1);
            sub_1002B660(v3, 3);
            if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
              sub_100DAE60(a1);
            (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v3 + 1876))(v3, a1, a1 + 580, 0);
            sub_10023CB0((char *)v3, 36);
          }
        }
      }
    }
    v2 = i + 1;
  }
}
