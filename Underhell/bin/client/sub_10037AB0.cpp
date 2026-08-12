// bad sp value at call has been detected, the output may be wrong!
void __userpurge sub_10037AB0(
        int a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        float *a5,
        float *a6,
        int a7,
        int a8,
        int a9,
        char a10,
        int a11,
        int a12)
{
  int v13; // eax
  int v14; // [esp-64h] [ebp-70h]
  float v16[4]; // [esp-50h] [ebp-5Ch] BYREF
  float v17; // [esp-40h] [ebp-4Ch]
  float v18; // [esp-3Ch] [ebp-48h]
  float v19; // [esp-38h] [ebp-44h]
  _DWORD v20[3]; // [esp+0h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+0h]

  v20[0] = a2;
  v20[1] = retaddr;
  sub_1000E430(v16, a5, a6);
  v14 = *(_DWORD *)(a1 + 92);
  v17 = v17 * 1.1;
  v18 = v18 * 1.1;
  v19 = 1.1 * v19;
  v13 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413178 + 36))(dword_10413178, v14, a4) - 1;
  if ( v13 )
  {
    if ( v13 == 2 )
      sub_10037980((unsigned __int16 *)a1, COERCE_FLOAT(v20), a3, a1, v16, a8, a9, a10, a11, a12);
    else
      *(float *)(a11 + 44) = 1.0;
  }
  else
  {
    sub_10034840((_DWORD *)a1, (int)v16, a7, a9, a10, a11);
  }
}
