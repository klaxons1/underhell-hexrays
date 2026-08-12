BOOL __stdcall sub_10137670(float *a1, float *a2, int a3)
{
  double v3; // st7
  double v4; // st6
  double v5; // st7
  double v6; // st6
  double v7; // st5
  double v8; // st6
  double v9; // st5
  float v11; // [esp+0h] [ebp-18h] BYREF
  float v12; // [esp+4h] [ebp-14h]
  float v13; // [esp+8h] [ebp-10h]
  float v14; // [esp+Ch] [ebp-Ch] BYREF
  float v15; // [esp+10h] [ebp-8h]
  float v16; // [esp+14h] [ebp-4h]

  if ( *a2 <= (double)*a1 )
  {
    v3 = *a2;
    v11 = *a2;
    v4 = *a1;
  }
  else
  {
    v3 = *a1;
    v11 = *a1;
    v4 = *a2;
  }
  v14 = v4;
  if ( v4 == v3 )
  {
    v5 = 1.0;
    v14 = v4 + 1.0;
  }
  else
  {
    v5 = 1.0;
  }
  if ( a2[1] <= (double)a1[1] )
  {
    v6 = a2[1];
    v12 = a2[1];
    v7 = a1[1];
  }
  else
  {
    v6 = a1[1];
    v12 = a1[1];
    v7 = a2[1];
  }
  v15 = v7;
  if ( v7 == v6 )
    v15 = v7 + v5;
  if ( a2[2] <= (double)a1[2] )
  {
    v8 = a2[2];
    v13 = a2[2];
    v9 = a1[2];
  }
  else
  {
    v8 = a1[2];
    v13 = a1[2];
    v9 = a2[2];
  }
  v16 = v9;
  if ( v9 == v8 )
    v16 = v5 + v9;
  return (*(int (__thiscall **)(int, float *, float *))(*(_DWORD *)dword_1041315C + 124))(dword_1041315C, &v11, &v14)
      && (a3
       || !(*(unsigned __int8 (__thiscall **)(int, float *, float *))(*(_DWORD *)dword_1041315C + 132))(
             dword_1041315C,
             &v11,
             &v14));
}
