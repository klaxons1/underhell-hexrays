int __thiscall sub_1007D150(int *this, _DWORD *a2)
{
  int *v3; // ebx
  int v4; // edi
  int v5; // edi
  int v6; // edx
  int v7; // ecx
  _DWORD *v8; // eax
  _DWORD *v9; // ecx
  int v12; // [esp+10h] [ebp-4h]
  int v13; // [esp+1Ch] [ebp+8h]

  v3 = this;
  v4 = this[3];
  v12 = v4;
  sub_1007CF80(this, v4, a2[3], 0);
  v13 = 0;
  if ( (int)a2[3] <= 0 )
    return v4;
  v5 = 0;
  v6 = 24 * v12;
  while ( 1 )
  {
    v7 = *v3;
    v8 = (_DWORD *)(v5 + *a2);
    *(_DWORD *)(v7 + v6) = *v8;
    v9 = (_DWORD *)(v6 + v7);
    v9[1] = v8[1];
    v9[2] = v8[2];
    v9[3] = v8[3];
    v9[4] = v8[4];
    v9[5] = v8[5];
    v5 += 24;
    v6 += 24;
    if ( ++v13 >= a2[3] )
      break;
    v3 = this;
  }
  return v12;
}
