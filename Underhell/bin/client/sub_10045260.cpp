float *__userpurge sub_10045260@<eax>(float *a1@<ecx>, int a2@<ebx>, float *a3, float *a4, float *a5)
{
  int v6; // edi
  float *v7; // eax
  float *result; // eax
  bool v9; // zf
  int v10; // eax
  float *v11; // eax
  float *v12; // eax
  int (*v13)(void); // eax
  float *v14; // eax
  double v15; // st7
  float *v16; // eax
  double v17; // st7
  float v18; // edx
  float v19; // eax
  float v20; // [esp+8h] [ebp-10h] BYREF
  float v21; // [esp+Ch] [ebp-Ch]
  float v22; // [esp+10h] [ebp-8h]
  int v23; // [esp+14h] [ebp-4h]

  v6 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 848))(a1);
  v23 = v6;
  if ( v6 )
  {
    v9 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 500))(v6) == 0;
    v10 = *(_DWORD *)a1;
    if ( v9 )
    {
      return (float *)(*(int (__thiscall **)(float *, float *, float *, float *))(v10 + 1044))(a1, a3, a4, a5);
    }
    else
    {
      *a5 = ((double (__thiscall *)(float *, int))*(_DWORD *)(v10 + 952))(a1, a2);
      a1[1023] = 0.0;
      v11 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 536))(v6);
      *a4 = *v11;
      a4[1] = v11[1];
      a4[2] = v11[2];
      v12 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 36))(v6);
      *a3 = *v12;
      a3[1] = v12[1];
      a3[2] = v12[2];
      *a4 = a1[892] + *a4;
      a4[1] = a1[893] + a4[1];
      a4[2] = a1[894] + a4[2];
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 320))(dword_1041315C) )
      {
        v13 = *(int (**)(void))(*(_DWORD *)dword_10412D50 + 120);
        if ( (*(_BYTE *)(v23 + 732) & 2) != 0 )
        {
          v14 = (float *)v13();
          *a3 = v14[15] + *a3;
          a3[1] = v14[16] + a3[1];
          v15 = v14[17] + a3[2];
        }
        else
        {
          v16 = (float *)v13();
          *a3 = *a3 + *v16;
          a3[1] = v16[1] + a3[1];
          v15 = v16[2] + a3[2];
        }
      }
      else
      {
        v17 = *a3;
        v18 = a1[56];
        v19 = a1[57];
        v20 = a1[55];
        v21 = v18;
        v22 = v19;
        *a3 = v17 + v20;
        a3[1] = a3[1] + v21;
        v15 = a3[2] + v22;
      }
      a3[2] = v15;
      return (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 80))(dword_1041315C);
    }
  }
  else
  {
    v7 = (float *)(*(int (__thiscall **)(float *, float *))(*(_DWORD *)a1 + 532))(a1, &v20);
    *a3 = *v7;
    a3[1] = v7[1];
    a3[2] = v7[2];
    result = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 536))(a1);
    *a4 = *result;
    a4[1] = result[1];
    a4[2] = result[2];
  }
  return result;
}
