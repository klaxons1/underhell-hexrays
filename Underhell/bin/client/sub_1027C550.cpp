int __thiscall sub_1027C550(int this)
{
  _DWORD *v2; // ebp
  int v3; // esi
  _DWORD *v4; // edi
  int v5; // ebx
  int v7; // eax
  int (__thiscall ***v8)(void *, int); // edi

  v2 = (_DWORD *)(this + 232);
  v3 = sub_1027C350((int *)(this + 232));
  if ( *(_DWORD *)(this + 292) )
  {
    v4 = (_DWORD *)(this + 268);
    *(_DWORD *)(12 * v3 + *v2) = *(_DWORD *)(*(_DWORD *)(this + 268) + 12 * *(_DWORD *)(this + 280));
    *(_DWORD *)(*(_DWORD *)(12 * v3 + *(_DWORD *)(this + 232)) + 292) = v3;
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(12 * v3 + *(_DWORD *)(this + 232)) + 124))(
      *(_DWORD *)(12 * v3 + *(_DWORD *)(this + 232)),
      1);
    v5 = *(_DWORD *)(this + 280);
    sub_10265FF0(v4, v5);
    *(_DWORD *)(*v4 + 12 * v5 + 8) = v4[5];
    v4[5] = v5;
    return v3;
  }
  else
  {
    v7 = sub_100DDA40(356);
    if ( v7 )
      v8 = (int (__thiscall ***)(void *, int))sub_1027B120(v7, (int (__thiscall ***)(_DWORD))this, v3);
    else
      v8 = 0;
    sub_10236050(v8);
    *(_DWORD *)(12 * v3 + *v2) = v8;
    *(_BYTE *)(*(_DWORD *)(12 * v3 + *v2) + 354) = *(_BYTE *)(this + 356);
    return v3;
  }
}
