void __thiscall sub_102283C0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  int v3; // ecx
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int *v8; // ecx
  int i; // edi
  int v10; // eax
  int v11; // esi
  int v12; // eax
  _DWORD *v13; // [esp+8h] [ebp-4h]

  v2 = this;
  v3 = this[244];
  v13 = v2;
  if ( v3 )
  {
    v4 = 0;
    if ( sub_1041CB40(v3) > 0 )
    {
      while ( 1 )
      {
        v5 = (*(int (__thiscall **)(_DWORD *, int))(*v2 + 896))(v2, v4);
        v6 = v5;
        if ( v5 )
        {
          if ( !sub_100D7680(v5) )
          {
            v7 = sub_100BDCE0(v6, 1);
            sub_100C3330(v6, v7);
            if ( *(_DWORD *)(v6 + 904) != COERCE_INT(0.0) )
            {
              if ( *(_BYTE *)(v6 + 84) )
              {
                *(_BYTE *)(v6 + 88) |= 1u;
              }
              else
              {
                v8 = *(int **)(v6 + 24);
                if ( v8 )
                  sub_100194B0(v8, 904);
              }
              *(float *)(v6 + 904) = 0.0;
            }
          }
        }
        if ( ++v4 >= sub_1041CB40(v13[244]) )
          break;
        v2 = v13;
      }
    }
    for ( i = 0; i < sub_1016BFC0(a2); ++i )
    {
      v10 = sub_1041CBF0(i);
      v11 = v10;
      if ( v10 && sub_10418360(v10) == 11 && !(unsigned __int8)sub_1041CAA0(a2) )
      {
        v12 = sub_104185B0(v11);
        if ( v12 )
          sub_102283C0(v12);
      }
    }
  }
}
