int __thiscall sub_102D3590(int this, int a2, float *a3, int a4, int a5, int a6)
{
  int result; // eax
  int v8; // ecx
  float v9; // edx
  unsigned int v10; // eax
  int *v11; // ecx
  unsigned int v12; // eax
  int v13; // ecx
  float *v14; // eax
  unsigned int v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  int v18; // ecx
  __int64 v19; // [esp+4h] [ebp-3Ch]
  _BYTE v20[12]; // [esp+1Ch] [ebp-24h] BYREF
  int v21; // [esp+28h] [ebp-18h] BYREF
  float v22; // [esp+2Ch] [ebp-14h]
  float v23; // [esp+30h] [ebp-10h]
  int v24; // [esp+34h] [ebp-Ch]
  float v25; // [esp+38h] [ebp-8h]
  float v26; // [esp+3Ch] [ebp-4h]

  result = *(_DWORD *)(this + 248) >> 7;
  if ( (*(_DWORD *)(this + 248) & 0x80) == 0 )
  {
    v8 = *(int *)a4;
    v9 = *(float *)(a4 + 4);
    v23 = *(float *)(a4 + 8);
    v10 = *(_DWORD *)(this + 808);
    v21 = v8;
    v22 = v9;
    if ( v10 != -1 )
    {
      v11 = &off_1061BE18[4 * (v10 & 0xFFF) + 1];
      v12 = v10 >> 12;
      if ( v11[1] == v12 )
      {
        if ( *v11 )
        {
          if ( v11[1] == v12 )
            v13 = *v11;
          else
            v13 = 0;
          v14 = (float *)(*(int (__thiscall **)(int, _BYTE *, float *, _DWORD))(*(_DWORD *)v13 + 520))(v13, v20, a3, 0);
          *(float *)&v24 = *v14 - *a3;
          v25 = v14[1] - a3[1];
          v26 = v14[2] - a3[2];
          off_10689714();
          if ( *(float *)(a4 + 8) * v26 + *(float *)a4 * *(float *)&v24 + *(float *)(a4 + 4) * v25 >= 0.97 )
          {
            v21 = v24;
            v22 = v25;
            v23 = v26;
          }
          v15 = *(_DWORD *)(this + 808);
          if ( v15 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 808) & 0xFFF) + 2] != v15 >> 12 )
            v16 = 0;
          else
            v16 = off_1061BE18[4 * (*(_DWORD *)(this + 808) & 0xFFF) + 1];
          *(_BYTE *)(this + 1449) = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v16 + 284))(v16) != 0;
          v17 = *(_DWORD *)(this + 808);
          if ( v17 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 808) & 0xFFF) + 2] != v17 >> 12 )
            v18 = 0;
          else
            v18 = off_1061BE18[4 * (*(_DWORD *)(this + 808) & 0xFFF) + 1];
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v18 + 320))(v18) )
          {
            HIDWORD(v19) = this;
            LODWORD(v19) = this;
            sub_1010DD80((_DWORD *)(this + 1396), v19, 0.0);
          }
        }
      }
    }
    sub_102D1BF0((char *)this, a2, a3, (float *)&v21, a5, a6);
    sub_102CBCA0((_DWORD *)this);
    *(float *)(this + 1432) = *(float *)(dword_106B31C8 + 12) + 0.2;
    result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 2);
    *(float *)(this + 1428) = (double)result + *(float *)(dword_106B31C8 + 12);
  }
  return result;
}
