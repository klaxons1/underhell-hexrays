char __usercall sub_100A4700@<al>(int a1@<ebp>, int a2, int a3, int a4, int a5, int a6, int a7, float a8)
{
  float v9[20]; // [esp-C0h] [ebp-CCh] BYREF
  void **v10; // [esp-70h] [ebp-7Ch] BYREF
  float v11[21]; // [esp-60h] [ebp-6Ch] BYREF
  char v12; // [esp-Ch] [ebp-18h]
  int v13; // [esp+0h] [ebp-Ch]
  void *v14; // [esp+4h] [ebp-8h]
  void *retaddr; // [esp+Ch] [ebp+0h]

  v13 = a1;
  v14 = retaddr;
  if ( dword_104374C8 > 1 )
    return 0;
  sub_1000E430(v9, (float *)&a5, (float *)&a2);
  v10 = &CRagdollEnumerator::`vftable';
  sub_100A44E0(v11, (int)v9);
  v11[20] = a8;
  v12 = 0;
  (*(void (__thiscall **)(int, int, float *, _DWORD, void ***))(*(_DWORD *)dword_10413184 + 56))(
    dword_10413184,
    8,
    v9,
    0,
    &v10);
  return v12;
}
