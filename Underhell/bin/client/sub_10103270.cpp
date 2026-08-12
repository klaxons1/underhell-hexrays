bool __userpurge sub_10103270@<al>(int a1@<edi>, int a2@<esi>, float a3, float a4, float a5, float *a6, float *a7)
{
  float *v7; // eax
  double v8; // st6
  double v9; // st3
  double v10; // st1
  double v11; // st7
  double v12; // st1
  double v13; // st2
  double v14; // st7
  float v16; // [esp+0h] [ebp-1Ch] BYREF
  float v17; // [esp+4h] [ebp-18h]
  float v18; // [esp+8h] [ebp-14h]
  float v19; // [esp+Ch] [ebp-10h] BYREF
  float v20; // [esp+10h] [ebp-Ch]
  float v21; // [esp+14h] [ebp-8h]
  float v22; // [esp+18h] [ebp-4h]

  v22 = *(float *)(dword_10436354 + 44);
  v7 = (float *)sub_101356D0();
  v8 = a3;
  v9 = v7[2] - a5;
  v10 = *v7 - a3;
  v11 = v10 * v10;
  v12 = v7[1] - a4;
  v13 = v11;
  v14 = a5;
  if ( v22 * v22 > v12 * v12 + v13 + v9 * v9 )
    return 0;
  v19 = *a7 + v8;
  v20 = a7[1] + a4;
  v21 = a7[2] + v14;
  v16 = v8 + *a6;
  v17 = a4 + a6[1];
  v18 = v14 + a6[2];
  if ( (*(int (__thiscall **)(int, float *, float *, int, int))(*(_DWORD *)dword_1041315C + 128))(
         dword_1041315C,
         &v16,
         &v19,
         a1,
         a2) )
  {
    return 0;
  }
  v16 = *a7 + a3;
  v17 = a7[1] + a4;
  v18 = a7[2] + a5;
  v19 = a3 + *a6;
  v20 = a4 + a6[1];
  v21 = a5 + a6[2];
  return (*(unsigned __int8 (__thiscall **)(int, float *, float *))(*(_DWORD *)dword_1041315C + 132))(
           dword_1041315C,
           &v19,
           &v16) != 0;
}
