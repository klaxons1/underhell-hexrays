int __usercall sub_1000EE50@<eax>(
        float a1@<ebp>,
        int a2@<esi>,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        int a7,
        int a8,
        int a9)
{
  int result; // eax
  float v10[23]; // [esp+24h] [ebp-5Ch] BYREF
  float retaddr; // [esp+80h] [ebp+0h]

  v10[20] = a1;
  v10[21] = retaddr;
  sub_1000E4B0(v10, a3, a4, a5, a6);
  (*(void (__thiscall **)(int, float *, int, int, int, int))(*(_DWORD *)dword_104131A0 + 16))(
    dword_104131A0,
    v10,
    a7,
    a8,
    a9,
    a2);
  result = dword_10439134;
  if ( *(_DWORD *)(dword_10439134 + 48) )
    return sub_10130AC0(a9, a9 + 12, 255, 255, 0, 1, -1.0);
  return result;
}
