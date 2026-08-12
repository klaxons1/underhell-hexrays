int __usercall sub_10189A70@<eax>(int *a1@<eax>)
{
  int result; // eax
  char Buffer[128]; // [esp+4h] [ebp-80h] BYREF

  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 300))(dword_1041315C);
  if ( !(_BYTE)result )
  {
    result = *a1;
    if ( *a1 == 1 )
    {
      return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1041315C + 24))(dword_1041315C, a1[258], 1);
    }
    else if ( result == 2 )
    {
      sub_10228370(Buffer, 0x80u, "%s \"%s\"", a1[258]);
      return (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)dword_1041315C + 24))(dword_1041315C, Buffer, 1);
    }
  }
  return result;
}
