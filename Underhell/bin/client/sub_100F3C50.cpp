char __userpurge sub_100F3C50@<al>(float a1@<ebp>, int a2, int a3, float *a4)
{
  _BYTE v5[88]; // [esp-A8h] [ebp-B4h] BYREF
  float v6[23]; // [esp-50h] [ebp-5Ch] BYREF
  float retaddr; // [esp+Ch] [ebp+0h]

  v6[20] = a1;
  v6[21] = retaddr;
  if ( !a3 )
    return 1;
  sub_1000E430(v6, a4, a4);
  (*(void (__thiscall **)(int, float *, int, int, _BYTE *))(*(_DWORD *)dword_104131A0 + 8))(
    dword_104131A0,
    v6,
    -1,
    a3,
    v5);
  return v5[55];
}
