void __thiscall sub_103A4E30(_DWORD *this)
{
  _DWORD *v2; // ecx
  int i; // esi
  int v4; // ebx
  int v5; // eax
  int v6; // [esp+4h] [ebp-4h] BYREF

  v2 = (_DWORD *)this[699];
  if ( v2 )
  {
    for ( i = sub_100B1560(v2, &v6, 1); i; i = sub_100B1630((_DWORD *)this[699], &v6, 1) )
    {
      if ( (_DWORD *)i != this )
      {
        if ( sub_10022C40(this) )
        {
          if ( dword_106EAAA8 > 0 )
          {
            v4 = *(_DWORD *)i;
            v5 = sub_10022C40(this);
            (*(void (__thiscall **)(int, int, int, _DWORD *))(v4 + 896))(i, dword_106EAAA8, v5, this);
          }
        }
        else if ( dword_106EAAAC > 0 )
        {
          (*(void (__thiscall **)(int, int, _DWORD *, _DWORD *))(*(_DWORD *)i + 896))(
            i,
            dword_106EAAAC,
            this + 964,
            this);
        }
      }
    }
  }
}
