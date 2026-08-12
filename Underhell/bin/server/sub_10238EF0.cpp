int __usercall sub_10238EF0@<eax>(int a1@<esi>, const char *a2)
{
  int v3; // eax
  char v4; // [esp+0h] [ebp-40h] BYREF
  _BYTE v5[63]; // [esp+1h] [ebp-3Fh] BYREF

  if ( !dword_106C4E64 )
    return -1;
  v4 = 0;
  v3 = (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)dword_106B31D0 + 132))(dword_106B31D0, a2, a1);
  if ( v3 < 0 )
  {
    Warning("No such sentence group %s\n", a2);
    return -1;
  }
  if ( (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 116))(dword_106B31D0, v3, &v4, 64) < 0
    || !v4 )
  {
    return -1;
  }
  return (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_106B31D0 + 124))(dword_106B31D0, v5);
}
