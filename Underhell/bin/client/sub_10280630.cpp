int __thiscall sub_10280630(_DWORD *this)
{
  int v2; // edi
  int v3; // ebx
  _BYTE *v4; // eax
  int v5; // eax
  int v6; // ecx

  v2 = 1;
  if ( (int)this[22] > 1 )
  {
    while ( 1 )
    {
      v3 = 4 * v2;
      if ( !sub_10237C80((_DWORD *)(4 * v2 + this[19])) )
        goto LABEL_6;
      v4 = (_BYTE *)sub_10237C80((_DWORD *)(v3 + this[19]));
      if ( sub_102370C0(v4) )
        break;
LABEL_9:
      if ( ++v2 >= this[22] )
        goto LABEL_10;
    }
    v5 = sub_10237C80((_DWORD *)(v3 + this[19]));
    if ( v5 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 120))(v5, 1);
LABEL_6:
    if ( this[22] - v2 - 1 > 0 )
      memcpy((void *)(v3 + this[19]), (const void *)(v3 + this[19] + 4), 4 * (this[22] - v2 - 1));
    --this[22];
    --v2;
    goto LABEL_9;
  }
LABEL_10:
  v6 = this[27];
  this[18] = v6;
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v6 + 244))(v6, 0, 0);
  return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[27] + 16))(this[27]);
}
