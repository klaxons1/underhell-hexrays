void __fastcall sub_1017DBD0(_DWORD *a1)
{
  int v1; // edi
  int v2; // eax
  int *v3; // esi
  _BYTE *v4; // eax
  _BYTE *v5; // eax
  int v6; // ecx
  _DWORD *v7; // [esp+4h] [ebp-8h]
  int v8; // [esp+8h] [ebp-4h]

  v1 = a1[3] - 1;
  v7 = a1;
  if ( v1 < 0 )
  {
    a1[3] = 0;
  }
  else
  {
    v2 = 20 * v1;
    v8 = 20 * v1;
    while ( 1 )
    {
      v3 = (int *)(v2 + *a1);
      if ( *v3 && *(_BYTE *)*v3 )
      {
        sub_10034930(*v3);
        *v3 = 0;
      }
      v4 = (_BYTE *)v3[1];
      if ( v4 && *v4 )
      {
        sub_10034930(v3[1]);
        v3[1] = 0;
      }
      v5 = (_BYTE *)v3[2];
      if ( v5 && *v5 )
      {
        sub_10034930(v3[2]);
        v3[2] = 0;
      }
      v6 = v3[3];
      if ( v6 )
      {
        sub_1022AF00(v6);
        v3[3] = 0;
      }
      --v1;
      v2 = v8 - 20;
      v8 -= 20;
      if ( v1 < 0 )
        break;
      a1 = v7;
    }
    v7[3] = 0;
  }
}
