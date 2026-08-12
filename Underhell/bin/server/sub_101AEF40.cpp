void __thiscall sub_101AEF40(int this)
{
  unsigned int v2; // eax
  char *v3; // eax
  _DWORD *v4; // eax

  sub_100E38F0((float *)this);
  if ( *(_DWORD *)(this + 800) )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 800) + 28))(*(_DWORD *)(this + 800));
  if ( !*(_BYTE *)(this + 820) )
  {
    v2 = *(_DWORD *)(this + 816);
    if ( v2 == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 816) & 0xFFF) + 2] != v2 >> 12
      || !off_1061BE18[4 * (*(_DWORD *)(this + 816) & 0xFFF) + 1] )
    {
      v3 = *(char **)(this + 804);
      if ( !v3 )
        v3 = (char *)String;
      v4 = sub_1012BF20(&dword_1069E3E0, 0, v3, 0, 0, 0, 0);
      if ( v4 )
        *(_DWORD *)(this + 816) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v4 + 8))(v4);
      else
        *(_DWORD *)(this + 816) = -1;
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 724))(this);
    if ( (*(_BYTE *)(this + 248) & 1) != 0 )
      sub_101AECF0(this);
  }
}
