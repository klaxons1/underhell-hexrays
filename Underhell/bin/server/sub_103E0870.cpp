int __usercall sub_103E0870@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  int result; // eax
  int *v4; // edi
  double v5; // st7
  double v6; // st6
  int v7; // [esp+10h] [ebp-4h]
  float v8; // [esp+10h] [ebp-4h]

  result = (**(int (__thiscall ***)(int))(a1 + 1484))(a1 + 1484);
  if ( result )
  {
    v4 = (int *)sub_1023DBA0();
    v7 = *(_DWORD *)(a1 + 1164);
    v5 = (double)v7
       / (double)(int)(*(float *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 1160) + 12))(*(_DWORD *)(a1 + 1160))
                                + 516)
                     * 0.056818184);
    v6 = 1.0;
    if ( v5 > 1.0 || (v6 = 0.0, v5 < 0.0) )
      v5 = v6;
    v8 = v5;
    sub_103DF600(a1, v5);
    sub_103E0280(a1, v4, v8);
    sub_103E0410(a1, a2, (int)v4, a1, v4, v8);
    return sub_103E05A0((unsigned __int8 *)a1, v4, v8);
  }
  return result;
}
