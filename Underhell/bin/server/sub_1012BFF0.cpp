int __thiscall sub_1012BFF0(_DWORD *this, int a2, float *a3, float a4)
{
  int *v4; // ebx
  int v5; // edi
  float *v6; // eax
  float *v8; // [esp-8h] [ebp-24h]
  int v9[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( a2 )
    v4 = (int *)this[4 * (*(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2) & 0xFFF) + 4];
  else
    v4 = (int *)this[16385];
  if ( !v4 )
    return 0;
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 )
      break;
    DevWarning("NULL entity in global entity list!\n");
LABEL_9:
    v4 = (int *)v4[3];
    if ( !v4 )
      return 0;
  }
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_9;
  sub_10111110((_BYTE *)(v5 + 320), a3, (float *)v9);
  v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(v5 + 320) + 8))(v5 + 320);
  v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(v5 + 320) + 4))(v5 + 320);
  if ( !sub_10113150(v6, v8, (float *)v9, a4) )
    goto LABEL_9;
  return v5;
}
