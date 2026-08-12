char __usercall sub_1031C010@<al>(_BYTE *a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  char result; // al
  double v5; // st7
  int v6; // eax
  float *v7; // eax
  float v8; // [esp+0h] [ebp-8h]

  result = a1[224];
  if ( result != 2 )
  {
    if ( result == 1 )
    {
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 2264))(a1);
      return sub_102B2E00((float *)a1);
    }
    else
    {
      v5 = sub_10314220(a1);
      v8 = v5;
      sub_100B5310((float *)a1, v8);
      sub_102B2BB0((int)a1);
      if ( (*((_DWORD *)a1 + 62) & 0x100000) != 0 && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 368))(a1) )
      {
        v6 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 368))(a1);
        v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 576))(v6);
        *((float *)a1 + 955) = *v7;
        *((float *)a1 + 956) = v7[1];
        v5 = v7[2];
        *((float *)a1 + 957) = v7[2];
      }
      if ( *((_DWORD *)a1 + 1030) == 4 )
        sub_1031ADB0((int)a1, v5);
      sub_10316190((float *)a1);
      sub_100B8A70((int)a1);
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 2264))(a1);
      sub_102B2E00((float *)a1);
      sub_102B2460((float *)a1);
      if ( (a1[3792] & 1) == 0 && a1[4268] == 1 )
        sub_1031BC70((int)a1, a3);
      return sub_101BD0E0((int *)a1 + 985, a2, *(float *)&a1, (int)a1);
    }
  }
  return result;
}
