char __usercall sub_102669C0@<al>(int *a1@<ecx>, int a2@<edi>)
{
  int v3; // eax
  int v4; // ebx
  char *v5; // eax
  char result; // al

  v3 = (*(int (__thiscall **)(int *))(*a1 + 340))(a1);
  v4 = __RTDynamicCast(
         v3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&IServerVehicle `RTTI Type Descriptor',
         (int)&CFourWheelServerVehicle `RTTI Type Descriptor',
         0);
  a1[282] = *(_DWORD *)(*(int (__thiscall **)(int *))(*a1 + 8))(a1);
  a1[283] = v4;
  sub_1020CF10((int)a1, a2);
  sub_100EBE30((int)a1, 7);
  sub_10146C40((int)(a1 + 281));
  v5 = (char *)a1[360];
  if ( !v5 )
    v5 = (char *)String;
  result = sub_10147890((int)(a1 + 281), v5, a1[359]);
  if ( result )
  {
    result = sub_100EC4A0(a1, *(float *)(dword_106B31C8 + 12), 0);
    *((float *)a1 + 366) = 0.0;
    *((float *)a1 + 367) = 0.0;
    *((float *)a1 + 368) = 0.0;
  }
  return result;
}
