char __thiscall sub_100D92B0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  char *v7; // eax
  char *v9; // eax
  int v10; // eax
  int v11; // edx
  _DWORD v13[10]; // [esp+4h] [ebp-5Ch] BYREF
  char v14; // [esp+2Ch] [ebp-34h]
  int v15; // [esp+30h] [ebp-30h]
  int v16; // [esp+34h] [ebp-2Ch]
  int v17; // [esp+38h] [ebp-28h]
  int v18; // [esp+3Ch] [ebp-24h]
  char v19; // [esp+40h] [ebp-20h]
  _DWORD v20[5]; // [esp+44h] [ebp-1Ch] BYREF
  int v21; // [esp+58h] [ebp-8h]
  char *v22; // [esp+5Ch] [ebp-4h]
  char *v23; // [esp+70h] [ebp+10h]

  *(float *)&v13[3] = 0.0;
  *(float *)&v13[4] = 0.0;
  *(float *)&v13[5] = 0.0;
  *(float *)&v13[6] = 0.0;
  *(float *)&v13[7] = 0.0;
  *(float *)&v13[8] = 0.0;
  v18 = 0;
  v5 = *(_DWORD *)(a2 + 12);
  v13[0] = &CUserCmd::`vftable';
  memset(v20, 0, sizeof(v20));
  v13[1] = 0;
  v13[2] = 0;
  v13[9] = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v19 = 0;
  v21 = v5;
  if ( a3 == -1 )
  {
    v22 = (char *)v13;
  }
  else
  {
    v7 = (char *)(*(int (__thiscall **)(_DWORD *, int))(*this + 56))(this, a3);
    v22 = v7;
    if ( v7 )
      sub_100D9260(this, v7, a3);
    else
      v22 = (char *)v13;
  }
  v9 = (char *)(*(int (__thiscall **)(_DWORD *, int))(*this + 56))(this, a4);
  v23 = v9;
  if ( v9 )
  {
    v10 = sub_100D63D0(v9);
    v11 = 88 * (a4 % 90);
    if ( v10 != *(_DWORD *)(v11 + this[61] + 84) )
      sub_100B36D0((int)v23, v11 + this[61]);
  }
  else
  {
    v23 = (char *)v13;
  }
  sub_1012A270(a2, v23, v22);
  if ( *(_BYTE *)(a2 + 16) )
  {
    Msg("WARNING! User command buffer overflow(%i %i), last cmd was %i bits long\n", a3, a4, *(_DWORD *)(a2 + 12) - v21);
    v13[0] = &CUserCmd::`vftable';
    sub_1011A810(v20);
    return 0;
  }
  else
  {
    v13[0] = &CUserCmd::`vftable';
    sub_1011A810(v20);
    return 1;
  }
}
