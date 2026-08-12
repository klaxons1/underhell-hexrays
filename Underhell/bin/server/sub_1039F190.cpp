int __userpurge sub_1039F190@<eax>(int a1@<ecx>, int a2@<edi>, int a3)
{
  int result; // eax
  _BYTE v5[12]; // [esp+4h] [ebp-54h] BYREF
  float v6[18]; // [esp+10h] [ebp-48h] BYREF
  int savedregs; // [esp+58h] [ebp+0h] BYREF

  result = a3;
  if ( (*(_BYTE *)(a3 + 356) & 0x28) == 0 )
  {
    *(_BYTE *)(a1 + 3828) = 0;
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a3 + 24));
    if ( !result )
    {
      *(_BYTE *)(a1 + 3825) = 1;
      sub_1039EE40((float *)a1, (int)&savedregs, a2, a1, (int)v5);
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 592))(a1);
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 584))(a1);
      sub_10264E40((int)v5, (int)"Rollermine.Crater");
      result = sub_102ABAF0(v6, (float *)(a1 + 728), 0);
    }
    *(_DWORD *)(a1 + 196) = 0;
  }
  return result;
}
