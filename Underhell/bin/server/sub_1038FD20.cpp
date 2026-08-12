void __thiscall sub_1038FD20(_DWORD *this)
{
  _DWORD *v1; // ecx
  int i; // esi
  unsigned int v3; // edi
  int *v4; // ecx
  int v6; // [esp+4h] [ebp-4h] BYREF

  v1 = (_DWORD *)this[699];
  if ( v1 )
  {
    for ( i = sub_100B1560(v1, &v6, 1); i; i = sub_100B1630((_DWORD *)this[699], &v6, 1) )
    {
      v3 = *(_DWORD *)(i + 248) & 0xFFDFFFFF;
      if ( *(_DWORD *)(i + 248) != v3 )
      {
        if ( *(_BYTE *)(i + 84) )
        {
          *(_BYTE *)(i + 88) |= 1u;
        }
        else
        {
          v4 = *(int **)(i + 24);
          if ( v4 )
            sub_100194B0(v4, 248);
        }
        *(_DWORD *)(i + 248) = v3;
      }
      sub_10023CB0((char *)i, 74);
    }
  }
}
