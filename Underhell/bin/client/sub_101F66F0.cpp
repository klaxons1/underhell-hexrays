int __thiscall sub_101F66F0(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  bool v8; // zf
  int *v9; // eax
  int v10; // ecx
  int v11; // eax
  int v13; // [esp+38h] [ebp-40h] BYREF
  int v14; // [esp+3Ch] [ebp-3Ch] BYREF
  _DWORD v15[2]; // [esp+40h] [ebp-38h] BYREF
  int v16; // [esp+48h] [ebp-30h] BYREF
  int v17; // [esp+4Ch] [ebp-2Ch] BYREF
  int v18; // [esp+50h] [ebp-28h] BYREF
  int v19; // [esp+54h] [ebp-24h] BYREF
  int v20; // [esp+58h] [ebp-20h] BYREF
  int v21; // [esp+5Ch] [ebp-1Ch] BYREF
  float v22[3]; // [esp+60h] [ebp-18h] BYREF
  float v23[3]; // [esp+6Ch] [ebp-Ch] BYREF

  sub_102361D0(&v14, &v13);
  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA6C + 148))(dword_1047CA6C, &v18, &v19);
  v16 = 0;
  v17 = 0;
  sub_10236170(&v16, &v17);
  if ( v16 + v14 >= v18 )
    v14 = v18 - v16;
  if ( v13 + v17 >= v19 )
    v13 = v19 - v17;
  if ( v16 < 0 )
    v14 += v16;
  if ( v17 < 0 )
    v13 += v17;
  sub_102361D0(&v21, &v20);
  v2 = sub_101F4290();
  (*(void (__thiscall **)(int, _DWORD, _DWORD, int, int))(*(_DWORD *)v2 + 512))(v2, 0, 0, v21, v20);
  if ( *(_DWORD *)(this + 256) )
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 256) + 32))(*(_DWORD *)(this + 256), v14, v13);
  sub_101F6150((char *)this, v14, v13);
  v3 = sub_101F4260();
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 380))(v3);
  v5 = v4;
  if ( v4 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
  if ( *(_BYTE *)(this + 1062) && (*(int (__thiscall **)(int))(*(_DWORD *)this + 144))(this) )
  {
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 144))(this);
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v6 + 224))(v6, v15);
    (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 292))(
      v5,
      v15[0],
      *(_DWORD *)((char *)v15 + 1),
      *(_DWORD *)((char *)v15 + 2),
      *(_DWORD *)((char *)v15 + 3));
  }
  else
  {
    (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 292))(
      v5,
      *(unsigned __int8 *)(this + 1016),
      *(unsigned __int8 *)(this + 1017),
      *(unsigned __int8 *)(this + 1018),
      *(unsigned __int8 *)(this + 1019));
  }
  (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v5 + 48))(v5, 1, 1, 0);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 160))(v5, 0);
  if ( (*(_BYTE *)(this + 1060) & 1) != 0 )
  {
    v7 = sub_101F4270();
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 200))(v7) == 0;
    v9 = (int *)(this + 272);
    if ( !v8 )
      v9 = (int *)(this + 276);
    v22[0] = 100.0;
    v15[0] = -1;
    v22[1] = 100.0;
    v22[2] = 100.0;
    v23[0] = -100.0;
    v10 = *v9;
    v23[1] = -100.0;
    v23[2] = -100.0;
    sub_10234D90(this + 288, &flt_1045924C, v23, v22, -1, v10, 1);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 864))(this);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 160))(v5, 1);
  v11 = sub_101F4290();
  (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 516))(v11);
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5);
}
