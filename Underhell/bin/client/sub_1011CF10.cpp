char __thiscall sub_1011CF10(_DWORD *this, float *a2)
{
  char result; // al
  int v5; // esi
  _DWORD *v6; // esi
  int v7; // esi
  int *v8; // esi
  int v9; // eax
  float v10; // ecx
  float v11; // edx
  int v12; // esi
  int v13; // esi
  float v14; // [esp+8h] [ebp-18h]
  float v15; // [esp+8h] [ebp-18h]
  float v16; // [esp+Ch] [ebp-14h]
  float v17; // [esp+Ch] [ebp-14h]
  float v18; // [esp+10h] [ebp-10h]
  float v19; // [esp+10h] [ebp-10h]
  int v20; // [esp+28h] [ebp+8h]

  *a2 = 0.0;
  a2[1] = 0.0;
  a2[2] = 0.0;
  result = sub_1011CD30(this);
  if ( result )
  {
    v20 = dword_1047CA8C;
    (*(void (**)(void))(*(_DWORD *)dword_1047CA8C + 100))();
    v5 = this[4];
    if ( !*(_DWORD *)(v5 + 1940) && (*(int (__thiscall **)(int))(*(_DWORD *)(v5 + 4) + 36))(v5 + 4) )
      sub_10026520(v5);
    v6 = *(_DWORD **)(v5 + 1940);
    if ( v6 && *v6 )
    {
      v7 = this[4];
      if ( !*(_DWORD *)(v7 + 1940) && (*(int (__thiscall **)(int))(*(_DWORD *)(v7 + 4) + 36))(v7 + 4) )
        sub_10026520(v7);
      v8 = *(int **)(v7 + 1940);
      if ( !v8 || !*v8 )
        v8 = 0;
      v9 = *v8;
      v10 = *(float *)(*v8 + 104);
      v11 = *(float *)(*v8 + 108);
      v12 = this[4];
      v14 = v10;
      v16 = v11;
      v18 = *(float *)(v9 + 112);
      if ( !*(_DWORD *)(v12 + 1940) && (*(int (__thiscall **)(int))(*(_DWORD *)(v12 + 4) + 36))(v12 + 4) )
        sub_10026520(v12);
      v13 = *(_DWORD *)(v12 + 1940);
      if ( !v13 || !*(_DWORD *)v13 )
        v13 = 0;
      v15 = (*(float *)(*(_DWORD *)v13 + 116) - v14) * 0.5 + v14;
      v17 = (*(float *)(*(_DWORD *)v13 + 120) - v16) * 0.5 + v16;
      v19 = (*(float *)(*(_DWORD *)v13 + 124) - v18) * 0.5 + v18;
      if ( a2 )
      {
        *a2 = v15;
        a2[1] = v17;
        a2[2] = v19;
      }
    }
    return (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 104))(v20);
  }
  return result;
}
