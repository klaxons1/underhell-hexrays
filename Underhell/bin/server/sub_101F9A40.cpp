void __thiscall sub_101F9A40(_DWORD *this)
{
  _DWORD *v1; // esi
  int **i; // eax
  int *v3; // edi
  int v4; // ebx
  _DWORD *v5; // eax
  int *v6; // [esp+4h] [ebp-14h] BYREF
  int v7; // [esp+8h] [ebp-10h]
  _DWORD v8[2]; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD *v9; // [esp+14h] [ebp-4h]

  v1 = this;
  v9 = this;
  if ( this[7] || this[8] != -1 )
  {
    if ( *this )
    {
      v6 = (int *)*this;
      v7 = 0;
    }
    else
    {
      v6 = 0;
      v7 = -1;
    }
    for ( i = &v6; ; i = sub_101F97F0(&v6, (int)v8) )
    {
      v3 = *i;
      v4 = (int)i[1];
      v8[1] = v4;
      v8[0] = v3;
      if ( v3 )
      {
        if ( v4 >= 0 && v4 < v3[1] )
        {
          if ( &v3[78 * v4] == (int *)-8
            || sub_101F9620((unsigned int)&v3[78 * v4 + 2], v9 + 7)
            || (int *)v3[78 * v4 + 78] == &v3[78 * v4 + 2] && (int *)v3[78 * v4 + 79] != &v3[78 * v4 + 2] )
          {
            v1 = v9;
          }
          else
          {
            v5 = v9;
            v3[78 * v4 + 78] = (int)&v3[78 * v4 + 2];
            v3[78 * v4 + 79] = v5[5];
            v5[5] = &v3[78 * v4 + 2];
            v1 = v5;
          }
        }
      }
      else if ( v4 == -1 )
      {
        break;
      }
      if ( v3 == (int *)v1[7] && v4 == v1[8] )
        break;
    }
    v1[3] = 0;
    v1[4] = 0;
    v1[6] = 0;
  }
}
