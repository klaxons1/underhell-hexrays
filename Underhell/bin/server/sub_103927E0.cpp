float *__userpurge sub_103927E0@<eax>(_BYTE *a1@<ecx>, int a2@<ebx>, float *a3, float *a4)
{
  int v5; // eax
  int v6; // eax
  float *v7; // esi
  float *v8; // eax
  int v9; // eax
  double v10; // st6
  double v11; // st7
  float *result; // eax
  float v13; // edx
  float v14; // ecx
  _BYTE v15[12]; // [esp+4h] [ebp-18h] BYREF
  float v16; // [esp+10h] [ebp-Ch]
  float v17; // [esp+14h] [ebp-8h]
  float v18; // [esp+18h] [ebp-4h]

  if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 368))(a1)
    && (v5 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 368))(a1),
        (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 220))(v5) == 19) )
  {
    if ( a1[4688]
      || (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31E4 + 8))(
           dword_106B31E4,
           1,
           *(_DWORD *)(dword_106EA124 + 48)) == 1 )
    {
      v9 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 368))(a1);
      v7 = a4;
      v8 = (float *)(*(int (__thiscall **)(int, _BYTE *, float *))(*(_DWORD *)v9 + 524))(v9, v15, a4);
    }
    else
    {
      v6 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 368))(a1);
      v7 = a4;
      v8 = (float *)(*(int (__thiscall **)(int, _BYTE *, float *, int))(*(_DWORD *)v6 + 520))(v6, v15, a4, 1);
    }
    v10 = v8[1] - v7[1];
    v11 = v8[2] - v7[2];
    v16 = *v8 - *v7;
    v17 = v10;
    v18 = v11;
    off_10689714();
    result = a3;
    v13 = v17;
    *a3 = v16;
    v14 = v18;
    a3[1] = v13;
    a3[2] = v14;
  }
  else
  {
    sub_1002E900(a1, a2, a3, a4);
    return a3;
  }
  return result;
}
