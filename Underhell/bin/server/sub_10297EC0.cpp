int __thiscall sub_10297EC0(int this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // ecx
  const char *v6; // edi
  const char *v7; // eax
  int v9; // edi
  unsigned int v10; // eax
  int *v11; // ecx
  unsigned int v12; // eax
  int v13; // ecx
  int result; // eax
  _BYTE *v15; // ecx

  v9 = sub_1004B430((_DWORD **)this);
  v10 = *(_DWORD *)(this + 60);
  if ( v10 == -1
    || (v11 = &off_1061BE18[4 * (*(_DWORD *)(this + 60) & 0xFFF) + 1],
        v12 = v10 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(this + 60) & 0xFFF) + 2] != v12)
    || !*v11
    || (off_1061BE18[4 * (*(_DWORD *)(this + 60) & 0xFFF) + 2] != v12 ? (v13 = 0) : (v13 = *v11),
        *(_DWORD *)(v13 + 860) != 1) )
  {
    if ( !*(_BYTE *)(this + 17) && v9 != 1 )
    {
      if ( *(_BYTE *)(this + 36) )
        return 100002;
LABEL_22:
      sub_10295B00(this);
      return v9;
    }
  }
  if ( *(_BYTE *)(this + 26) )
    return sub_102966C0(this);
  if ( !*(_BYTE *)(this + 16) || sub_10023D10(*(_DWORD **)(this + 4), 65) || sub_10023D10(*(_DWORD **)(this + 4), 64) )
  {
    v15 = *(_BYTE **)(this + 4);
    if ( (v15[252] & 1) == 0 && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v15 + 264))(v15) )
      return 100002;
    goto LABEL_22;
  }
  if ( !*(_BYTE *)(this + 36) )
  {
    result = sub_102979E0(this, v9);
    if ( result )
      return result;
    goto LABEL_22;
  }
  if ( sub_10296970((_DWORD *)this)
    && (0.0 == *(float *)(this + 44) || *(float *)(this + 44) > (double)*(float *)(dword_106B31C8 + 12)) )
  {
    if ( !sub_10295D00((_DWORD *)this) )
      return 100001;
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
    v2 = sub_1007DB30((_DWORD *)(v1 + 52), 100001);
    if ( !sub_10023D10(*(_DWORD **)(this + 4), v2) )
    {
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
      v4 = sub_1007DB30((_DWORD *)(v3 + 52), 100002);
      if ( !sub_10023D10(*(_DWORD **)(this + 4), v4) )
        return 100001;
    }
  }
  else
  {
    if ( *(_DWORD *)(dword_106DB0DC + 48) == 4 )
    {
      v5 = *(_DWORD **)(this + 4);
      v6 = (const char *)v5[23];
      if ( !v6 )
        v6 = String;
      v7 = sub_100D6390(v5);
      Msg("ACTBUSY: NPC %s (%s) ending actbusy.\n", v6, v7);
    }
    sub_10295E70(this);
  }
  return 100002;
}
