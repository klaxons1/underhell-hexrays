void __thiscall sub_100372B0(int this, char a2)
{
  int v3; // eax
  unsigned int v4; // esi
  int *v5; // ecx
  _BYTE *i; // esi
  void (__thiscall *v7)(_BYTE *, int); // eax

  if ( *(_DWORD *)(this + 2352) )
  {
    *(_DWORD *)(this + 2368) = *(_DWORD *)(dword_106B31C8 + 24);
    *(_DWORD *)(this + 2352) = 0;
    v3 = *(_DWORD *)(this + 192);
    v4 = v3 & 0xFFFFFFDF;
    if ( v3 != (v3 & 0xFFFFFFDF) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v5 = *(int **)(this + 24);
        if ( v5 )
          sub_100194B0(v5, 192);
      }
      *(_DWORD *)(this + 192) = v4;
    }
    if ( *(_DWORD *)(this + 24) )
      **(_DWORD **)(this + 24) |= 0x80u;
    sub_100D8500(this);
    if ( a2 )
      sub_1010DD80(this, this, 0.0);
    if ( *(_BYTE *)(this + 2364) )
    {
      if ( *(_DWORD *)(this + 2796) )
      {
        for ( i = (_BYTE *)sub_100B1560(&a2, 1); i; i = (_BYTE *)sub_100B1630(&a2, 1) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)i + 264))(i) )
          {
            if ( i != (_BYTE *)this )
            {
              v7 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)i + 1412);
              i[2364] = 0;
              v7(i, 1);
            }
          }
        }
      }
    }
  }
}
