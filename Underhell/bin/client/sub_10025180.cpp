char __thiscall sub_10025180(int this, int a2, int a3)
{
  int v3; // eax
  int v4; // esi
  int v5; // edx
  int v6; // eax
  int v7; // edi
  int v8; // edx
  double v9; // st7
  int v10; // edx
  _DWORD *v11; // edi
  int v12; // edx
  int v13; // ebx
  _DWORD *v14; // edx
  int v16; // [esp+0h] [ebp-4h]
  int i; // [esp+Ch] [ebp+8h]

  if ( !*(_BYTE *)(this + 1240) )
    return 0;
  v3 = *(_DWORD *)(this + 1244);
  if ( !v3 || !*(_BYTE *)v3 )
    return 0;
  v16 = 0;
  if ( *(int *)(v3 + 8) > 0 )
  {
    v4 = 0;
    v5 = -8 - a2;
    v6 = a2 + 8;
    for ( i = -8 - a2; ; v5 = i )
    {
      v7 = *(_DWORD *)(this + 1244);
      v8 = v6 + v5;
      v9 = *(float *)(v8 + v7 + 12);
      v10 = v8 + v7 + 12;
      *(float *)(v6 - 8) = v9;
      v11 = (_DWORD *)(v4 + a3);
      *(float *)(v6 - 4) = *(float *)(v10 + 4);
      v6 += 12;
      *(float *)(v6 - 12) = *(float *)(v10 + 8);
      v12 = *(_DWORD *)(this + 1244);
      v13 = *(_DWORD *)(v4 + v12 + 1548);
      v14 = (_DWORD *)(v4 + v12 + 1548);
      *v11 = v13;
      v11[1] = v14[1];
      v11[2] = v14[2];
      v11[3] = v14[3];
      v4 += 16;
      if ( ++v16 >= *(_DWORD *)(*(_DWORD *)(this + 1244) + 8) )
        break;
    }
  }
  return 1;
}
