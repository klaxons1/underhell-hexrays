int __thiscall sub_102204B0(int *this, const char *a2, int a3, int a4, int a5, int a6)
{
  int v7; // edi
  int v8; // edx
  int v9; // eax
  const char *v10; // edi
  const char *v11; // ecx
  int v12; // esi
  int v13; // eax
  int v14; // ecx
  int v15; // ecx
  void (__thiscall *v17)(int *, int, int, int); // edx
  int v18; // eax
  int v19; // ecx
  char *v20; // eax
  int v21; // eax
  __int16 v22; // cx
  const char **v23; // ecx
  _DWORD *v24; // eax
  int v25; // edi
  int v26; // ecx
  int v27; // edx
  int v28; // [esp+Ch] [ebp-8h] BYREF
  unsigned __int16 v29; // [esp+10h] [ebp-4h] BYREF
  unsigned __int16 v30; // [esp+12h] [ebp-2h]
  int v31; // [esp+1Ch] [ebp+8h]

  (*(void (__thiscall **)(int *))(*this + 52))(this);
  v7 = (unsigned __int16)sub_1021E690((_DWORD *)this[6], a2);
  v8 = (*(__int16 (__thiscall **)(int *))(*this + 52))(this);
  if ( v8 == v7 )
  {
    v17 = *(void (__thiscall **)(int *, int, int, int))(*this + 16);
    dword_106467D0 = v7;
    v17(this, a3, a5, a6);
    v18 = (*(int (__thiscall **)(int *))(*this + 56))(this);
    v28 = 0;
    if ( v18 <= 0 )
      return 1;
    v31 = v18;
    while ( 1 )
    {
      (*(void (__thiscall **)(int *, unsigned __int16 *))(*this + 36))(this, &v29);
      v19 = this[6];
      if ( v30 >= *(int *)(v19 + 16) )
        v20 = "<<illegal>>";
      else
        v20 = *(char **)(*(_DWORD *)(v19 + 20) + 4 * v30);
      v21 = sub_1021D860(v20, a5, a6, &v28);
      if ( v21 )
      {
        v22 = *(_WORD *)(v21 + 18);
        if ( (v22 & 2) != 0 && (!this[8] || (v22 & 1) == 0) )
        {
          v23 = (const char **)(a3 + *(_DWORD *)(v21 + 8));
          if ( *(int *)v21 > 11 )
            sub_1021F7C0(this, &v29, v23, a4, v21);
          else
            sub_1021D630(this, &v29, v23, a4, v21);
          goto LABEL_33;
        }
      }
      v24 = (_DWORD *)this[6];
      v25 = v29;
      if ( !v24 || v24[3] == v24[2] )
        goto LABEL_33;
      v26 = v24[2];
      v27 = v24[3] - v26;
      if ( v27 )
      {
        if ( v29 <= v27 )
        {
          v24[1] += v29;
          v24[2] = v25 + v26;
          goto LABEL_33;
        }
        v24[2] = v24[3];
      }
      Warning("Restore underflow!\n");
LABEL_33:
      if ( !--v31 )
        return 1;
    }
  }
  v9 = this[6];
  if ( dword_106467D0 < 0 || dword_106467D0 >= *(_DWORD *)(v9 + 16) )
    v10 = "<<illegal>>";
  else
    v10 = *(const char **)(*(_DWORD *)(v9 + 20) + 4 * dword_106467D0);
  if ( v8 < 0 || v8 >= *(_DWORD *)(v9 + 16) )
    v11 = "<<illegal>>";
  else
    v11 = *(const char **)(*(_DWORD *)(v9 + 20) + 4 * v8);
  if ( v9 )
    v9 = *(_DWORD *)(v9 + 4);
  Msg("Expected %s found %s ( raw '%s' )! (prev: %s)\n", a2, v11, (const char *)v9, v10);
  Msg("Field type name may have changed or inheritance graph changed, save file is suspect\n");
  v12 = this[6];
  v13 = *(_DWORD *)(v12 + 8);
  v14 = 4;
  if ( v13 < 4 )
    v14 = *(_DWORD *)(v12 + 8);
  v15 = -v14;
  *(_DWORD *)(v12 + 4) += v15;
  *(_DWORD *)(v12 + 8) = v15 + v13;
  return 0;
}
