int __usercall sub_10168270@<eax>(int a1@<ebp>, int a2, int a3, float *a4, float *a5, int a6, int a7, int a8)
{
  int result; // eax
  float v9; // [esp-B0h] [ebp-BCh] BYREF
  _DWORD v10[25]; // [esp-58h] [ebp-64h] BYREF
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+0h]

  v10[22] = a1;
  v10[23] = retaddr;
  sub_101680F0(a5, a4, a6, a7, a8);
  if ( a6 || !a7 )
  {
    result = sub_1007A6A0(off_103DCD78, a6);
    if ( result )
      return (*(int (__thiscall **)(int, float *, float *, float *, int, int, _DWORD, _DWORD *, int))(*(_DWORD *)result + 424))(
               result,
               a5,
               a4,
               a4,
               a7,
               a8,
               0,
               v10,
               -1);
  }
  else
  {
    sub_1000E430(&v9, a5, a4);
    return (*(int (__thiscall **)(int, float *, float *, int, int, _DWORD, _DWORD *))(*(_DWORD *)dword_10413190 + 24))(
             dword_10413190,
             a5,
             a4,
             a7 - 1,
             a8,
             0,
             v10);
  }
  return result;
}
