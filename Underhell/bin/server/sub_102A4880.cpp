char __thiscall sub_102A4880(int this)
{
  char result; // al
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  int v10; // ecx
  int v11; // edi
  int v12; // eax
  _BYTE v13[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 212)
    || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4)) )
  {
    return 0;
  }
  v3 = *(_DWORD *)(this + 216);
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 216) & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 216) & 0xFFF) + 2] == v5 )
    {
      if ( *v4 )
      {
        v6 = off_1061BE18[4 * (*(_DWORD *)(this + 216) & 0xFFF) + 2] == v5 ? *v4 : 0;
        if ( sub_103942C0(v6) > 0 )
          return 0;
      }
    }
  }
  v7 = *(_DWORD *)(this + 4);
  if ( *(_BYTE *)(v7 + 2680)
    || *(_DWORD *)(v7 + 2336) == 4
    || sub_102273D0(v7, 1)
    || sub_1004C220((_DWORD **)this, 100005) )
  {
    return 0;
  }
  if ( *(int *)(dword_106B31C8 + 20) > 1 )
    return 1;
  v8 = (_DWORD *)sub_10261B20();
  v9 = v8;
  if ( !v8 )
    return 1;
  v10 = *(_DWORD *)(this + 4);
  v11 = *v8;
  v12 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v10 + 504))(v10, v13);
  result = (*(int (__thiscall **)(_DWORD *, int))(v11 + 872))(v9, v12);
  if ( result )
    return 1;
  return result;
}
