float *__thiscall sub_100283A0(int *this, float *a2, int a3)
{
  float *v4; // eax
  float v5; // edx
  float v6; // ecx
  float v7; // eax
  int v8; // edx
  int v9; // ebx
  int v10; // eax
  float *v11; // edi
  float *v12; // eax
  double v13; // st6
  int (__thiscall *v14)(void *); // edx
  double v15; // rt0
  int v16; // eax
  float *v17; // eax
  double v18; // st7
  double v19; // st5
  double v20; // st4
  float *result; // eax
  int v22; // [esp-4h] [ebp-28h]
  float v23; // [esp+Ch] [ebp-18h] BYREF
  float v24; // [esp+10h] [ebp-14h]
  float v25; // [esp+14h] [ebp-10h]
  float v26; // [esp+18h] [ebp-Ch] BYREF
  float v27; // [esp+1Ch] [ebp-8h]
  float v28; // [esp+20h] [ebp-4h]
  float v29; // [esp+30h] [ebp+Ch]

  v22 = (*(int (__thiscall **)(int *))(*this + 364))(this);
  (*(void (__thiscall **)(int *))(*this + 1868))(this);
  v4 = (float *)sub_10077560(v22);
  v5 = v4[1];
  v6 = *v4;
  v7 = v4[2];
  v27 = v5;
  v8 = *this;
  v26 = v6;
  v28 = v7;
  v9 = (*(int (__thiscall **)(int *))(v8 + 368))(this);
  v10 = (*(int (__thiscall **)(int *))(*this + 368))(this);
  v11 = (float *)v10;
  if ( (*(_DWORD *)(v10 + 252) & 0x800) != 0 )
    sub_100DAE60(v10);
  v12 = (float *)(*(int (__thiscall **)(int, float *, int, int))(*(_DWORD *)v9 + 520))(v9, &v23, a3, 1);
  v13 = v12[1] - v11[146];
  v14 = *(int (__thiscall **)(void *))(*this + 368);
  v15 = v12[2] - v11[147];
  v23 = *v12 - v11[145] + v26;
  v24 = v13 + v27;
  v25 = v15 + v28;
  v16 = v14(this);
  v29 = *(float *)(dword_10690B14 + 44);
  v17 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v16 + 536))(v16, &v26);
  v18 = *v17 * v29;
  v19 = v17[1] * v29;
  v20 = v17[2];
  result = a2;
  *a2 = v18 + v23;
  a2[1] = v19 + v24;
  a2[2] = v29 * v20 + v25;
  return result;
}
