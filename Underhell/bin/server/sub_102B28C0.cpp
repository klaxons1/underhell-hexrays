char __userpurge sub_102B28C0@<al>(_DWORD *a1@<ecx>, int a2@<edi>, float *a3)
{
  int v4; // edi
  float *v5; // eax
  double v6; // st7
  char result; // al
  _BYTE v8[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( !(*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1) )
    return 0;
  v4 = (*(int (__thiscall **)(_DWORD *, int))(*a1 + 368))(a1, a2);
  if ( (a1[63] & 0x800) != 0 )
    sub_100DAE60((int)a1);
  v5 = (float *)(*(int (__thiscall **)(int, _BYTE *, _DWORD *))(*(_DWORD *)v4 + 520))(v4, v8, a1 + 145);
  *a3 = *v5;
  a3[1] = v5[1];
  v6 = v5[2];
  result = 1;
  a3[2] = v6;
  return result;
}
