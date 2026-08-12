int __usercall sub_1023C2A0@<eax>(
        int a1@<edi>,
        int a2@<esi>,
        int a3,
        float *a4,
        char *Source,
        float a6,
        int a7,
        int a8,
        int a9,
        float a10,
        float *a11)
{
  int result; // eax
  char Buffer[32]; // [esp+1Ch] [ebp-20h] BYREF

  if ( !Source || *Source != 33 )
    return sub_1023C100(&off_1064C3E8, a3, a4, Source, a6, a7, a8, a9, a10, a11);
  result = sub_102382E0((int)Source);
  if ( result >= 0 )
  {
    sub_10429A00(Buffer, 0x20u, "!%d", result);
    (*(void (__stdcall **)(int, float *, char *, _DWORD, int, int, int, _DWORD, int, int))(*(_DWORD *)dword_106B31D0
                                                                                         + 108))(
      a3,
      a4,
      Buffer,
      LODWORD(a6),
      a7,
      a8,
      a9,
      LODWORD(a10),
      a1,
      a2);
    if ( a11 )
      *a11 = ((double (__thiscall *)(int, char *))*(_DWORD *)(*(_DWORD *)dword_106B31E8 + 12))(dword_106B31E8, Buffer);
    return sub_1023B170((int)&off_1064C3E8, "UTIL_EmitAmbientSound:  Sentence emitted '%s' (ent %i)\n", Buffer, a3);
  }
  return result;
}
