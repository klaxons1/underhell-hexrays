int __usercall sub_1000EDD0@<eax>(float a1@<ebp>, int a2@<esi>, float *a3, float *a4, int a5, int a6, int a7)
{
  int result; // eax
  float v8[23]; // [esp+24h] [ebp-5Ch] BYREF
  float retaddr; // [esp+80h] [ebp+0h]

  v8[20] = a1;
  v8[21] = retaddr;
  sub_1000E430(v8, a3, a4);
  (*(void (__thiscall **)(int, float *, int, int, int, int))(*(_DWORD *)dword_104131A0 + 16))(
    dword_104131A0,
    v8,
    a5,
    a6,
    a7,
    a2);
  result = dword_10439134;
  if ( *(_DWORD *)(dword_10439134 + 48) )
    return sub_10130AC0(a7, a7 + 12, 255, 0, 0, 1, -1.0);
  return result;
}
