void __userpurge sub_101BED00(int a1@<ecx>, int a2@<ebx>, int a3, int a4)
{
  int v4; // esi
  float v5; // [esp+8h] [ebp-4h]

  v5 = *(float *)(dword_106B31C8 + 12);
  v4 = a1 - 2104;
  if ( a3 )
    *(_DWORD *)(v4 + 2236) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
  else
    *(_DWORD *)(v4 + 2236) = -1;
  *(float *)(v4 + 2240) = v5;
  if ( a4 == 3 )
    sub_101BE8E0(v4, a2, a3, (int)&flt_106F1CA8);
}
