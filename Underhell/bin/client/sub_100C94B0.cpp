int __thiscall sub_100C94B0(int this)
{
  int v2; // edi
  int v3; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int result; // eax
  int v12; // edi
  int v13; // eax
  int v14; // [esp+Ch] [ebp-18h]
  int v15; // [esp+10h] [ebp-14h]
  int v16; // [esp+14h] [ebp-10h]
  int v17; // [esp+18h] [ebp-Ch] BYREF
  int v18; // [esp+1Ch] [ebp-8h] BYREF
  int i; // [esp+20h] [ebp-4h]

  nullsub_4();
  sub_102361D0(&v17, &v18);
  v2 = 0;
  for ( i = 0; i < *(_DWORD *)(this + 276); ++i )
  {
    v3 = 4 * i;
    if ( v2 <= sub_102374C0(*(_DWORD *)(*(_DWORD *)(this + 264) + 4 * i)) )
      v2 = sub_102374C0(*(_DWORD *)(*(_DWORD *)(this + 264) + v3));
  }
  v14 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, *(_DWORD *)(this + 252));
  v16 = v2 + 2 * *(_DWORD *)(this + 288);
  i = v14 * *(_DWORD *)(this + 276) + 2 * *(_DWORD *)(this + 296);
  v4 = (int)((double)v16 * *(float *)(this + 320));
  v5 = *(_DWORD *)(this + 304);
  if ( v5 >= 0 )
  {
    if ( v5 <= 0 )
      v6 = (v17 - v4) / 2;
    else
      v6 = v17 - v4;
  }
  else
  {
    v6 = 0;
  }
  v7 = *(_DWORD *)(this + 312);
  if ( v7 <= 0 )
  {
    if ( v7 >= 0 )
      v8 = (v18 - i) / 2;
    else
      v8 = v18 - i;
  }
  else
  {
    v8 = 0;
  }
  v9 = v6 <= 0 ? 0 : v6;
  v10 = v8 <= 0 ? 0 : v8;
  v15 = v10;
  if ( v4 >= v17 )
    v4 = v17;
  result = sub_10236200(v9, v10, v4, i);
  v12 = 0;
  if ( *(int *)(this + 276) > 0 )
  {
    i = 0;
    do
    {
      v13 = sub_102374C0(*(_DWORD *)(*(_DWORD *)(this + 264) + 4 * v12));
      result = sub_10236140((int)((double)(v17 - v13) * 0.5), v15 + i + *(_DWORD *)(this + 296));
      i += v14;
      ++v12;
    }
    while ( v12 < *(_DWORD *)(this + 276) );
  }
  return result;
}
