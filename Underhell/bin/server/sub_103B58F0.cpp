int __userpurge sub_103B58F0@<eax>(_BYTE *a1@<ecx>, int a2@<ebx>, int a3)
{
  int v3; // edi
  unsigned int v4; // eax
  int *v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx
  int result; // eax
  int v10; // ecx
  int v11; // edx
  int v12[3]; // [esp+18h] [ebp-18h] BYREF
  int v13[3]; // [esp+24h] [ebp-Ch] BYREF

  v3 = a3;
  v4 = *(_DWORD *)(a3 + 40);
  if ( v4 != -1
    && (v6 = &off_1061BE18[4 * (*(_DWORD *)(a3 + 40) & 0xFFF) + 1],
        v7 = v4 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(a3 + 40) & 0xFFF) + 2] == v7)
    && *v6
    && (off_1061BE18[4 * (*(_DWORD *)(a3 + 40) & 0xFFF) + 2] != v7 ? (v8 = 0) : (v8 = *v6),
        result = sub_103D2100(v8),
        (_BYTE)result) )
  {
    if ( a1[224] == 1 )
      return result;
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)a1 + 472))(a1, a1 + 224);
    a1[224] = 1;
    sub_100C7570((volatile signed __int32 *)a1, dword_106EAD64, COERCE_FLOAT(1), 1);
    v10 = *((_DWORD *)a1 + 910);
    if ( *(_DWORD *)(v10 + 28) == -1
      || off_1061BE18[4 * (*(_DWORD *)(v10 + 28) & 0xFFF) + 2] != *(_DWORD *)(v10 + 28) >> 12 )
    {
      v11 = 0;
    }
    else
    {
      v11 = off_1061BE18[4 * (*(_DWORD *)(v10 + 28) & 0xFFF) + 1];
    }
    sub_103B1710(v10, (int)(a1 + 3620), v11, 100.0);
    v3 = a3;
  }
  else
  {
    sub_103B38A0(a1, 0.1);
    sub_101BD250((int *)a1 + 955);
  }
  if ( a1[3912] )
  {
    sub_100BF1B0(a1, "minigun", (int)v12, 0, 0, 0);
    *(float *)v13 = 0.0;
    *(float *)&v13[1] = 0.0;
    *(float *)&v13[2] = 1.0;
    sub_1013D530((float *)v12, (float *)v13, (int)a1, 100, 128, 0, 0.0, 0, 0, -1);
  }
  a1[3624] = sub_103B0920(a1, v3);
  sub_10035690((int)a1, a2, v3, v3);
  sub_10154AF0(a1, 1);
  sub_10154BB0(3);
  return sub_10154B90();
}
