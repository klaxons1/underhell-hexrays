int __userpurge sub_1000A2C0@<eax>(int a1@<ecx>, int a2@<edi>, int a3)
{
  int result; // eax
  int v5; // eax
  int v6; // edi
  double v7; // st7
  double v8; // st6
  double v9; // rt1
  double v10; // st6
  double v11; // st7
  int v12; // eax
  int v14; // [esp+4h] [ebp-4h]

  result = *(_DWORD *)(a1 + 4);
  if ( (*(_BYTE *)(result + 28) & 0xF) == 3 )
  {
    v5 = (**(int (__thiscall ***)(int))result)(result);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 20))(v5);
    v6 = result;
    v14 = result;
    if ( result > 0 )
    {
      v7 = *((float *)off_103DC81C + 3)
         - ((double (__thiscall *)(int, int, int))*(_DWORD *)(*(_DWORD *)a1 + 20))(a1, a3, a2);
      v8 = v7 - *((float *)off_103DC81C + 4);
      if ( v7 < 0.0 )
        v7 = 0.0;
      if ( v8 < 0.0 )
        v8 = 0.0;
      v9 = v8 * *(float *)(a1 + 12);
      v10 = v7 * *(float *)(a1 + 12);
      v11 = v9;
      if ( (int)v9 % v6 > (int)v10 % v6 && (*(_BYTE *)(a1 + 16) || (double)v14 > v11) )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 24))(a1, a3);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 16))(*(_DWORD *)(a1 + 8));
      result = sub_101BC880();
      if ( (_BYTE)result )
      {
        v12 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 12))(a1);
        return sub_101BCA60(v12);
      }
    }
  }
  return result;
}
