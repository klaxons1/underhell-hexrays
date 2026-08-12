int __thiscall sub_101BB020(int *this, int a2, int a3)
{
  int result; // eax
  int *v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // [esp+10h] [ebp+8h]

  ++this[87];
  if ( a2 && a3 )
  {
    result = (*(int (**)(void))(*(_DWORD *)a2 + 68))();
    v5 = (int *)result;
    if ( result )
    {
      if ( sub_101BA000(this, result) >= 0.5 )
        sub_101BF8D0(a3, a2, v5);
      v6 = *v5;
      v5[63] &= ~0x80000u;
      v8 = v6;
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 24))(a3);
      result = (*(int (__thiscall **)(int *, int, int))(v8 + 352))(v5, 1, v7);
    }
    --this[87];
  }
  else
  {
    result = this[87] - 1;
    this[87] = result;
  }
  return result;
}
