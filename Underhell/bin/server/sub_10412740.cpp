int __usercall sub_10412740@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int v4; // eax
  _DWORD *v5; // eax
  double v6; // st7
  float v8; // [esp+0h] [ebp-Ch]

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
  {
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 264))(v4) )
    {
      sub_10021880((void *)a1);
      sub_100285C0((_DWORD *)a1, 0, 1);
    }
  }
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
  {
    sub_100AC080(*(_DWORD *)(a1 + 2404), 4092);
    v5 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1480))(a1);
    sub_100285C0((_DWORD *)a1, v5, 1);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
    {
      *(_DWORD *)(a1 + 3632) = 50;
      *(float *)(a1 + 3636) = *(float *)(dword_106B31C8 + 12);
    }
  }
  if ( *(int *)(a1 + 3632) < 1 && *(float *)(a1 + 3636) < (double)*(float *)(dword_106B31C8 + 12) )
    *(_DWORD *)(a1 + 3632) = 50;
  v6 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 1832))(a1);
  sub_104121E0(a1, a2, a3, v6);
  v8 = *(float *)(dword_106B31C8 + 12) + 0.05;
  return sub_100EC4A0((int *)a1, v8, 0);
}
