_DWORD *__thiscall sub_101AD430(float *this, _DWORD *a2, char a3)
{
  _DWORD *result; // eax
  int v4; // edx
  int v5; // ecx
  float *v6; // edx
  float *v7; // esi
  int v8; // eax
  int v9; // eax
  float *v10; // ecx
  int v11; // edx
  int v12; // ecx
  _DWORD v13[3]; // [esp+0h] [ebp-18h] BYREF
  float v14[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( *((_DWORD *)this + 207) == 2 )
  {
    result = a2;
    *a2 = *((_DWORD *)this + 182);
    v4 = *((_DWORD *)this + 183);
    v5 = *((_DWORD *)this + 184);
    a2[1] = v4;
    a2[2] = v5;
  }
  else
  {
    v6 = (float *)*((_DWORD *)this + 202);
    v7 = this;
    if ( a3 )
    {
      if ( !v6 || (v8 = *((_DWORD *)this + 62), (v8 & 0x8000) == 0) || (v8 & 4) != 0 )
        v6 = (float *)*((_DWORD *)this + 200);
    }
    else if ( !v6 || (v9 = *((_DWORD *)this + 62), (v9 & 0x8000) == 0) || (v9 & 4) == 0 )
    {
      v6 = (float *)*((_DWORD *)this + 201);
    }
    if ( !v6 )
    {
      v7 = (float *)sub_101ACD40(this, a3 == 0);
      v6 = v10;
    }
    v14[0] = v6[179] - v7[179];
    v14[1] = v6[180] - v7[180];
    v14[2] = v6[181] - v7[181];
    sub_10422540(v14, v13);
    result = a2;
    v11 = v13[1];
    *a2 = v13[0];
    v12 = v13[2];
    a2[1] = v11;
    a2[2] = v12;
  }
  return result;
}
