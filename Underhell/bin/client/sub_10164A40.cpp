void __userpurge sub_10164A40(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        int a4,
        int a5,
        float *a6,
        float *a7,
        float a8,
        float a9)
{
  if ( *(int *)(a1 + 16) <= 0 && !*(_BYTE *)(a1 + 8) )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 12))(a4) )
      sub_10053380(a2, a3, a4, a4, a5, a6, a7, a8, a9);
  }
}
