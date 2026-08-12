// bad sp value at call has been detected, the output may be wrong!
int __usercall sub_10085270@<eax>(float *a1@<eax>, float *a2@<edx>, int a3@<ebp>, int a4, float *a5, float a6)
{
  double v6; // st7
  int v7; // eax
  float v9; // [esp-50h] [ebp-5Ch] BYREF
  float v10; // [esp-4Ch] [ebp-58h]
  float v11; // [esp-48h] [ebp-54h]
  int v12; // [esp-44h] [ebp-50h]
  float v13; // [esp-40h] [ebp-4Ch]
  float v14; // [esp-3Ch] [ebp-48h]
  float v15; // [esp-38h] [ebp-44h]
  int v16; // [esp-34h] [ebp-40h]
  float v17; // [esp-30h] [ebp-3Ch]
  float v18; // [esp-2Ch] [ebp-38h]
  float v19; // [esp-28h] [ebp-34h]
  int v20; // [esp-24h] [ebp-30h]
  float v21; // [esp-20h] [ebp-2Ch]
  int v22; // [esp-14h] [ebp-20h]
  int v23; // [esp-10h] [ebp-1Ch]
  int v24; // [esp-Ch] [ebp-18h]
  int v25; // [esp-8h] [ebp-14h]
  int v26; // [esp+0h] [ebp-Ch]
  void *v27; // [esp+4h] [ebp-8h]
  void *retaddr; // [esp+Ch] [ebp+0h]

  v26 = a3;
  v27 = retaddr;
  v6 = *a5;
  LOWORD(v23) = 256;
  v9 = v6;
  v10 = a5[1];
  v11 = a5[2];
  v13 = *a1 * a6;
  v14 = a1[1] * a6;
  v15 = a6 * a1[2];
  v17 = 0.0;
  v18 = 0.0;
  v19 = 0.0;
  v21 = sqrt(a2[1] * a2[1] + *a2 * *a2) * 0.5;
  v7 = (*(int (__thiscall **)(int, float, float, float, int, float, float, float, int, _DWORD, _DWORD, _DWORD, int, float, float, float, int, int, int, int))(*(_DWORD *)dword_1041315C + 168))(
         dword_1041315C,
         COERCE_FLOAT(LODWORD(v9)),
         COERCE_FLOAT(LODWORD(v10)),
         COERCE_FLOAT(LODWORD(v11)),
         v12,
         COERCE_FLOAT(LODWORD(v13)),
         COERCE_FLOAT(LODWORD(v14)),
         COERCE_FLOAT(LODWORD(v15)),
         v16,
         0.0,
         0.0,
         0.0,
         v20,
         COERCE_FLOAT(LODWORD(v21)),
         COERCE_FLOAT(LODWORD(v21)),
         COERCE_FLOAT(LODWORD(v21)),
         v22,
         v23,
         v24,
         v25);
  return (*(int (__thiscall **)(int, float *, int, _DWORD))(*(_DWORD *)v7 + 16))(v7, &v9, a4, 0);
}
