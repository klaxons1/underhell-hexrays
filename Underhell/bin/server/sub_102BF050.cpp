void __thiscall sub_102BF050(int this)
{
  char *v2; // eax
  float v3; // [esp+8h] [ebp-Ch]

  if ( (*(_BYTE *)(this + 248) & 1) == 0 )
  {
    v3 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           5.0,
           15.0)
       + *(float *)(dword_106B31C8 + 12);
    sub_100EC4A0((int *)this, v3, 0);
  }
  if ( !*(_DWORD *)(this + 816) )
  {
    v2 = *(char **)(this + 808);
    if ( !v2 )
      v2 = (char *)String;
    *(_DWORD *)(this + 816) = sub_100A5B30(v2);
  }
}
