int __usercall sub_102545E0@<eax>(int a1@<edi>)
{
  int result; // eax
  int v2; // esi
  int v3; // [esp+0h] [ebp-44h]
  char Buffer[64]; // [esp+4h] [ebp-40h] BYREF

  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 1);
  v2 = result;
  if ( result )
  {
    if ( (unsigned int)(a1 + 1) > 0x1F )
    {
      return Warning("TriggerCDAudio - Track %d out of range\n", v3);
    }
    else if ( a1 == -1 )
    {
      return (*(int (__cdecl **)(int, int, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
               dword_106B31D0,
               result,
               "cd pause\n");
    }
    else
    {
      sub_10429A00(Buffer, 0x40u, "cd play %3d\n", a1);
      return (*(int (__cdecl **)(int, int, char *))(*(_DWORD *)dword_106B31D0 + 152))(dword_106B31D0, v2, Buffer);
    }
  }
  return result;
}
