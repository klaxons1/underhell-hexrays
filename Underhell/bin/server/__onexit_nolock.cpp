PVOID __cdecl _onexit_nolock(PVOID Ptr)
{
  PVOID *v1; // ebx
  PVOID *v2; // eax
  PVOID *v3; // esi
  int v4; // edi
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // eax
  char *v8; // eax
  int v10; // [esp+Ch] [ebp-4h]

  v1 = (PVOID *)DecodePointer(dword_10709CB0);
  v10 = (int)v1;
  v2 = (PVOID *)DecodePointer(dword_10709CAC);
  v3 = v2;
  if ( v2 >= v1 )
  {
    v4 = (char *)v2 - (char *)v1;
    if ( (unsigned int)((char *)v2 - (char *)v1) < 0xFFFFFFFC )
    {
      v5 = sub_10184630((int)v1);
      if ( v5 >= v4 + 4 )
      {
LABEL_11:
        *v3 = EncodePointer(Ptr);
        dword_10709CAC = EncodePointer(v3 + 1);
        return Ptr;
      }
      v6 = 2048;
      if ( v5 < 0x800 )
        v6 = v5;
      v7 = v5 + v6;
      if ( v7 >= v5 && (v8 = (char *)sub_10184600(v10, v7)) != 0
        || v5 + 16 >= v5 && (v8 = (char *)sub_10184600(v10, v5 + 16)) != 0 )
      {
        v3 = (PVOID *)&v8[4 * (v4 >> 2)];
        dword_10709CB0 = EncodePointer(v8);
        goto LABEL_11;
      }
    }
  }
  return 0;
}
