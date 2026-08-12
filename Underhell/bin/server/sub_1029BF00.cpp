int __thiscall sub_1029BF00(int this, int a2)
{
  int result; // eax
  int v4; // ebx
  unsigned int v5; // eax
  int v6; // esi
  int *v7; // ecx
  unsigned int v8; // ecx

  result = sub_1004B690((_DWORD **)this);
  v4 = result;
  if ( result )
  {
    v5 = *(_DWORD *)(a2 + 44);
    if ( v5 == -1
      || (v7 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1],
          off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v5 >> 12) )
    {
      v6 = 0;
    }
    else
    {
      v6 = *v7;
      if ( *v7 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 320))(*v7);
    }
    v8 = *(_DWORD *)(this + 20);
    if ( v8 != -1
      && off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] == v8 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1]
      && !(unsigned __int8)sub_102CB240(v6) )
    {
      sub_1004C1E0((char **)this, 100000);
    }
    return v4;
  }
  return result;
}
