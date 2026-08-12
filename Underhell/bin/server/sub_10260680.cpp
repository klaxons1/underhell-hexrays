void __cdecl sub_10260680(void *Src, _BYTE *a2)
{
  _DWORD *v2; // esi
  char v3; // [esp+4h] [ebp-8h] BYREF
  int v4; // [esp+6h] [ebp-6h] BYREF

  sub_1042F670((char *)&v4 + 2, Src);
  if ( HIWORD(v4) == 0xFFFF )
  {
    sub_1042F910((int)&v4, Src);
    v2 = (_DWORD *)sub_101811E0((const char *)Src, -1);
    if ( v2 )
    {
      if ( a2 )
      {
        if ( *a2 )
        {
          v2[115] = *sub_10162BE0(&v3, a2);
          sub_100D8500(v2);
        }
      }
      (*(void (__thiscall **)(_DWORD *))(*v2 + 100))(v2);
      sub_1025FAE0(v2);
    }
    else
    {
      Warning("NULL Ent in UTIL_PrecacheOther\n");
    }
  }
}
