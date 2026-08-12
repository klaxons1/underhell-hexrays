int __thiscall sub_103FE950(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // edi
  int v4; // edx
  _DWORD *v5; // esi
  int v6; // ecx
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int result; // eax
  float v12; // [esp+Ch] [ebp-10h]
  int v13; // [esp+10h] [ebp-Ch]
  int v14; // [esp+14h] [ebp-8h]

  v2 = this;
  if ( a2 )
    v13 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    v13 = -1;
  v12 = *(float *)(dword_106B31C8 + 12);
  sub_103FC6C0(v2);
  v3 = v2[2462];
  v4 = 0;
  if ( v3 <= 0 )
  {
LABEL_13:
    v7 = v2[2462];
    v8 = v2[2460];
    if ( v7 + 1 > v8 )
      sub_10226330(v2 + 2459, v7 - v8 + 1);
    ++v2[2462];
    v9 = v2[2459];
    v10 = v2[2462] - v7 - 1;
    v2[2463] = v9;
    if ( v10 > 0 )
      memcpy((void *)(v9 + 8 * v7 + 8), (const void *)(v9 + 8 * v7), 8 * v10);
    result = v2[2459] + 8 * v7;
    if ( result )
    {
      *(float *)result = v12;
      *(_DWORD *)(result + 4) = v13;
    }
  }
  else
  {
    v14 = v2[2459];
    v5 = (_DWORD *)(v14 + 4);
    while ( 1 )
    {
      v6 = *v5 == -1 || off_1061BE18[4 * (*v5 & 0xFFF) + 2] != *v5 >> 12 ? 0 : off_1061BE18[4 * (*v5 & 0xFFF) + 1];
      if ( v6 == a2 )
        break;
      ++v4;
      v5 += 2;
      if ( v4 >= v3 )
      {
        v2 = this;
        goto LABEL_13;
      }
    }
    result = v14;
    *(float *)(v14 + 8 * v4) = v12;
    *(_DWORD *)(v14 + 8 * v4 + 4) = v13;
  }
  return result;
}
