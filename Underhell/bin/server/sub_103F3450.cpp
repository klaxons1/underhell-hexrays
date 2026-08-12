int __usercall sub_103F3450@<eax>(int *a1@<ecx>, int a2@<edi>)
{
  const char *v3; // eax
  _BYTE v5[4]; // [esp+1Ch] [ebp-4h] BYREF

  (*(void (__thiscall **)(int *))(*a1 + 100))(a1);
  v3 = *(const char **)(*(int (__thiscall **)(int *, _BYTE *))(*a1 + 28))(a1, v5);
  if ( !v3 )
    v3 = String;
  (*(void (__thiscall **)(int *, const char *))(*a1 + 104))(a1, v3);
  sub_100EBE30((int)a1, 7);
  sub_10211600((int)a1, a2);
  if ( *((_BYTE *)a1 + 225) != 1 )
  {
    (*(void (__thiscall **)(int *, int))(*a1 + 480))(a1, (int)a1 + 225);
    *((_BYTE *)a1 + 225) = 1;
  }
  return sub_100EC4A0(a1, *(float *)(dword_106B31C8 + 12), 0);
}
