int __thiscall sub_10364F50(_DWORD *this)
{
  _DWORD *v2; // ecx
  _DWORD *v3; // esi
  char *v4; // eax
  int v6; // [esp+8h] [ebp-4h] BYREF

  v2 = (_DWORD *)this[699];
  if ( !v2 )
    return 0;
  v3 = (_DWORD *)sub_100B1560(v2, &v6, 1);
  if ( !v3 )
    return 0;
  while ( 1 )
  {
    if ( v3 != this )
    {
      v4 = (char *)sub_10019630(this);
      if ( (char *)v3[23] != v4 && !sub_100D6240(v3, v4) )
        break;
    }
    v3 = (_DWORD *)sub_100B1630((_DWORD *)this[699], &v6, 1);
    if ( !v3 )
      return 0;
  }
  return (*(int (__thiscall **)(_DWORD *))(*v3 + 220))(v3);
}
