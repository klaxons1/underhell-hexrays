int __thiscall sub_1021F0C0(_DWORD *this, float *a2, int a3)
{
  int result; // eax
  int v6; // ebx
  float v7; // edx
  float v8; // ecx
  double v9; // st6
  double v10; // st5
  int v11; // eax
  float *v12; // eax
  float v13; // [esp+8h] [ebp-14h]
  float v14; // [esp+Ch] [ebp-10h]
  float v15; // [esp+10h] [ebp-Ch] BYREF
  float v16; // [esp+14h] [ebp-8h]
  float v17; // [esp+18h] [ebp-4h]

  result = a3;
  if ( a3 > 0 )
  {
    v6 = a3;
    do
    {
      v7 = a2[2];
      v8 = a2[1];
      v15 = *a2;
      v17 = v7;
      v16 = v8;
      v9 = v7;
      v10 = v8;
      if ( v15 != flt_10689730 || v10 != flt_10689734 || v9 != flt_10689738 )
      {
        v11 = this[7];
        if ( *(_DWORD *)(v11 + 1284) )
          v12 = (float *)(v11 + 1308);
        else
          v12 = &flt_106F1CA8;
        v13 = v12[1];
        v14 = v12[2];
        v15 = v15 - *v12;
        v16 = v10 - v13;
        v17 = v9 - v14;
      }
      result = (*(int (__thiscall **)(_DWORD *, float *, int))(*this + 76))(this, &v15, 12);
      a2 += 3;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
