void __thiscall sub_1020FD00(int this, char *String2, int a3, int a4)
{
  int v5; // eax
  unsigned int v6; // esi
  int *v7; // ecx
  _DWORD *v8; // [esp+14h] [ebp+10h]

  v8 = sub_1012BF20(&dword_1069E3E0, 0, String2, 0, a3, a4, 0);
  if ( v8 )
  {
    v5 = *(_DWORD *)(this + 192);
    v6 = v5 & 0xFFFFFFDF;
    if ( v5 != (v5 & 0xFFFFFFDF) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v7 = *(int **)(this + 24);
        if ( v7 )
          sub_100194B0(v7, 192);
      }
      *(_DWORD *)(this + 192) = v6;
    }
    if ( *(_DWORD *)(this + 24) )
      **(_DWORD **)(this + 24) |= 0x80u;
    sub_100D8500((_DWORD *)this);
    sub_100EACE0((unsigned __int16 *)this, (int)v8, 1);
  }
}
