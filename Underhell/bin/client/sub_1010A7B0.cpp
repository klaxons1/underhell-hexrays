int __thiscall sub_1010A7B0(int this, int a2, float *a3, int a4)
{
  int v5; // eax
  long double v6; // st7
  int v7; // esi
  float *v8; // ebx
  float *v9; // edi
  int v10; // edx
  float *v11; // ecx
  float v12[4]; // [esp+0h] [ebp-14h]
  int v13; // [esp+10h] [ebp-4h]
  int v14; // [esp+20h] [ebp+Ch]

  if ( !*(_BYTE *)(this + 20) )
    return 0;
  v5 = *(_DWORD *)(this + 24);
  v13 = 1;
  if ( (*(_WORD *)(v5 + 18) & 0x400) == 0 )
  {
    v6 = *(float *)(v5 + 48);
    v7 = 0;
    if ( a4 > 0 )
    {
      v8 = a3;
      v9 = a3 + 3;
      v14 = a2 - (_DWORD)a3;
      while ( 2 )
      {
        v10 = 0;
        v11 = v8;
        while ( *v11 == *(float *)((char *)v11 + v14) )
        {
          ++v10;
          ++v11;
          if ( v10 >= 4 )
            goto LABEL_16;
        }
        v12[v7] = *(float *)((char *)v9 + v14) - *v9;
        if ( v6 <= 0.0 || fabs(v12[0]) > v6 || fabs(v12[1]) > v6 || fabs(v12[2]) > v6 || fabs(v12[3]) > v6 )
          return 0;
        v13 = 2;
LABEL_16:
        ++v7;
        v8 += 4;
        v9 += 4;
        if ( v7 < a4 )
          continue;
        break;
      }
    }
  }
  return v13;
}
