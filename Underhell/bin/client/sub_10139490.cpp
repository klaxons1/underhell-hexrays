_DWORD *__thiscall sub_10139490(_DWORD *this, char a2)
{
  _DWORD *v3; // esi
  int v4; // eax
  _DWORD *v5; // eax

  v3 = (_DWORD *)this[2];
  if ( v3 )
  {
    v4 = v3[11];
    --this[3];
    this[2] = v4;
    goto LABEL_6;
  }
  v5 = (_DWORD *)sub_100DDA40(888);
  if ( v5 )
  {
    v3 = sub_101393C0(v5);
    if ( v3 )
      goto LABEL_6;
  }
  else
  {
    v3 = 0;
  }
  DevMsg("ERROR: failed to alloc Beam_t!\n");
LABEL_6:
  v3[11] = this[1];
  this[1] = v3;
  if ( a2 )
    (*(void (__thiscall **)(void *, _DWORD *, int))(*(_DWORD *)off_103DCDDC + 16))(off_103DCDDC, v3 + 1, 8);
  else
    *((_WORD *)v3 + 4) = -1;
  return v3;
}
