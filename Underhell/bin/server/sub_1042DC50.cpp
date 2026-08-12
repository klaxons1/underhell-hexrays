void __thiscall sub_1042DC50(int this, char *a2, int a3)
{
  int v4; // ebx
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // ecx

  if ( *(_BYTE *)(this + 20) )
  {
    *a2 = 0;
    return;
  }
  v4 = a3;
  if ( !a3 )
    v4 = 0x7FFFFFFF;
  v5 = sub_1042D930((void *)this);
  v6 = v5;
  if ( !v5 )
  {
    *a2 = 0;
LABEL_7:
    *(_BYTE *)(this + 20) |= 2u;
    return;
  }
  if ( v5 > v4 )
  {
    sub_1042D670((_BYTE *)this, a2, v4 - 1);
    a2[v4 - 1] = 0;
    *(_DWORD *)(this + 12) += v6 - v4 - 1;
    v7 = *(_DWORD *)(this + 12);
    if ( v7 > *(_DWORD *)(this + 28) )
      goto LABEL_7;
    v8 = *(_DWORD *)(this + 32);
    *(_BYTE *)(this + 20) &= ~2u;
    if ( v7 < v8 || v7 >= v8 + *(_DWORD *)(this + 4) )
      (*(void (__thiscall **)(int, int))(this + 36))(this, -1);
  }
  else
  {
    sub_1042D670((_BYTE *)this, a2, v5 - 1);
    a2[v6 - 1] = 0;
  }
}
