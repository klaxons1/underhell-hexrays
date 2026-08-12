void __userpurge sub_102B6400(int a1@<ecx>, int a2@<edi>, float a3, float *a4)
{
  int savedregs; // [esp+14h] [ebp+0h] BYREF

  if ( !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 2) )
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    sub_1021A8D0((float *)(a1 + 580), a3, 128.0);
  }
  if ( (*(_BYTE *)(a1 + 248) & 0x20) == 0 )
  {
    sub_102B4DB0(a1, (int)&savedregs, a2, a1, a4, a3);
    if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(a1 + 3864) )
      *(float *)(a1 + 3864) = *(float *)(dword_106B31C8 + 12) + 0.5;
  }
}
