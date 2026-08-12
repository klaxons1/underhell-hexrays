char __fastcall sub_1044A770(int a1, int a2, int *a3)
{
  int v4; // eax
  int *v5; // esi
  int v6; // ecx
  int *v7; // edi
  int v8; // ebx
  int i; // esi
  int v11; // [esp-Ch] [ebp-18h]
  int v12; // [esp+4h] [ebp-8h] BYREF
  int v13; // [esp+8h] [ebp-4h]

  LOBYTE(v4) = *(_BYTE *)(a1 + 47);
  if ( (v4 & 2) == 0 )
  {
    v5 = a3;
    *(_BYTE *)(a1 + 47) = v4 | 2;
    v11 = a3[3];
    v12 = a1;
    sub_1041DA00(a3, v11, &v12);
    v4 = 0;
    v13 = *(_DWORD *)(a1 + 12);
    v12 = 0;
    if ( v13 > 0 )
    {
      while ( 1 )
      {
        v6 = *(_DWORD *)(*(_DWORD *)a1 + 4 * v4);
        if ( *(_DWORD *)v6 == 1 )
        {
          if ( **(_DWORD **)(v6 + 8) )
            sub_1044A770(v5);
        }
        else if ( *(_DWORD *)v6 == 15 )
        {
          v7 = sub_10427BE0((_DWORD *)v6);
          v8 = v7[3];
          for ( i = 0; i < v8; ++i )
          {
            if ( *(_DWORD *)(*v7 + 4 * i) )
              sub_1044A770(a3);
          }
        }
        v4 = ++v12;
        if ( v12 >= v13 )
          break;
        v5 = a3;
      }
    }
  }
  return v4;
}
