void __thiscall sub_102CD320(int this, char **a2)
{
  int v3; // eax
  unsigned int v4; // eax
  char **v5; // eax
  char *v6; // eax
  _DWORD *v7; // eax
  void *v8; // eax
  int v9; // esi
  unsigned int v10; // ecx
  unsigned int v11; // [esp-4h] [ebp-10h] BYREF

  v3 = *(_DWORD *)(this + 248);
  if ( (v3 & 0x400) != 0 || (v3 & 0x800) != 0 )
  {
    v4 = *(_DWORD *)(this + 920);
    if ( v4 == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 920) & 0xFFF) + 2] != v4 >> 12
      || !off_1061BE18[4 * (*(_DWORD *)(this + 920) & 0xFFF) + 1] )
    {
      v5 = a2 + 2;
      if ( a2[6] != (char *)2 )
      {
        a2 = 0;
        v5 = (char **)&a2;
      }
      v6 = *v5;
      if ( !v6 )
        v6 = (char *)String;
      v7 = sub_1012BF20(&dword_1069E3E0, 0, v6, 0, 0, 0, 0);
      if ( v7 && (v8 = (void *)sub_100D7680((int)v7), (v9 = (int)v8) != 0) && sub_102C9AB0(v8, (int *)&a2) )
      {
        sub_10019680((_DWORD *)(this + 920), v9);
        v11 = v10;
        sub_1029BE60(&v11, this);
        sub_1029C740(a2, v11);
        *(_BYTE *)(this + 1381) = 1;
      }
      else
      {
        sub_102CBED0((_DWORD *)this);
      }
    }
  }
}
