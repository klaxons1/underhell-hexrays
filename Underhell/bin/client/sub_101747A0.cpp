int __usercall sub_101747A0@<eax>(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        int a4@<esi>,
        int a5,
        int a6,
        float *a7,
        float *a8,
        int a9,
        int a10,
        float a11,
        int a12)
{
  ((void (__thiscall *)(void ***, float *, float *, int, int, int, int, int, int, int, int))(*off_103E9C2C)[23])(
    off_103E9C2C,
    a7,
    a8,
    a9,
    a12,
    (int)((double)a10 * 0.2),
    (int)(a11 * 100.0),
    a3,
    a4,
    a2,
    a1);
  return sub_101745A0(a9, a7, a8, a10, a11, a12);
}
