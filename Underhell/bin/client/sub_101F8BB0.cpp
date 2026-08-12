void __thiscall sub_101F8BB0(_DWORD *this)
{
  _DWORD *v1; // edi
  int v2; // esi
  int v3; // eax
  int *v4; // ebp
  int *v5; // ecx
  int v6; // ebx
  int v7; // edx
  int *v8; // ecx
  int v9; // edi

  v1 = this;
  v2 = this[1666];
  if ( v2 )
  {
    v3 = this[10];
    v4 = (int *)this[1667];
    v5 = &v4[v2 - 1];
    while ( *v5 >= v3 )
    {
      --v2;
      --v5;
      if ( !v2 )
        goto LABEL_15;
    }
    while ( 1 )
    {
      v6 = *v4++;
      if ( --v2 )
      {
        v7 = v3 - 1;
        v8 = &v4[v2 - 1];
        do
        {
          if ( *v8 != v7 )
            break;
          --v2;
          --v8;
          --v3;
          --v7;
        }
        while ( v2 );
      }
      v9 = v3 - 1;
      if ( v6 == v3 - 1 )
        break;
      sub_101F89F0(this, v3 - 1, v6);
      v3 = v9;
      if ( !v2 )
        goto LABEL_14;
    }
    --v3;
LABEL_14:
    v1 = this;
LABEL_15:
    v1[10] = v3;
    v1[8] = (v3 + 3) / 4;
    v1[1666] = 0;
  }
}
