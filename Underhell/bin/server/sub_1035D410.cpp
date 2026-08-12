char __userpurge sub_1035D410@<al>(_DWORD *a1@<ecx>, int a2@<edi>, float *a3)
{
  float v3; // edx
  float v5; // eax
  int v6; // ecx
  double v7; // st7
  double v8; // st6
  float v10; // [esp+4h] [ebp-Ch] BYREF
  float v11; // [esp+8h] [ebp-8h]
  float v12; // [esp+Ch] [ebp-4h]
  float v13; // [esp+18h] [ebp+8h]

  v3 = a3[1];
  v5 = a3[2];
  v10 = *a3;
  v6 = a1[106];
  v11 = v3;
  v12 = v5;
  if ( v6 )
  {
    v13 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v6 + 116))(v6);
    v7 = off_10689714();
    v8 = v13 * 1000.0;
    if ( v8 <= v7 )
      v7 = v8;
    v10 = v10 * v7;
    v11 = v11 * v7;
    v12 = v7 * v12;
  }
  return sub_100C40A0(a1, a2, &v10);
}
