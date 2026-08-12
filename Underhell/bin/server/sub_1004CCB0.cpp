int __thiscall sub_1004CCB0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v6; // eax
  int v7; // ecx
  _BYTE *v8; // esi
  int (__thiscall *v9)(_BYTE *); // edx
  int result; // eax

  *(_BYTE *)(this + 37) = 0;
  v2 = *(_DWORD *)(this + 24);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 24) & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        if ( v3[1] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        if ( !sub_1004C0D0(v5) )
          *(_BYTE *)(this + 36) = 0;
        if ( !*(_DWORD *)(dword_10698344 + 48)
          || ((v6 = *(_DWORD *)(this + 24), v6 == -1)
           || off_1061BE18[4 * (*(_DWORD *)(this + 24) & 0xFFF) + 2] != v6 >> 12
            ? (v7 = 0)
            : (v7 = off_1061BE18[4 * (*(_DWORD *)(this + 24) & 0xFFF) + 1]),
              !sub_1004C0D0(v7)
           || !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 264))(*(_DWORD *)(this + 4))) )
        {
          sub_1004CBB0((void **)this);
        }
      }
    }
  }
  v8 = *(_BYTE **)(this + 4);
  v9 = *(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 2168);
  v8[3547] = 0;
  result = v9(v8);
  if ( (_BYTE)result )
    return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 2176))(v8);
  return result;
}
