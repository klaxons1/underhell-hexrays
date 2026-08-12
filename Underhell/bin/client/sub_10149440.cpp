void __thiscall sub_10149440(_DWORD *this)
{
  int v2; // ebx
  int v3; // eax
  _DWORD *v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  volatile signed __int32 *v8; // ebx

  v2 = this[33] & 0x30;
  if ( v2 == 48 )
    return;
  v3 = this[37];
  v4 = 0;
  if ( *(int *)(v3 + 12) > 0 && v2 )
  {
    v5 = sub_10149330(v3);
  }
  else
  {
    v5 = sub_100DDA40(32);
    if ( !v5 )
      goto LABEL_8;
    *(_DWORD *)(v5 + 4) = 1;
    *(_DWORD *)v5 = &ClientWorldListInfo_t::`vftable';
    *(_DWORD *)(v5 + 8) = 0;
    *(_DWORD *)(v5 + 12) = 0;
    *(_DWORD *)(v5 + 16) = 0;
    *(_DWORD *)(v5 + 20) = 0;
    *(_DWORD *)(v5 + 24) = 0;
    *(_BYTE *)(v5 + 28) = 0;
  }
  v4 = (_DWORD *)v5;
LABEL_8:
  v6 = 0;
  v4[2] = *(_DWORD *)(this[37] + 8);
  v4[3] = 0;
  if ( v2 && *(int *)(this[37] + 12) > 0 )
  {
    do
    {
      v7 = this[37];
      if ( ((v2 & 0x10) != 0) == (*(_WORD *)(*(_DWORD *)(v7 + 20) + 2 * v6) != 0xFFFF) )
      {
        *(_WORD *)(v4[4] + 2 * v4[3]) = *(_WORD *)(*(_DWORD *)(v7 + 16) + 2 * v6);
        *(_WORD *)(v4[5] + 2 * v4[3]) = *(_WORD *)(*(_DWORD *)(this[37] + 20) + 2 * v6);
        *(_WORD *)(v4[6] + 2 * v4[3]++) = v6;
      }
      ++v6;
    }
    while ( v6 < *(_DWORD *)(this[37] + 12) );
  }
  v8 = (volatile signed __int32 *)this[37];
  if ( !_InterlockedDecrement(v8 + 1) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(volatile signed __int32 *))(*v8 + 4))(v8) )
      (**(void (__thiscall ***)(volatile signed __int32 *, int))v8)(v8, 1);
  }
  this[37] = v4;
}
