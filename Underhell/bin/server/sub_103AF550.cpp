int __usercall sub_103AF550@<eax>(char *a1@<eax>, char *a2@<esi>, int a3, int a4)
{
  int v5; // edi
  int v6; // edi
  _BYTE v8[48]; // [esp+8h] [ebp-3Ch] BYREF
  _BYTE v9[12]; // [esp+38h] [ebp-Ch] BYREF
  int v10; // [esp+4Ch] [ebp+8h]

  v5 = sub_10100D60((int)a2, a1);
  v10 = sub_102457E0(a2, v5);
  v6 = sub_10245840(a2, v5);
  sub_10421CE0(v10 + 12, 3, v9);
  sub_100FEC10((int)a2, v6, a4, (int)v8);
  sub_10421B40(v9, v8, a3);
  return a3;
}
