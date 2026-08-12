int __userpurge sub_10093250@<eax>(int *a1@<ecx>, int a2@<edi>, int a3)
{
  int (__thiscall *v4)(int *); // eax
  int v5; // ecx
  int v7[13]; // [esp+4h] [ebp-58h] BYREF
  float v8; // [esp+38h] [ebp-24h]
  int v9; // [esp+44h] [ebp-18h]
  double v10; // [esp+54h] [ebp-8h]
  int v11; // [esp+64h] [ebp+8h]

  sub_1001E4E0(v7, a3);
  if ( v9 )
  {
    if ( (*(int (__thiscall **)(int *))(*a1 + 220))(a1) == 3 && (v9 & 1) == 0 )
    {
      v4 = *(int (__thiscall **)(int *))(*a1 + 448);
      v10 = v8;
      v11 = v4(a1);
      if ( (double)v11 * 0.25 < v10 )
        v8 = (double)(*(int (__thiscall **)(int *))(*a1 + 448))(a1) * 0.25;
    }
  }
  v5 = a1[906];
  if ( v5 )
    return (*(int (__thiscall **)(int, int *))(*(_DWORD *)v5 + 200))(v5, v7);
  else
    return sub_10035940(a1, a2, (int)v7);
}
