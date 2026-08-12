void *__usercall sub_1012D510@<eax>(
        float a1@<ebp>,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        int a6,
        int a7,
        float *a8)
{
  void *result; // eax
  float v9[23]; // [esp-50h] [ebp-5Ch] BYREF
  float retaddr; // [esp+Ch] [ebp+0h]

  v9[20] = a1;
  v9[21] = retaddr;
  if ( a6 && (*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)a6 + 548))(a6, a7, -1) )
  {
    sub_1000E4B0(v9, a2, a3, a4, a5);
    return (void *)(*(int (__thiscall **)(int, float *, int, int, float *))(*(_DWORD *)dword_104131A0 + 8))(
                     dword_104131A0,
                     v9,
                     -1,
                     a6,
                     a8);
  }
  else
  {
    result = memset(a8, 0, 0x54u);
    a8[11] = 1.0;
  }
  return result;
}
