char __userpurge sub_102FDB60@<al>(float *a1@<ecx>, int a2@<edi>, float *a3, int a4, char a5)
{
  int v7; // eax
  double v8; // st7
  int v9; // [esp-8h] [ebp-18h]
  int v10[3]; // [esp+4h] [ebp-Ch] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  if ( *(float *)(dword_106B31C8 + 12) < (double)a1[418] )
    return 0;
  v9 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1);
  v7 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 1868))(a1);
  v8 = sub_10077680(v7, v9, 1);
  if ( 0.0 == v8 || *(float *)(dword_106B31C8 + 12) - v8 >= 3.0 )
    return sub_1002BF70((char *)a1, (int)&savedregs, a2, (int)a1, a3, a4, a5);
  sub_100BF1B0(a1, "mouth", (int)v10, 0, 0, 0);
  return (*(int (__thiscall **)(float *, int *, int, float *))(*(_DWORD *)a1 + 2232))(a1, v10, a4, a1 + 922);
}
