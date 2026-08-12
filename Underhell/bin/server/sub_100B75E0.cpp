void __thiscall sub_100B75E0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  char v4; // bl
  unsigned int v5; // eax
  int v6; // esi
  int v7; // eax
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // esi
  int v15; // [esp+4h] [ebp-4h]

  if ( *(_BYTE *)(this + 3693) )
  {
    v2 = *(_DWORD *)(this + 3648);
    if ( v2 == -1
      || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 3648) & 0xFFF) + 1],
          off_1061BE18[4 * (*(_DWORD *)(this + 3648) & 0xFFF) + 2] != v2 >> 12) )
    {
      v15 = 0;
    }
    else
    {
      v15 = *v3;
    }
    v4 = 0;
    sub_101ACB10();
    v5 = *(_DWORD *)(this + 3648);
    if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3648) & 0xFFF) + 2] != v5 >> 12 )
      v6 = 0;
    else
      v6 = off_1061BE18[4 * (*(_DWORD *)(this + 3648) & 0xFFF) + 1];
    if ( sub_101ACC70(v6, 1) )
    {
      while ( !(unsigned __int8)sub_101ACB50(v6) )
      {
        sub_101ACB40(v6);
        if ( *(_BYTE *)(this + 3732) )
          v7 = sub_101ACC90(v6);
        else
          v7 = sub_101ACCC0(v6);
        v6 = sub_101ACC70(v7, 1);
        if ( !sub_101ACC70(v6, 1) )
          goto LABEL_18;
      }
      v4 = 1;
    }
LABEL_18:
    sub_101ACB30();
    if ( v4
      || ((v8 = *(_DWORD *)(this + 3648), v8 == -1)
       || off_1061BE18[4 * (*(_DWORD *)(this + 3648) & 0xFFF) + 2] != v8 >> 12
        ? (v9 = 0)
        : (v9 = off_1061BE18[4 * (*(_DWORD *)(this + 3648) & 0xFFF) + 1]),
          !sub_100B5050((_BYTE *)this, v9)) )
    {
      *(_BYTE *)(this + 3732) = *(_BYTE *)(this + 3732) == 0;
    }
    sub_101ACB10();
    while ( 1 )
    {
      v10 = *(_DWORD *)(this + 3648);
      if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3648) & 0xFFF) + 2] != v10 >> 12 )
        v11 = 0;
      else
        v11 = off_1061BE18[4 * (*(_DWORD *)(this + 3648) & 0xFFF) + 1];
      v12 = *(_BYTE *)(this + 3732) ? sub_101ACC90(v11) : sub_101ACCC0(v11);
      v13 = sub_101ACC70(v12, 1);
      v14 = v13;
      if ( !v13 || v13 == v15 || (unsigned __int8)sub_101ACB50(v13) )
        break;
      sub_101ACB40(v14);
      *(_DWORD *)(this + 3648) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 8))(v14);
    }
    sub_101ACB30();
  }
}
