int __userpurge sub_100F4730@<eax>(int a1@<esi>, float *a2, float *a3, int a4, int a5, int a6, int a7)
{
  int result; // eax
  _BYTE v8[84]; // [esp+0h] [ebp-54h] BYREF
  int savedregs; // [esp+54h] [ebp+0h] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 104))(dword_1041315C) )
  {
    result = sub_1000FCE0((int)&savedregs, a1, a2, a3, a4, a5, a6, (int)v8);
    qmemcpy((void *)a7, v8, 0x38u);
  }
  else
  {
    result = a7;
    *(float *)(a7 + 44) = 1.0;
    *(_BYTE *)(a7 + 55) = 0;
  }
  return result;
}
