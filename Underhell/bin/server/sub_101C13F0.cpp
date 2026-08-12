int __usercall sub_101C13F0@<eax>(float *a1@<edi>, int a2@<esi>, float *a3, void *a4)
{
  int v5; // eax
  bool v6; // zf
  unsigned int v7; // eax
  float v9; // [esp+4h] [ebp-Ch] BYREF
  float v10; // [esp+8h] [ebp-8h]
  float v11; // [esp+Ch] [ebp-4h]
  int v12; // [esp+18h] [ebp+8h]

  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 636))(a2);
  v6 = *(_BYTE *)(a2 + 361) == 0;
  v12 = v5;
  v9 = *a1 + *a3;
  v10 = a1[1] + a3[1];
  v11 = a1[2] + a3[2];
  if ( v6 || (*(_BYTE *)(a2 + 356) & 4) != 0 || (*(_BYTE *)(a2 + 356) & 0x20) != 0 )
  {
    v7 = *(_DWORD *)(a2 + 308);
    if ( v7 != -1
      && off_1061BE18[4 * (*(_DWORD *)(a2 + 308) & 0xFFF) + 2] == v7 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(a2 + 308) & 0xFFF) + 1] )
    {
      return sub_1025F2C0(a4);
    }
    v12 &= ~0x2000000u;
  }
  if ( (*(int (__thiscall **)(int, float, float, float))(*(_DWORD *)a2 + 492))(
         a2,
         COERCE_FLOAT(LODWORD(v9)),
         COERCE_FLOAT(LODWORD(v10)),
         COERCE_FLOAT(LODWORD(v11))) )
  {
    return (*(int (__thiscall **)(int, int, float *, float *, int, void *))(*(_DWORD *)dword_106B3CDC + 460))(
             dword_106B3CDC,
             a2,
             a1,
             &v9,
             v12,
             a4);
  }
  else
  {
    return sub_102659D0(a2, a1, &v9, v12, a4);
  }
}
