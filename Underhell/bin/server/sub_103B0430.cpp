char __userpurge sub_103B0430@<al>(int a1@<edx>, _BYTE *a2@<ecx>, int *a3@<ebx>, unsigned int a4, int a5, int *a6)
{
  char result; // al
  int v8; // ecx
  char v9; // bl

  result = sub_100CEF80((unsigned int)a2, a1, a4, a5, a6);
  if ( result )
  {
    if ( *((_DWORD *)a2 + 986) == -1
      || (a3 = off_1061BE18, off_1061BE18[4 * (*((_DWORD *)a2 + 986) & 0xFFF) + 2] != *((_DWORD *)a2 + 986) >> 12) )
    {
      v8 = 0;
    }
    else
    {
      v8 = off_1061BE18[4 * (*((_DWORD *)a2 + 986) & 0xFFF) + 1];
    }
    if ( a4 == v8 )
    {
      v9 = sub_100B93A0((int)(a2 + 3936), a3, result);
      if ( !v9 && a2[3912] )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, unsigned int))(*(_DWORD *)a2 + 876))(a2, a4) )
          (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 1616))(a2);
      }
      return v9;
    }
  }
  return result;
}
