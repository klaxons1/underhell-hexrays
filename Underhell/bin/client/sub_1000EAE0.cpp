float *__thiscall sub_1000EAE0(void *this, float *a2, float *a3)
{
  float *result; // eax
  double v5; // st2
  double v6; // st1
  double v7; // st6
  double v8; // st7
  int (__thiscall *v9)(void *); // edx
  float v10; // [esp+4h] [ebp-18h] BYREF
  float v11; // [esp+8h] [ebp-14h]
  float v12; // [esp+Ch] [ebp-10h]
  float v13[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 132))(dword_10412D50) )
  {
    result = a3;
    *a3 = 999.0;
    a3[1] = 999.0;
    a3[2] = 999.0;
  }
  else if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 504))(this) )
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 504))(this);
    sub_10013260(v13, &v10, 0);
    v5 = v11 * 2.0;
    v6 = *a2;
    v11 = a2[1];
    result = a3;
    v7 = 16.0 * v13[2] + 2.0 * v12 + a2[2] - 4.0;
    v8 = v13[1] * 16.0 + v5 + v11;
    *a3 = v13[0] * 16.0 + v10 * 2.0 + v6;
    a3[1] = v8;
    a3[2] = v7;
  }
  else
  {
    *a3 = *a2;
    a3[1] = a2[1];
    v9 = *(int (__thiscall **)(void *))(*(_DWORD *)this + 516);
    a3[2] = a2[2];
    result = (float *)v9(this);
    if ( result )
    {
      result = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)result + 788))(result);
      if ( result )
      {
        result = (float *)(*(int (__thiscall **)(_DWORD *, int, float *, float *))(*((_DWORD *)result + 1) + 148))(
                            (_DWORD *)result + 1,
                            1,
                            &v10,
                            v13);
        if ( (_BYTE)result )
        {
          *a3 = v10;
          a3[1] = v11;
          a3[2] = v12;
        }
      }
    }
  }
  return result;
}
